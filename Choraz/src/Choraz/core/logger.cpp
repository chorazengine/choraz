#include "logger.h"

#include "Platform/platform.h"

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

namespace Logger
{
	b8 initialize()
	{
		return TRUE;
	}

	void Log(log_level level, const char* message, ...)
	{
		const char* level_strings[6] = { "[FATAL]: ", "[ERROR]: ", "[WARNING]: ", "[INFO]: ", "[DEBUG]: ", "[TRACE]: " };
		b8 is_error = level <= LevelError;

		const i32 msg_length = 32000;
		char* out_message = new char[msg_length];
		memset(out_message, 0, sizeof(out_message));

		va_list arg_ptr;
		va_start(arg_ptr, message);
		vsnprintf(out_message, msg_length, message, arg_ptr);
		va_end(arg_ptr);

		char out_message2[msg_length];
		sprintf_s(out_message2, "%s%s\n", level_strings[level], out_message);
		delete[] out_message;
		
		// Platform specific output
		if (is_error) {
			Platform::write_console_error(out_message2, level);
		} else {
			Platform::write_console(out_message2, level);
		}
	}
}
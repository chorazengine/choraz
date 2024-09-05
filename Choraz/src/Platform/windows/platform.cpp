#include "Platform/platform.h"

#include <iostream>
#include <Windows.h>
#include <windowsx.h>

#ifdef CH_PLATFORM_WINDOWS

namespace Platform
{
	void write_console(const char* message, u8 colour)
	{
		HANDLE console_handle = GetStdHandle(STD_OUTPUT_HANDLE);
		// FATAL,ERROR,WARN,INFO,DEBUG,TRACE
		static u8 levels[6] = {64, 4, 6, 2, 1, 8};
		SetConsoleTextAttribute(console_handle, levels[colour]);
		OutputDebugStringA(message);
		u64 length = std::strlen(message);
		LPDWORD number_written = 0;
		WriteConsoleA(GetStdHandle(STD_OUTPUT_HANDLE), message, (DWORD)length, number_written, 0);
	}

	void write_console_error(const char* message, u8 colour)
	{
		HANDLE console_handle = GetStdHandle(STD_ERROR_HANDLE);
		// FATAL,ERROR,WARN,INFO,DEBUG,TRACE
		static u8 levels[6] = {64, 4, 6, 2, 1, 8};
		SetConsoleTextAttribute(console_handle, levels[colour]);
		OutputDebugStringA(message);
		u64 length = std::strlen(message);
		LPDWORD number_written = 0;
		WriteConsoleA(GetStdHandle(STD_ERROR_HANDLE), message, (DWORD)length, number_written, 0);
	}
}

#endif
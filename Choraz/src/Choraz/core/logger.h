#pragma once

#include "Choraz/defines.h"

typedef enum log_level
{
	LevelFatal,
	LevelError,
	LevelWarning,
	LevelInfo,
	LevelDebug,
	LevelTrace
} log_level;

namespace Logger
{
	static const b8 is_initialized = FALSE;
	b8 initialize();

	CHORAZ_API void Log(log_level level, const char* message, ...);
};

#define LogInfo(message, ...) Logger::Log(LevelInfo, message, ##__VA_ARGS__)
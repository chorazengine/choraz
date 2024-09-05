#pragma once

#include "Choraz/defines.h"

typedef enum LogLevel
{
	LevelFatal,
	LevelError,
	LevelWarning,
	LevelInfo,
	LevelDebug,
	LevelTrace
} LogLevel;

namespace Logger
{
	static const b8 is_initialized = FALSE;
	b8 initialize();

	CHORAZ_API void Log(LogLevel level, const char* message, ...);
};

#define FATAL(message, ...) Logger::Log(LevelFatal, message, ##__VA_ARGS__)
#define ERROR(message, ...) Logger::Log(LevelError, message, ##__VA_ARGS__)
#define WARN(message, ...) Logger::Log(LevelWarning, message, ##__VA_ARGS__)
#define INFO(message, ...) Logger::Log(LevelInfo, message, ##__VA_ARGS__)
#define DEBUG(message, ...) Logger::Log(LevelDebug, message, ##__VA_ARGS__)
#define TRACE(message, ...) Logger::Log(LevelTrace, message, ##__VA_ARGS__)
#pragma once

#include <stdint.h>

typedef struct PlatformState
{
	void* internal_state;
} PlatformState;

class Platform
{
public:
	// Starts up the platform and creates a window
	Platform(PlatformState* plat_state, const char* app_name, int height, int width, int x, int y);
	bool pump_messages();

	static void console_write(const char* msg, uint8_t colour);
	static void console_write_err(const char* msg, uint8_t colour);

	static void memory_allocate(uint64_t size, bool aligned);
	static void memory_set(void* dest, uint32_t value, uint64_t size);
	static void memory_zero(void* block, uint64_t size);
	static void memory_free(void* block, bool aligned);
	static void memory_copy(void* dest, const void* src, uint64_t size);

	static void absolute_time();

	static void sleep();
};
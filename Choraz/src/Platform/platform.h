#pragma once

#include "Choraz/defines.h"

typedef struct platform_state
{
	void* internal_state;
} platform_state;

namespace Platform
{
	b8 startup(
		platform_state* state,
		const char* application_name,
		i32 x,
		i32 y,
		i32 width,
		i32 height
	);

	b8 shutdown(platform_state* state);

	b8 message_pump(platform_state* state);

	void* memory_allocate(long int size, b8 aligned);

	void memory_free(void* block, b8 aligned);

	void* memory_zero(void* block, u64 size);

	void* memory_copy(void* dest, const void* src, u64 size);

	void* memory_set(void* dest, i32 value, u64 size);

	void write_console(const char* message, u8 colour);

	void write_console_error(const char* message, u8 colour);

	f64 get_absolute_time();

	void sleep(u64 ms);
};
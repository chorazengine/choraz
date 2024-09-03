#pragma once

#ifdef CH_PLATFORM_WINDOWS
	#ifdef CH_BUILD_DLL
		#define CHORAZ_API __declspec(dllexport)
	#else
		#define CHORAZ_API __declspec(dllimport)
	#endif
#else
	#error Choraz only supports Windows for now!
#endif
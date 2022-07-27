#pragma once


#ifdef NL_PLATFORM_WINDOWS
	#ifdef NL_BUILD_DLL
		#define NAMELESS_API __declspec(dllexport)
	#else
		#define NAMELESS_API __declspec(dllimport)
	#endif
#else
	#error Nameless only supports Windows!
#endif

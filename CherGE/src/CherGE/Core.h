#pragma once

#ifdef CH_PLATFORM_WINDOWS

	#ifdef CH_BUILD_DLL
		#define CH_API __declspec(dllexport)
	#else
		#define CH_API __declspec(dllimport)

	#endif // CH_BUILD_DLL

#else
	#error only support windows!
	
#endif // CH_PLATFORM_WINDOWS

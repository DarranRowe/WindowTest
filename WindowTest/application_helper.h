#pragma once

#ifndef _WINDOWS_
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#endif
#ifndef _CINTTYPES_
#include <cinttypes>
#endif

inline bool is_at_least_windows_10_build(uint32_t build)
{
	if (build < 10240)
	{
		return false;
	}
	OSVERSIONINFOEXW osv{};
	osv.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEXW);
	osv.dwMajorVersion = 10;
	osv.dwMinorVersion = 0;
	osv.dwBuildNumber = build;

	auto cm = VerSetConditionMask(VerSetConditionMask(VerSetConditionMask(0, VER_BUILDNUMBER, VER_GREATER_EQUAL), VER_MINORVERSION, VER_EQUAL), VER_MAJORVERSION, VER_EQUAL);

	return VerifyVersionInfoW(&osv, VER_MAJORVERSION | VER_MINORVERSION | VER_BUILDNUMBER, cm);
}

inline bool is_windows_10_build(uint32_t build)
{
	if (build < 10240)
	{
		return false;
	}
	OSVERSIONINFOEXW osv{};
	osv.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEXW);
	osv.dwMajorVersion = 10;
	osv.dwMinorVersion = 0;
	osv.dwBuildNumber = build;

	auto cm = VerSetConditionMask(VerSetConditionMask(VerSetConditionMask(0, VER_BUILDNUMBER, VER_EQUAL), VER_MINORVERSION, VER_EQUAL), VER_MAJORVERSION, VER_EQUAL);

	return VerifyVersionInfoW(&osv, VER_MAJORVERSION | VER_MINORVERSION | VER_BUILDNUMBER, cm);
}

inline bool is_build_win10_range(uint32_t build)
{
	//Builds below 10240 were 8.1,
	//the latest 10 build is 19041/19045
	if (build < 10240 || build >= 20000)
	{
		return false;
	}
	return true;
}

inline bool is_build_known_win11_range(uint32_t build)
{
	//Builds 22000 and above are currently Windows 11
	if (build >= 22000)
	{
		return true;
	}
	return false;
}
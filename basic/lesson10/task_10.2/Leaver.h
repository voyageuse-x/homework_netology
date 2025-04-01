#pragma once
#include <string>
#ifdef LEAVERLIB_EXPORTS
#define LEAVERLIB_API __declspec(dllexport)
#else 
#define LAEVERLIB_API __declspec(dllimport)
#endif

class Leaver {
public:
	LAEVERLIB_API std::string leave(std::string name);
};
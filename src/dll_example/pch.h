#pragma once

#ifndef PCH_H
#define PCH_H

#include "framework.h"

#ifdef BUILD_DLL
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT __declspec(dllimport)
#endif

#ifndef PI
#define PI 3.1416
#endif // PI

extern "C"
{
    DLL_EXPORT void MessageFunction(LPCSTR sometext);

    DLL_EXPORT void OutputConsole(LPCSTR sometext);

    DLL_EXPORT int Factorial(int number);

    DLL_EXPORT double CircleArea(double r);

    DLL_EXPORT LPCSTR ReverseString(LPCSTR sometext);
}

#endif // PCH_H
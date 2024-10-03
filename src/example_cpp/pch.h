#pragma once

#ifndef _PCH_H_
#define _PCH_H_

#include "framework.h"

#ifdef BUILD_DLL
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C"
{
#endif

    DLL_EXPORT void MessageFunction(char *sometext);

    DLL_EXPORT void OutputConsole(char *sometext);

    DLL_EXPORT int Factorial(int number);

    DLL_EXPORT double CircleArea(double r);

    DLL_EXPORT LPTSTR ReverseText(char *text);

#ifdef __cplusplus
}
#endif

#endif
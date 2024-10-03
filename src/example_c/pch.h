#pragma once

#ifndef PCH_H
#define PCH_H

#include "framework.h"

#ifdef BUILD_DLL
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT __declspec(dllimport)
#endif

DLL_EXPORT void MessageFunction(char *sometext);

DLL_EXPORT void OutputConsole(char *sometext);

DLL_EXPORT int Factorial(int number);

DLL_EXPORT double CircleArea(double r);

DLL_EXPORT char *ReverseText(char *sometext);

#endif // PCH_H
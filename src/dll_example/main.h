#ifndef __MAIN_H__
#define __MAIN_H__

#include <algorithm>
#include <cstring>
#include <iostream>
#include <math.h>
#include <string>
#include <windows.h>

/*  To use this exported function of dll, include this header
 *  in your project.
 */

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif

#ifndef PI
    #define PI 3.1416
#endif // PI


#ifdef __cplusplus
extern "C"
{
#endif

void DLL_EXPORT MessageFunction(const LPCSTR sometext);
void DLL_EXPORT OutputConsole(const LPCSTR sometext);
int DLL_EXPORT Factorial(int number);
double DLL_EXPORT CircleArea(double r);
const LPCSTR DLL_EXPORT ReverseString(const LPCSTR sometext);

#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__

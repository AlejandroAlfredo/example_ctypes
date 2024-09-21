#include <iostream>
#include "pch.h"

void MessageFunction(LPCSTR sometext)
{
    MessageBoxA(0, sometext, "DLL Message", MB_OK | MB_ICONINFORMATION);
}

void OutputConsole(LPCSTR sometext)
{
    std::cout << "Output: " << sometext << std::endl;
}

int Factorial(int number)
{
    if (number <= 1)
    {
        return 1;
    }
    return number * Factorial(number - 1);
}

double CircleArea(double r)
{
    return PI * pow(r, 2);
}

LPCSTR ReverseString(LPCSTR sometext)
{
    std::string mytext = sometext;
    reverse(mytext.begin(), mytext.end());
    return mytext.c_str();
}

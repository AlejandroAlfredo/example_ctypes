#include <iostream>
#include "pch.h"

void MessageFunction(char *sometext)
{
    MessageBoxA(0, sometext, "DLL Message", MB_OK | MB_ICONINFORMATION);
}

void OutputConsole(LPTSTR sometext)
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

char *ReverseString(char *sometext)
{
    std::string mytext = sometext;
    reverse(mytext.begin(), mytext.end());
    char *value = "";
    std::string::iterator iter;
    for (iter = mytext.begin(); iter != mytext.end(); iter++)
    {
        value += *iter;
    }

    return value;
}

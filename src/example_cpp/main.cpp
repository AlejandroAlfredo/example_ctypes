#include "pch.h"

void MessageFunction(char *sometext)
{
    MessageBoxA(0, sometext, "DLL Message", MB_OK | MB_ICONINFORMATION);
}

void OutputConsole(char *sometext)
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

LPTSTR ReverseText(char *text)
{
    std::string mytext = "";
    size_t size = strlen(text);
    for (int n = 0; n < size; n++)
    {
        mytext += *(text + (size - (size_t)(n + 1)));
    }
    LPTSTR response = TEXT(strdup(mytext.c_str()));
    return response;
}

extern "C" BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
    case DLL_PROCESS_ATTACH:
        // attach to process
        // return FALSE to fail DLL load
        break;

    case DLL_PROCESS_DETACH:
        // detach from process
        break;

    case DLL_THREAD_ATTACH:
        // attach to thread
        break;

    case DLL_THREAD_DETACH:
        // detach from thread
        break;
    }
    return TRUE; // succesful
}
#include "main.h"

using std::cout;
using std::endl;
using std::string;
using std::reverse;
using std::pow;

void DLL_EXPORT MessageFunction(const LPCSTR sometext)
{
    MessageBoxA(0, sometext, "DLL Message", MB_OK | MB_ICONINFORMATION);
}

void DLL_EXPORT OutputConsole(const LPCSTR sometext)
{
    cout << "Output: " << sometext << endl;
}

int DLL_EXPORT Factorial(int number)
{
    if (number <= 1)
    {
        return 1;
    }
    return number * Factorial(number - 1);
}

double DLL_EXPORT CircleArea(double r)
{
    return PI * pow(r, 2);
}

const LPCSTR DLL_EXPORT ReverseString(const LPCSTR sometext)
{
    string str = sometext;
    reverse(str.begin(), str.end());
    return str.c_str();
}

extern "C" DLL_EXPORT BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
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

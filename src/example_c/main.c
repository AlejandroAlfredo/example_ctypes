#include "pch.h"

void MessageFunction(char* sometext)
{
	MessageBoxA(0, sometext, "DLL Message", MB_OK | MB_ICONINFORMATION);
}

void OutputConsole(char* sometext)
{
	printf("Output: %s\n", sometext);
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

char* ReverseText(char* sometext)
{
	size_t size = strlen(sometext);
	char* mytext = (char*)calloc((size + 1), sizeof(char));
	if (mytext == NULL) {
		printf("Error!, memory not allocated.");
		return NULL;
	}
	else {
		char result[100];
		//printf("Memory Address: %p\n", mytext);
		for (int n = 0; n < size; n++) {
			*(mytext + n) = *(sometext + (size - (size_t)(n + 1)));
			//printf("[%d]: %c, ", n, *(mytext + n));
		}
		strcpy_s(result, 100, mytext);
		free(mytext);
		mytext = NULL;
		//printf("Memory Address: %p\n", mytext);
		return result;
	}

}


BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
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

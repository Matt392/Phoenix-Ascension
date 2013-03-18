#include "..\..\Engine\Core\GenInc.h"

#include <Windows.h>
#include "stdio.h"

#define TEST_PUSH_LENGTH 25

int main()
{
	ASCVector<UINT32> vec_uintVector;

	printf_s("VECTOR TESTS\n\n");
	
	printf_s("Test: push, incrementSize, []\n");
	for(UINT32 i = 0; i < TEST_PUSH_LENGTH; ++i)
	{
		vec_uintVector.push( i );
	}

	for(UINT32 i = 0; i < TEST_PUSH_LENGTH; ++i)
	{
		printf_s("Value at index %i == %i", i, vec_uintVector[i]);
		Sleep(100);
		printf_s("\n");
	}

	printf_s("Press Any Key To Continue...");
	getchar();

	
	printf_s("Press Any Key To End...");
	getchar();
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

void AllocInteger(int** pp) // 함수의 시그너처(signiture)
{
	*pp = (int*)malloc(sizeof(int));
}

void SetInteger(int* p, int data)
{
	*p = data;
}

void PrintInteger(int data)
{
	printf("int : %d\n", data);
}

void FreeInteger(int* p)
{
	free(p);
}

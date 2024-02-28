#include <stdio.h>
#include "integerArray.h"

void AddInteger(IntegerArray* pia, int data)
{
	pia->dArray[pia->dCount++] = data;
}

void PrintInteger(const IntegerArray* pia)
{
	for (int i = 0; i < pia->dCount; i++)
		printf("%d : %d\n", i, pia->dArray[i]);
}

#pragma once
typedef struct _IntegerArray_tag
{
	int dArray[100];
	int dCount;
} IntegerArray;

void AddInteger(IntegerArray* pia, int data);
void PrintInteger(const IntegerArray* pia);

//#pragma once

#ifndef __AAA__
#define __AAA__

typedef struct _IntegerArray_tag
{
	int dArray[100];
	int dCount;
} IntegerArray;

void AddInteger(IntegerArray* pia, int data);
void PrintInteger(const IntegerArray* pia);

#endif //__AAA__
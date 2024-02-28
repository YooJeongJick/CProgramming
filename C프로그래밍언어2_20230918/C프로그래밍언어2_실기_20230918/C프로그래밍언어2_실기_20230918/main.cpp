#include <stdio.h>
#include <stdlib.h>

//int* AllocInteger()
//{
//	return (int*)malloc(sizeof(int));
//}

//void AllocInteger(int** pp)
//{
//	*pp = (int*)malloc(sizeof(int));
//}
//
//void SetInteger(int* p, int data)
//{
//	*p = data;
//}
//
//void PrintInteger(int data)
//{
//	printf("int : %d\n", data);
//}
//
//void FreeInteger(int* p)
//{
//	free(p);
//}

// 함수 선언
//void AllocInteger(int** pp);
//void SetInteger(int* p, int data);
//void PrintInteger(int data);
//void FreeInteger(int* p);

//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int Sub(int a, int b)
//{
//	return a - b;
//}

//void Print(const char* s)
//{
//	printf("string : %s\n", s);
//}

//void PreClient()
//{
//	printf("Print 호출 전\n");
//}

//void PostClient()
//{
//	printf("Print 호출 후\n");
//}

// server

//void Print(const char* s, void (*PreClient)(), void (*PostClient)())
//{
//	PreClient();
//	printf("string : %s\n", s);
//	PostClient();
//}

// client

//void Markup()
//{
//	printf("=================\n");
//}

//void MarkupLoop()
//{
//	for (int i = 0; i < 5; ++i)
//		printf("=================\n");
//}

//int Find(int arr[], int size, int key)
//{
//	for (int i = 0; i < size; ++i)
//		if (arr[i] == key)
//			return i;
//	return -1;
//}

int Find(int arr[], int size, bool (*cmp)(int data))
{
	for (int i = 0; i < size; ++i)
		if (cmp(arr[i]))
			return i;
	return -1;
}

bool clientCompare1(int data)
{
	return data == 90;
}

bool clientCompare2(int data)
{
	printf("data : %d\n", data);
	return data % 2 == 0 && 50 < data;
}


int main()
{
	/*int* p = NULL;
	p = (int*)malloc(sizeof(int)); */ // malloc(4), 4byte 메모리 할당
	/**p = 100;
	printf("int : %d\n", *p);
	free(p);*/

	//

	/*int* p = NULL;
	p = AllocInteger();
	SetInteger(p, 10);
	printf("int : %d\n", *p);
	free(p); */
	
	//

	/*int* p = NULL;
	p = AllocInteger();
	SetInteger(p, 10);
	PrintInteger(*p);
	FreeInteger(p);*/

	//

	/*int* p = NULL;
	AllocInteger(&p);
	SetInteger(p, 10);
	PrintInteger(*p);
	FreeInteger(p);*/

	//

	/*int a = 10, b = 20;
	int result = 0;

	result = Add(a, b);
	printf("result : %d\n", result);
	result = Sub(a, b);
	printf("result : %d\n", result);*/

	//

	//int a = 10, b = 20;
	//int result = 0;
	//int (*pf)(int a, int b); // 함수 포인터 int, (int, int)

	//pf = Add;
	//result = pf(a, b);
	//printf("result : %d\n", result);

	//pf = Sub;
	//result = pf(a, b);
	//printf("result : %d\n", result);

	//printf("%p %p %p\n", main, Add, Sub);
	//printf("%p %p %p\n", &main, &Add, &Sub); // 함수의 명령이 시작하는 주소, 함수의 시작 주소, 함수의 이름

	//

	/*void (*pf)(const char* s) = Print;
	Print("Hello!");
	pf("Hello!");*/

	//

	//Print("Hello!", PreClient, PostClient);

	//

	/*int arr[5] = { 45, 32, 90, 86, 11 };

	int idx = Find(arr, 5, 90);
	if (idx != -1)
		printf("[%d] : [%d]", idx, arr[idx]);*/

	//

	/*int arr[5] = { 45, 32, 90, 86, 11 };

	int idx = Find(arr, 5, clientCompare1);
	if (idx != -1)
		printf("[%d] : [%d]", idx, arr[idx]);*/

	//

	int arr[5] = { 45, 32, 90, 86, 11 };

	int idx = Find(arr, 5, clientCompare2);
	if (idx != -1)
		printf("[%d] : [%d]", idx, arr[idx]);

}

//void AllocInteger(int** pp) // 함수의 시그너처(signiture)
//{
//	*pp = (int*)malloc(sizeof(int));
//}
//
//void SetInteger(int* p, int data)
//{
//	*p = data;
//}
//
//void PrintInteger(int data)
//{
//	printf("int : %d\n", data);
//}
//
//void FreeInteger(int* p)
//{
//	free(p);
//}

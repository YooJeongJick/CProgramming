//#include <stdio.h>
//
//int main() 
//{
//	int n = 10;
//	int* p = &n;
//
//	printf("%d\n", n);
//	printf("%p\n", p);
//	printf("%d\n", *p);
//}

//#include <stdio.h>
//
//void PrintArray(int* p)
//{
//	for (int i = 0; i < 10; ++i)
//		printf("%d ", p[i]);
//	printf("\n");
//}
//
//int main()
//{
//	//
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	//ResetArray(arr);
//	PrintArray(arr);
//}

//#include <stdio.h>
//
//void PrintArray(int* p)
//{
//	for (int i = 0; i < 10; ++i)
//		printf("%d ", p[i]);
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//
//	//ResetArray(arr);
//
//	//arr[0] = 0;
//	//arr[1] = 0;
//	//arr[9] = 0;
//
//	for (int i = 0; i < 10; ++i)
//		arr[i] = 0;
//
//	PrintArray(arr);
//}

//#include <stdio.h>
//
//void ResetArray(int* p)
//{
//	for (int i = 0; i < 10; ++i)
//		p[i] = 0;
//}
//
//void PrintArray(int* p)
//{
//	for (int i = 0; i < 10; ++i)
//		printf("%d ", p[i]);
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//
//	ResetArray(arr);
//	PrintArray(arr);
//}

//#include <stdio.h>
//
//void ResetArray(int* p) // 출력 매개변수(참조)
//{
//	for (int i = 0; i < 10; ++i)
//		p[i] = 0;
//}
//
//void PrintArray(const int* p) // 입력 매개변수(참조, 값)
//{
//	for (int i = 0; i < 10; ++i)
//		printf("%d ", p[i]);
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//
//	ResetArray(arr);
//	PrintArray(arr);
//}

//#include <stdio.h>
//
//int main()
//{
//	char* temp = InputData();
//	printf("string : %s\n", temp);
//	free(temp);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char* InputData()
//{
//	return NULL;
//}
//
//int main()
//{
//	//char* temp = InputData(); //malloc()
//	char* temp = (char*)malloc(1000);
//	strcpy_s(temp, 7, "Hello!");
//	//temp[0] = 'H';
//	//temp[1] = "Hello"[1];
//
//	//temp = "Hello!"; // 오류 발생
//
//	printf("string : %s\n", temp);
//
//	free(temp);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char* InputData()
//{
//	char* s = (char*)malloc(1000);
//	gets_s(s, 1000);
//
//	return s;
//}
//
//int main()
//{
//	char* temp = (char*)malloc(1000);
//
//	printf("string : %s\n", temp);
//
//	free(temp);
//}

//#include <stdio.h>
//
//void Print(const char* s)
//{
//	printf("string : %s\n", s);
//}
//
//void PrintInt(int n)
//{
//	printf("int : %d\n", n);
//}
//
//int main()
//{
//	Print("Hello!");
//	PrintInt(100);
//	void (*pf1)(const char* s);
//	void (*pf2)(int n);
//
//	pf1 = Print;
//	pf2 = PrintInt;
//
//	printf("%p %p\n", Print, PrintInt);
//	printf("%p %p\n", pf1, pf2);
//
//	pf1("Hello!2");
//	pf2(200);
//}

//#include <stdio.h>
//
//// callee(피호출자) : Server Code
//void Print(const char* s)
//{
//	printf("string : %s\n", s);
//}
//
//// caller(호출자) : Client Code
//int main()
//{
//	Print("hello"); // call(호출)
//}

//#include <stdio.h>
//
//// callee(피호출자) : Server Code
//void Print(const char* s, int (*pf)(int))
//{
//	if( pf(200) ) // callback
//		printf("string : %s\n", s);
//}
//
//// caller(호출자) : Client Code
//int Flag(int data) // callback 함수
//{
//	return data > 180;
//}
//
//int main()
//{
//	Print("hello", Flag); // call(호출)
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* s1 = "ABC";
//	printf("%p %s\n", s1, s1);
//	printf("%p %s\n", s1 + 1, s1 + 1);
//	printf("%d %c\n", s1[0], s1[0]);
//	printf("%d %c\n", (s1 + 1)[0], (s1 + 1)[0]);
//}

#include <stdio.h>
#include <string.h>

int main()
{
	const char* s1 = "ABC";
	char buf[100];

	//buf = s1;
	//buf[0] = s1[0];
	//buf[1] = s1[1];
	//buf[2] = s1[2];
	//buf[3] = s1[3];
	strcpy_s(buf, 4, "ABC");

	printf("%s %s\n", buf, s1);
}
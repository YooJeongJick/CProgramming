//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char c = 'A';
//	const char* s = "ABC";
//
//	printf("char : %c\n", c);
//	printf("string : %s\n", s);
//	printf("len : %zd\n", strlen(s));
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char c = '가';
//	const char* s = "가나다";
//
//	printf("char : %c\n", c);
//	printf("string : %s\n", s);
//	printf("len : %zd\n", strlen(s));
//}

//#include <stdio.h>
//#include <string.h>
//#include <wchar.h>
//#include <locale.h>
//
//int main()
//{
//	setlocale(LC_ALL, "Korean");
//	wchar_t c = L'가';
//	const wchar_t* s = L"가나다";
//
//	wprintf(L"char : %c\n", c);
//	wprintf(L"string : %s\n", s);
//	wprintf(L"len : %zd\n", wcslen(s));
//}

//#include <stdio.h>
//#include <string.h>
//#include <wchar.h>
//#include <tchar.h>
//#include <locale.h>
//
//int main()
//{
//	setlocale(LC_ALL, "Korean");
//	TCHAR c = _TEXT('가');
//	const TCHAR* s = _TEXT("가나다");
//
//	_tprintf(_TEXT("char : %c\n"), c);
//	_tprintf(_TEXT("string : %s\n"), s);
//	_tprintf(_TEXT("len : %zd\n"), _tcslen(s));
//}

//#include <stdio.h>
//
//struct Data
//{
//	int data1;
//	char data2[20];
//};
//
//void PrintData(const Data* pd)
//{
//	printf("%d, %s\n", pd->data1, pd->data2);
//}
//
//void PrintAllData(const Data* arr)
//{
//	for (int i = 0; i < 3; ++i)
//		PrintData(&arr[i]);
//}
//
//int main()
//{
//	Data arr[3] = { {10, "ABC"}, {20, "12345"}, {30, "Hello!"} };
//
//	for (int i = 0; i < 3; ++i)
//		PrintData(&arr[i]);
//
//	arr[2].data1 = 40;
//
//	PrintAllData(arr);
//}

//#include <stdio.h>
//
//void Push(int st[], int* ptop, int data)
//{
//	st[*(ptop)++] = data;
//}
//
//int Pop(int st[], int* ptop)
//{
//	return st[-- * ptop];
//}
//
//int main()
//{
//	int st[10];
//	int top = 0;
//
//	Push(st, &top, 100);
//	Push(st, &top, 200);
//	Push(st, &top, 300);
//	
//	printf("%d\n", Pop(st, &top));
//	printf("%d\n", Pop(st, &top));
//	printf("%d\n", Pop(st, &top));
//}

//#include <stdio.h>
//
//struct Stack
//{
//	int st[10];
//	int top;
//};
//
//void Push(Stack* pst, int data)
//{
//	pst->st[pst->top++] = data;
//}
//
//int Pop(Stack* pst)
//{
//	return pst->st[--pst->top];
//}
//
//int main()
//{
//	Stack st1 = { 0 };
//
//	Push(&st1, 100);
//	Push(&st1, 200);
//	Push(&st1, 300);
//
//	printf("%d\n", Pop(&st1));
//	printf("%d\n", Pop(&st1));
//	printf("%d\n", Pop(&st1));
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Stack
//{
//	int* st;
//	int capacity;
//	int top;
//};
//
//void InitStack(Stack* pst, int cap)
//{
//	pst->st = (int*)malloc(sizeof(int) * cap);
//	pst->capacity = cap;
//	pst->top = 0;
//}
//
//void UninitStack(Stack* pst)
//{
//	free(pst->st);
//	pst->capacity = 0;
//	pst->top = 0;
//}
//
//void Push(Stack* pst, int data)
//{
//	pst->st[pst->top++] = data;
//}
//
//int Pop(Stack* pst)
//{
//	return pst->st[--pst->top];
//}
//
//int main()
//{
//	Stack st1 ;
//
//	InitStack(&st1, 1000);
//	Push(&st1, 100);
//	Push(&st1, 200);
//	Push(&st1, 300);
//
//	printf("%d\n", Pop(&st1));
//	printf("%d\n", Pop(&st1));
//	printf("%d\n", Pop(&st1));
//	UninitStack(&st1);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Stack
//{
//	int* st;
//	int capacity;
//	int top;
//};
//
//void InitStack(Stack* pst, int cap)
//{
//	pst->st = (int*)malloc(sizeof(int) * cap);
//	pst->capacity = cap;
//	pst->top = 0;
//}
//
//void UninitStack(Stack* pst)
//{
//	free(pst->st);
//	pst->capacity = 0;
//	pst->top = 0;
//}
//
//void Push(Stack* pst, int data)
//{
//	pst->st[pst->top++] = data;
//}
//
//int Pop(Stack* pst)
//{
//	return pst->st[--pst->top];
//}
//
//int main()
//{
//	Stack st1;
//	Stack st2;
//
//	InitStack(&st1, 1000);
//	Push(&st1, 100);
//	Push(&st1, 200);
//	Push(&st1, 300);
//
//	printf("%d\n", Pop(&st1));
//	printf("%d\n", Pop(&st1));
//	printf("%d\n", Pop(&st1));
//	UninitStack(&st1);
//
//	InitStack(&st2, 5);
//	Push(&st2, 'A');
//	Push(&st2, 'B');
//	Push(&st2, 'C');
//	printf("%c\n", Pop(&st2));
//	printf("%c\n", Pop(&st2));
//	Push(&st2, 'D');
//	printf("%c\n", Pop(&st2));
//	printf("%c\n", Pop(&st2));
//	UninitStack(&st2);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Stack
//{
//	int* st;
//	int capacity;
//	int top;
//};
//
//void InitStack(Stack* pst, int cap)
//{
//	pst->st = (int*)malloc(sizeof(int) * cap);
//	pst->capacity = cap;
//	pst->top = 0;
//}
//
//void UninitStack(Stack* pst)
//{
//	free(pst->st);
//	pst->capacity = 0;
//	pst->top = 0;
//}
//
//void Push(Stack* pst, int data)
//{
//	pst->st[pst->top++] = data;
//}
//
//int Pop(Stack* pst)
//{
//	return pst->st[--pst->top];
//}
//
//int main()
//{
//	Stack st1;
//
//	InitStack(&st1, 1000);
//	Push(&st1, 100);
//	Push(&st1, 200);
//	Push(&st1, 300);
//
//	printf("%d\n", Pop(&st1));
//	printf("%d\n", Pop(&st1));
//	printf("%d\n", Pop(&st1));
//	UninitStack(&st1);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Stack
//{
//	int* st;
//	int capacity;
//	int top;
//
//
//	void InitStack(int cap)
//	{
//		st = (int*)malloc(sizeof(int) * cap);
//		capacity = cap;
//		top = 0;
//	}
//
//	void UninitStack()
//	{
//		free(st);
//		capacity = 0;
//		top = 0;
//	}
//
//	void Push(int data)
//	{
//		st[top++] = data;
//	}
//
//	int Pop()
//	{
//		return st[--top];
//	}
//
//};
//
//int main()
//{
//	Stack st1;
//
//	st1.InitStack(1000);
//	st1.Push(100);
//	st1.Push(200);
//	st1.Push(300);
//
//
//	printf("%d\n", st1.Pop());
//	printf("%d\n", st1.Pop());
//	printf("%d\n", st1.Pop());
//	st1.UninitStack();
//}

#include <stdio.h>
#include <stdlib.h>

struct Stack
{
	int* st;
	int capacity;
	int top;


	Stack(int cap = 1000)
	{
		st = (int*)malloc(sizeof(int) * cap);
		capacity = cap;
		top = 0;
	}

	~Stack()
	{
		free(st);
		capacity = 0;
		top = 0;
	}

	void Push(int data)
	{
		st[top++] = data;
	}

	int Pop()
	{
		return st[--top];
	}

};

int main()
{
	Stack st1;
	Stack st2;

	st1.Push(100);
	st1.Push(200);
	st1.Push(300);


	printf("%d\n", st1.Pop());
	printf("%d\n", st1.Pop());
	printf("%d\n", st1.Pop());
}

// 디버깅, 객체지향 개념 제외. 유니코드만 시험범위에 포함

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct Person
//{
//	char* name;
//	int age;
//};
//
//void PrintPerson(const Person* p)
//{
//	printf("name : %s, age: % d\n", p->name, p->age);
//}
//
//void CreatePerson(Person* p, const char* name, int age)
//{
//	p->name = (char*)malloc(strlen(name) + 1);
//	strcpy_s(p->name, strlen(name) + 1, name);
//	p->age = age;
//}
//
//void FreePerson(Person* p)
//{
//	if (p->name)
//		free(p->name);
//}
//
//int main()
//{
//	Person perArray[5] = { NULL };
//
//	CreatePerson(&perArray[0], "홍길동", 23);
//	CreatePerson(&perArray[1], "홍길당", 23);
//	CreatePerson(&perArray[2], "홍길딩", 23);
//
//	PrintPerson(&perArray[0]);
//	PrintPerson(&perArray[1]);
//	PrintPerson(&perArray[2]);
//
//	//strcpy_s(per1.name, strlen("홍길당") + 1, "홍길당");
//	//PrintPerson(&per1);
//
//	FreePerson(&perArray[0]);
//	FreePerson(&perArray[1]);
//	FreePerson(&perArray[2]);
//
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct Person
//{
//	char* name;
//	int age;
//};
//
//void PrintPerson(const Person* p)
//{
//	printf("name : %s, age: % d\n", p->name, p->age);
//}
//
//void CreatePerson(Person* p, const char* name, int age)
//{
//	p->name = (char*)malloc(strlen(name) + 1);
//	strcpy_s(p->name, strlen(name) + 1, name);
//	p->age = age;
//}
//
//void FreePerson(Person* p)
//{
//	if (p->name)
//		free(p->name);
//}
//
////
//struct PersonArray
//{
//	Person perArray[5];
//	int count;
//};
//
//void Add(PersonArray* ppa) {
//	CreatePerson(&ppa->perArray[ppa->count], "kim", 23);
//	ppa->count++;
//}
//
//void Print(const PersonArray* ppa) {
//	for (int i = 0; i < ppa->count; i++)
//		PrintPerson(&ppa->perArray[i]);
//}
//
//void Free(PersonArray* ppa) {
//	for (int i = 0; i < ppa->count; i++)
//		FreePerson(&ppa->perArray[i]);
//}
//
//int main()
//{
//	PersonArray pa = { 0 };
//
//	Add(&pa);
//	Add(&pa);
//	Add(&pa);
//
//	Print(&pa);
//
//	Free(&pa);
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct Person
//{
//	char* name;
//	int age;
//};
//
//void PrintPerson(const Person* p)
//{
//	printf("name : %s, age: % d\n", p->name, p->age);
//}
//
//void CreatePerson(Person* p, const char* name, int age)
//{
//	p->name = (char*)malloc(strlen(name) + 1);
//	strcpy_s(p->name, strlen(name) + 1, name);
//	p->age = age;
//}
//
//void FreePerson(Person* p)
//{
//	if (p->name)
//		free(p->name);
//}
//
////
//struct PersonArray
//{
//	Person perArray[5];
//	int count;
//};
//
//void Add(PersonArray* ppa) {
//
//	char name[20];
//	int age;
//
//	printf("이름 입력 : ");
//	gets_s(name, 20);
//	fflush(stdin);
//	printf("나이 입력 : ");
//	scanf_s("%d", &age);
//	fflush(stdin);
//
//	CreatePerson(&ppa->perArray[ppa->count], name, age);
//	ppa->count++;
//}
//
//void Print(const PersonArray* ppa) {
//	for (int i = 0; i < ppa->count; i++)
//		PrintPerson(&ppa->perArray[i]);
//}
//
//void Free(PersonArray* ppa) {
//	for (int i = 0; i < ppa->count; i++)
//		FreePerson(&ppa->perArray[i]);
//}
//
//int main()
//{
//	PersonArray pa = { 0 };
//
//	Add(&pa);
//	Add(&pa);
//	Add(&pa);
//
//	Print(&pa);
//
//	Free(&pa);
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void Flush()
//{
//	while (getchar() != '\n')
//		;
//}
//
//int main()
//{
//	char name[20];
//	int age;
//
//	gets_s(name, 20);
//	printf("name : %s\n", name);
//	scanf_s("%d", &age);
//	Flush();
//	printf("age : %d\n", age);
//
//	gets_s(name, 20);
//	printf("name : %s\n", name);
//	scanf_s("%d", &age);
//	Flush();
//	printf("age : %d\n", age);
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char c;
//
//	c = getchar();
//	printf("char : %c\n", c);
//	c = getchar();
//	printf("char : %c\n", c);
//	c = getchar();
//	printf("char : %c\n", c); 
//	// 입력값 : ab, a
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void Flush()
//{
//	while (getchar() != '\n')
//		;
//}
//
//int main()
//{
//	char c;
//
//	c = getchar();
//	Flush();
//	printf("char : %c\n", c);
//	c = getchar();
//	printf("char : %c\n", c);
//	c = getchar();
//	printf("char : %c\n", c);
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct Person
//{
//	char* name;
//	int age;
//};
//
//void PrintPerson(const Person* p)
//{
//	printf("name : %s, age: % d\n", p->name, p->age);
//}
//
//void CreatePerson(Person* p, const char* name, int age)
//{
//	p->name = (char*)malloc(strlen(name) + 1);
//	strcpy_s(p->name, strlen(name) + 1, name);
//	p->age = age;
//}
//
//void FreePerson(Person* p)
//{
//	if (p->name)
//		free(p->name);
//}
//
////
//struct PersonArray
//{
//	Person perArray[5];
//	int count;
//};
//
//void Flush()
//{
//	while (getchar() != '\n')
//		;
//}
//
//void Add(PersonArray* ppa) {
//
//	char name[20];
//	int age;
//
//	printf("이름 입력 : ");
//	gets_s(name, 20);
//	printf("나이 입력 : ");
//	scanf_s("%d", &age);
//	Flush();
//
//	CreatePerson(&ppa->perArray[ppa->count], name, age);
//	ppa->count++;
//}
//
//void Print(const PersonArray* ppa) {
//	for (int i = 0; i < ppa->count; i++)
//		PrintPerson(&ppa->perArray[i]);
//}
//
//void Free(PersonArray* ppa) {
//	for (int i = 0; i < ppa->count; i++)
//		FreePerson(&ppa->perArray[i]);
//}
//
//int main()
//{
//	PersonArray pa = { 0 };
//
//	Add(&pa);
//	Add(&pa);
//	Add(&pa);
//
//	Print(&pa);
//
//	Free(&pa);
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct Person
//{
//	char* name;
//	int age;
//};
//
//void PrintPerson(const Person* p)
//{
//	printf("name : %s, age: % d\n", p->name, p->age);
//}
//
//void CreatePerson(Person* p, const char* name, int age)
//{
//	p->name = (char*)malloc(strlen(name) + 1);
//	strcpy_s(p->name, strlen(name) + 1, name);
//	p->age = age;
//}
//
//void FreePerson(Person* p)
//{
//	if (p->name)
//		free(p->name);
//}
//
////
//
//struct PersonArray
//{
//	Person* perArray;
//	int count;
//};
//
//void Flush()
//{
//	while (getchar() != '\n')
//		;
//}
//
//void Add(PersonArray* ppa) {
//
//	char name[20];
//	int age;
//
//	printf("이름 입력 : ");
//	gets_s(name, 20);
//	printf("나이 입력 : ");
//	scanf_s("%d", &age);
//	Flush();
//
//	CreatePerson(&ppa->perArray[ppa->count], name, age);
//	ppa->count++;
//}
//
//void Print(const PersonArray* ppa) {
//	for (int i = 0; i < ppa->count; i++)
//		PrintPerson(&ppa->perArray[i]);
//}
//
//void Free(PersonArray* ppa) {
//	for (int i = 0; i < ppa->count; i++)
//		FreePerson(&ppa->perArray[i]);
//}
//
//void InitPersonArray(PersonArray* ppa)
//{
//	ppa->perArray = (Person*)malloc(1000 * sizeof(Person));
//	ppa->count = 0;
//}
//
//void UninitPersonArray(PersonArray* ppa)
//{
//	for (int i = 0; i < ppa->count; ++i)
//		FreePerson(&ppa->perArray[i]);
//	free(ppa->perArray);
//}
//
//int main()
//{
//	PersonArray pa;
//
//	InitPersonArray(&pa);
//
//	Add(&pa);
//	Add(&pa);
//	Add(&pa);
//
//	Print(&pa);
//
//	UninitPersonArray(&pa);
//}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

struct Person
{
	char* name;
	int age;
};

void PrintPerson(const Person* p)
{
	printf("name : %s, age: % d\n", p->name, p->age);
}

void CreatePerson(Person* p, const char* name, int age)
{
	p->name = (char*)malloc(strlen(name) + 1);
	strcpy_s(p->name, strlen(name) + 1, name);
	p->age = age;
}

void FreePerson(Person* p)
{
	if (p->name)
		free(p->name);
}

//

struct PersonArray
{
	Person* perArray;
	int count;
};

void Flush()
{
	while (getchar() != '\n')
		;
}

void Add(PersonArray* ppa) {

	char name[20];
	int age;

	printf("이름 입력 : ");
	gets_s(name, 20);
	printf("나이 입력 : ");
	scanf_s("%d", &age);
	Flush();

	CreatePerson(&ppa->perArray[ppa->count], name, age);
	ppa->count++;
}

void Print(const PersonArray* ppa) {
	for (int i = 0; i < ppa->count; i++)
	{
		printf("[%d] : ", i);
		PrintPerson(&ppa->perArray[i]);
	}
	printf("\n");
}

void Free(PersonArray* ppa) {
	for (int i = 0; i < ppa->count; i++)
		FreePerson(&ppa->perArray[i]);
}

void InitPersonArray(PersonArray* ppa)
{
	ppa->perArray = (Person*)malloc(1000 * sizeof(Person));
	ppa->count = 0;

	// Read File
	FILE* pf;
	int perCount = 0;
	fopen_s(&pf, "personArray.binary", "rb");
	if (pf == NULL)
	{
		printf("처음 실행으로 파일 읽기 실패~~!\n");
		return;
	}
	{ // head
		fread(&perCount, sizeof(int), 1, pf);
		fseek(pf, 8, SEEK_SET); // SEEK_SET, SEEK_CUR, SEEK_END
	}
	{ // body
		for (int i = 0; i < perCount; ++i)
		{
			// name
			char* name = NULL;
			int slen = 0;
			fread(&slen, sizeof(int), 1, pf);
			name = (char*)malloc(slen);
			fread(name, slen, 1, pf);
			int age;
			fread(&age, sizeof(int), 1, pf);

			CreatePerson(&ppa->perArray[i], name, age);
			free(name);
			// age
		}
		ppa->count = perCount;
	}
	fclose(pf);
}

void UninitPersonArray(PersonArray* ppa)
{
	// Write File
	FILE* pf;
	int perCount = ppa->count;
	fopen_s(&pf, "personArray.binary", "wb");
	{ // head
		int extra = 0;
		fwrite(&perCount, sizeof(int), 1, pf);
		fwrite(&extra, sizeof(int), 1, pf);
	}
	{ // body
		for (int i = 0; i < perCount; ++i)
		{
			// name
			const char* name = ppa->perArray[i].name;
			int slen = strlen(name) + 1;
			fwrite(&slen, sizeof(int), 1, pf);
			fwrite(name, slen, 1, pf);
			// age
			fwrite(&ppa->perArray[i].age, sizeof(int), 1, pf);
		}
	}
	fclose(pf);

	for (int i = 0; i < ppa->count; ++i)
		FreePerson(&ppa->perArray[i]);
	free(ppa->perArray);
}

void Menu()
{
	//Create/Read/Update/Delete < CRUD > - 데이터 조작
	puts("1. 사람의 정보 등록\n");
	puts("2. 사람의 정보 출력\n");
	puts("3. 사람의 정보 검색\n");
	puts("4. 사람의 정보 삭제\n");
	puts("0. 프로그램 종료~!\n\n");
}

int main()
{
	PersonArray pa;
	int run = 1;

	InitPersonArray(&pa); // Read File
	while (run)
	{
		Menu();
		switch ( _getch() ) // 비표준 conio.h (getchar())
		{
		case '1' :
			Add(&pa);
			break;
		case '2':
			Print(&pa);
			break;
		case '3':
			break;
		case '4':
			break;
		case '0':
			run = 0;
			break;
		}
	}
	UninitPersonArray(&pa);

	return 0;
}

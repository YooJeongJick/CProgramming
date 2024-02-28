//#include <stdio.h>
//
//int main()
//{
//	int x1 = 2;
//	int y1 = 3;
//	int x2 = 5;
//	int y2 = 8;
//
//	printf("(%d, %d)\n", x1, y1);
//	printf("(%d, %d)\n", x2, y2);
//
//}

//#include <stdio.h>
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	Point p1 = { 2, 3 };
//	Point p2= { 5, 8 };
//
//	printf("(%d, %d)\n", p1.x, p1.y);
//	printf("(%d, %d)\n", p2.x, p2.y);
//
//}

//#include <stdio.h>
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	Point p1 = { 2, 3 };
//	Point p2 = { 5, 8 };
//	Point* p = NULL;
//
//	p = &p1;
//
//	printf("(%d, %d)\n", p1.x, p1.y);
//	printf("(%d, %d)\n", p2.x, p2.y);
//
//	printf("(%d, %d)\n", (*p).x, (*p).y);
//	printf("(%d, %d)\n", p->x, p->y);
//
//}

//#include <stdio.h>
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(Point* p)
//{
//	printf("(%d, %d)\n", p->x, p->y);
//}
//
//int main()
//{
//	Point p1 = { 2, 3 };
//	Point p2 = { 5, 8 };
//
//	PrintPoint(&p1);
//	PrintPoint(&p2);
//
//}

//#include <stdio.h>
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(const Point* p)
//{
//	printf("(%d, %d)\n", p->x, p->y);
//}
//
//int main()
//{
//	Point p1 = { 2, 3 };
//	Point p2 = { 5, 8 };
//
//	PrintPoint(&p1);
//	PrintPoint(&p2);
//
//}

//#include <stdio.h>
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(const Point* p)
//{
//	printf("(%d, %d)\n", p->x, p->y);
//}
//
//void SetPoint(Point* p, int x, int y)
//{
//	p->x = x;
//	p->y = y;
//}
//
//int main()
//{
//	Point p1 = { 2, 3 };
//	Point p2 = { 5, 8 };
//
//	PrintPoint(&p1);
//	PrintPoint(&p2);
//
//	SetPoint(&p1, 5, 6);
//	PrintPoint(&p1);
//}

//#include <stdio.h>
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(const Point* p)
//{
//	printf("(%d, %d)\n", p->x, p->y);
//}
//
//void SetPoint(Point* p, int x, int y)
//{
//	p->x = x;
//	p->y = y;
//}
//
//Point AddPoint(const Point* p1, const Point* p2)
//{
//	Point result = { p1->x + p2->x, p1->y + p2->y };
//	return result;
//}
//
//int main()
//{
//	Point p1 = { 2, 3 };
//	Point p2 = { 5, 8 };
//
//	PrintPoint(&p1);
//	PrintPoint(&p2);
//
//	SetPoint(&p1, 5, 6);
//	PrintPoint(&p1);
//
//	Point p3 = { 0, 0 };
//	PrintPoint(&p3);
//
//	p3 = p1; // show copy(¿¶Àº º¹»ç : ¸â¹ö ´ë ¸â¹ö, ¸Þ¸ð¸® º¹»ç)
//	p3 = AddPoint(&p1, &p2);
//	PrintPoint(&p3);
//}

//#include <stdio.h>
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(const Point* p)
//{
//	printf("(%d, %d)\n", p->x, p->y);
//}
//
//void SetPoint(Point* p, int x, int y)
//{
//	p->x = x;
//	p->y = y;
//}
//
//Point AddPoint(const Point* p1, const Point* p2)
//{
//	Point result = { p1->x + p2->x, p1->y + p2->y };
//	return result;
//}
//
//int main()
//{
//	// Point p1, p2, p3, p4, p5;
//	Point ptArray[5] = { {1, 1}, {2, 2}, {3, 3}, {4, 4}, {5, 5} };
//#include <stdio.h>

//#include <stdio.h>
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(const Point* p)
//{
//	printf("(%d, %d)\n", p->x, p->y);
//}
//
//void SetPoint(Point* p, int x, int y)
//{
//	p->x = x;
//	p->y = y;
//}
//
//Point AddPoint(const Point* p1, const Point* p2)
//{
//	Point result = { p1->x + p2->x, p1->y + p2->y };
//	return result;
//}
//
//void PrintPointArray(const Point* ptArray, int arrayCount)
//{
//	for (int i = 0; i < arrayCount; i++)
//		//PrintPoint(ptArray + i);
//		PrintPoint(&ptArray[i]);
//}
//
//int main()
//{
//	Point ptArray[5] = { {1, 1}, {2, 2}, {3, 3}, {4, 4}, {5, 5} };
//	PrintPointArray(ptArray, 5);
//}

//#include <stdio.h>
//struct Person
//{
//	char name[20];
//	int age;
//};
//
//void PrintPerson(const Person* p)
//{
//	printf("name : %s, age: % d\n", p->name, p->age);
//}
//
//int main()
//{
//	Person per1 = { "È«±æµ¿", 23 };
//	PrintPerson(&per1);
//}

//#include <stdio.h>
//#include <string.h>
//
//struct Person
//{
//	char name[20];
//	int age;
//};
//
//void PrintPerson(const Person* p)
//{
//	printf("name : %s, age: % d\n", p->name, p->age);
//}
//
//int main()
//{
//	Person per1 = { "È«±æµ¿", 23 };
//	PrintPerson(&per1);
//	strcpy_s(per1.name, strlen("È«±æ´ç") + 1, "È«±æ´ç");
//	PrintPerson(&per1);
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
//int main()
//{
//	Person per1 = { NULL };
//
//	per1.name = (char*)malloc(strlen("È«±æµ¿") + 1);
//	strcpy_s(per1.name, strlen("È«±æµ¿") + 1, "È«±æµ¿");
//	per1.age = 23;
//	PrintPerson(&per1);
//	//strcpy_s(per1.name, strlen("È«±æ´ç") + 1, "È«±æ´ç");
//	//PrintPerson(&per1);
//
//	free(per1.name); // ¹®Á¦Á¡ÀÌ ÀÖ´Â ÄÚµå
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
//	p->name = (char*)malloc(strlen("È«±æµ¿") + 1);
//	strcpy_s(p->name, strlen("È«±æµ¿") + 1, "È«±æµ¿");
//	p->age = 23;
//}
//
//int main()
//{
//	Person per1 = { NULL };
//
//	CreatePerson(&per1, "È«±æµ¿", 23);
//	PrintPerson(&per1);
//	//strcpy_s(per1.name, strlen("È«±æ´ç") + 1, "È«±æ´ç");
//	//PrintPerson(&per1);
//
//	free(per1.name); 
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
//	p->name = (char*)malloc(strlen("È«±æµ¿") + 1);
//	strcpy_s(p->name, strlen("È«±æµ¿") + 1, "È«±æµ¿");
//	p->age = 23;
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
//	Person per1 = { NULL };
//
//	CreatePerson(&per1, "È«±æµ¿", 23);
//	PrintPerson(&per1);
//	//strcpy_s(per1.name, strlen("È«±æ´ç") + 1, "È«±æ´ç");
//	//PrintPerson(&per1);
//
//	FreePerson(&per1);
//}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int main()
{
	Person perArray[5] = {NULL};

	CreatePerson(&perArray[0], "È«±æµ¿", 23);
	CreatePerson(&perArray[1], "È«±æ´ç", 23);
	CreatePerson(&perArray[2], "È«±æµù", 23);

	PrintPerson(&perArray[0]);
	PrintPerson(&perArray[1]);
	PrintPerson(&perArray[2]);

	//strcpy_s(per1.name, strlen("È«±æ´ç") + 1, "È«±æ´ç");
	//PrintPerson(&per1);

	FreePerson(&perArray[0]);
	FreePerson(&perArray[1]);
	FreePerson(&perArray[2]);

}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char* strArray[3] = { NULL };
//
//	{
//		char buf[500];
//		printf("문자열 입력 : ");
//		gets_s(buf, 500);
//
//		char* s = (char*)malloc(strlen(buf) + 1);
//		strcpy_s(s, strlen(buf) + 1, buf);
//
//		strArray[0] = s;
//	}
//
//	{
//		char buf[500];
//		printf("문자열 입력 : ");
//		gets_s(buf, 500);
//
//		char* s = (char*)malloc(strlen(buf) + 1);
//		strcpy_s(s, strlen(buf) + 1, buf);
//
//		strArray[1] = s;
//	}
//
//	{
//		char buf[500];
//		printf("문자열 입력 : ");
//		gets_s(buf, 500);
//
//		char* s = (char*)malloc(strlen(buf) + 1);
//		strcpy_s(s, strlen(buf) + 1, buf);
//
//		strArray[2] = s;
//	}
//
//	{
//		printf("[0] : %s\n", strArray[0]);
//		printf("[1] : %s\n", strArray[1]);
//		printf("[2] : %s\n", strArray[2]);
//	}
//
//	{
//		free(strArray[0]);
//		free(strArray[1]);
//		free(strArray[2]);
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char* strArray[3] = { NULL };
//
//	for (int i = 0; i < 3; ++i)
//	{
//		char buf[500];
//		printf("문자열 입력 : ");
//		gets_s(buf, 500);
//
//		char* s = (char*)malloc(strlen(buf) + 1);
//		strcpy_s(s, strlen(buf) + 1, buf);
//
//		strArray[i] = s;
//	}
//
//	{
//		for (int i = 0; i < 3; ++i)
//			printf("[%d] : %s\n", i, strArray[i]);	
//	}
//
//	{
//		for (int i = 0; i < 3; ++i)
//			free(strArray[i]);
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void FreeStrArray(char** strArray)
//{
//	for (int i = 0; i < 3; ++i)
//		free(strArray[i]);
//}
//
//int main()
//{
//	char* strArray[3] = { NULL };
//
//	for (int i = 0; i < 3; ++i)
//	{
//		char buf[500];
//		printf("문자열 입력 : ");
//		gets_s(buf, 500);
//
//		char* s = (char*)malloc(strlen(buf) + 1);
//		strcpy_s(s, strlen(buf) + 1, buf);
//
//		strArray[i] = s;
//	}
//
//	{
//		for (int i = 0; i < 3; ++i)
//			printf("[%d] : %s\n", i, strArray[i]);
//	}
//
//	FreeStrArray(strArray);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void CreateStrArray(char* strArray[])
//{
//	for (int i = 0; i < 3; ++i)
//	{
//		char buf[500];
//		printf("문자열 입력 : ");
//		gets_s(buf, 500);
//
//		char* s = (char*)malloc(strlen(buf) + 1);
//		strcpy_s(s, strlen(buf) + 1, buf);
//
//		strArray[i] = s;
//	}
//}
//
//void PrintStrArray(char* strArray[])
//{
//	for (int i = 0; i < 3; ++i)
//		printf("[%d] : %s\n", i, strArray[i]);
//}
//
//void FreeStrArray(char* strArray[]) // char**
//{
//	for (int i = 0; i < 3; ++i)
//		free(strArray[i]);
//}
//
//int main()
//{
//	char* strArray[3] = { NULL };
//
//	CreateStrArray(strArray);
//	PrintStrArray(strArray);
//	FreeStrArray(strArray);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define StringMax	3
//
//void CreateStrArray(char* strArray[])
//{
//	for (int i = 0; i < StringMax; ++i)
//	{
//		char buf[500];
//		printf("문자열 입력 : ");
//		gets_s(buf, 500);
//
//		char* s = (char*)malloc(strlen(buf) + 1);
//		strcpy_s(s, strlen(buf) + 1, buf);
//
//		strArray[i] = s;
//	}
//}
//
//void PrintStrArray(char* strArray[])
//{
//	for (int i = 0; i < StringMax; ++i)
//		printf("[%d] : %s\n", i, strArray[i]);
//}
//
//void FreeStrArray(char* strArray[]) // char**
//{
//	for (int i = 0; i < StringMax; ++i)
//		free(strArray[i]);
//}
//
//int main()
//{
//	char* strArray[StringMax] = { NULL };
//
//	CreateStrArray(strArray);
//	PrintStrArray(strArray);
//	FreeStrArray(strArray);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define StringMax	3
//
//void CreateStrArray(char* strArray[], int* pstrCount)
//{
//	for (int i = 0; i < StringMax; ++i)
//	{
//		char buf[500];
//		printf("문자열 입력 : ");
//		gets_s(buf, 500);
//
//		char* s = (char*)malloc(strlen(buf) + 1);
//		strcpy_s(s, strlen(buf) + 1, buf);
//
//		strArray[i] = s;
//	}
//	*pstrCount = 3;
//}
//
//void PrintStrArray(char* strArray[], int strCount)
//{
//	for (int i = 0; i < strCount; ++i)
//		printf("[%d] : %s\n", i, strArray[i]);
//}
//
//void FreeStrArray(char* strArray[], int strCount) // char**
//{
//	for (int i = 0; i < strCount; ++i)
//		free(strArray[i]);
//}
//
//int main()
//{
//	char* strArray[StringMax] = { NULL };
//	int strCount = 0;
//
//	CreateStrArray(strArray, &strCount);
//	PrintStrArray(strArray, strCount);
//	FreeStrArray(strArray, strCount);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define StringMax	1000
//
//void CreateStrArray(char* strArray[], int* pstrCount)
//{
//	while(1)
//	{
//		char buf[500];
//		printf("문자열 입력 : ");
//		gets_s(buf, 500);
//		if (strcmp(buf, "exit") == 0)
//			break;
//
//		char* s = (char*)malloc(strlen(buf) + 1);
//		strcpy_s(s, strlen(buf) + 1, buf);
//
//		strArray[(*pstrCount)++] = s;
//	}
//}
//
//void PrintStrArray(char* strArray[], int strCount)
//{
//	for (int i = 0; i < strCount; ++i)
//		printf("[%d] : %s\n", i, strArray[i]);
//}
//
//void FreeStrArray(char* strArray[], int strCount) // char**
//{
//	for (int i = 0; i < strCount; ++i)
//		free(strArray[i]);
//}
//
//int main()
//{
//	char* strArray[StringMax] = { NULL };
//	int strCount = 0;
//
//	CreateStrArray(strArray, &strCount);
//	PrintStrArray(strArray, strCount);
//	FreeStrArray(strArray, strCount);
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = NULL;
//
//	fopen_s(&pf, "test1.txt", "w"); // 1. 열기(생성)
//
//	// 2. R / W
//	fprintf(pf, "Hello\n");
//
//	fclose(pf); // 3. 닫기
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = NULL;
//
//	fopen_s(&pf, "test1.txt", "w"); // 1. 열기(생성)
//
//	for (int i = 0; i < 10; ++i)
//	{
//		fprintf(pf, "Hello : %d\n", i + 1);
//		fprintf(stdout, "Hello : %d\n", i + 1);
//	}
//
//	fclose(pf); // 3. 닫기
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = NULL;
//
//	fopen_s(&pf, "test1.txt", "w"); // 1. 열기(생성)
//
//	for (int i = 0; i < 10; ++i)
//	{
//		fprintf(pf, "Hello : %d\n", i + 1);
//		fprintf(stdout, "Hello : %d\n", i + 1);
//	}
//
//	fclose(pf); // 3. 닫기
//	//
//	fopen_s(&pf, "test1.txt", "r");
//
//	char buf[500];
//	fgets(buf, 500, pf);
//	printf("string : %s", buf);
//
//	fclose(pf);
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = NULL;
//
//	fopen_s(&pf, "test1.txt", "w"); // 1. 열기(생성)
//
//	for (int i = 0; i < 10; ++i)
//	{
//		fprintf(pf, "Hello : %d\n", i + 1);
//		fprintf(stdout, "Hello : %d\n", i + 1);
//	}
//
//	fclose(pf); // 3. 닫기
//	//
//	fopen_s(&pf, "test1.txt", "r");
//
//	for (int i = 0; i < 10; ++i)
//	{
//		char buf[500];
//		fgets(buf, 500, pf);
//		printf("string : %s", buf);
//	}
//
//	fclose(pf);
//}

#include <stdio.h>

int main()
{
	FILE* pf = NULL;

	fopen_s(&pf, "test1.txt", "w"); // 1. 열기(생성)

	for (int i = 0; i < 10; ++i)
	{
		fprintf(pf, "Hello : %d\n", i + 1);
		fprintf(stdout, "Hello : %d\n", i + 1);
	}

	fclose(pf); // 3. 닫기
	//
	fopen_s(&pf, "test1.txt", "r");

	for (int i = 0; i < 10; ++i)
	{
		char s1[10];
		char s2[10];
		int data;
		fscanf_s(pf, "%s %s %d", s1, 10, s2, 10, &data);
		printf("string : %s %s %d\n", s1, s2, data);
	}

	fclose(pf);
}


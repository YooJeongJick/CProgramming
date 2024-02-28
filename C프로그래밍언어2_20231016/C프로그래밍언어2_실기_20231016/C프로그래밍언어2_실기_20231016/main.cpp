//#include <stdio.h>
//
//int main()
//{
//	const char* s[3] = { "ABC", "abc", "hello" };
//	char arr[3][10] = { "ABC", "abc", "hello" };
//	//char arr[3][10] = { {'A', 'B', 'C', '\0'}, {},,}
//
//	printf("%s %s %s\n", s[0], s[1], s[2]);
//	printf("%s %s %s\n", arr[0], arr[1], arr[2]);
//	//printf("%s %s %s\n", &arr[0][0], &arr[1][0], &arr[2][0]);
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* s = "Hello!";
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	const int cn = 10;
//
//	printf("%d %d\n", n, cn);
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	const int* cp = &n;
//
//	*p = 20;
//	//*cp = 30; // 읽기 전용이기 때문에 수정 불가
//
//	printf("%d %d %d\n", n, *p, *cp);
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* s = (const char*)"abc";
//	char s2[10];
//
//	//s2 = s; // s는 주소, s2는 배열...주소...상수, 주소를 주소에 넣어서 오류
//	s2[0] = s[0];
//	s2[1] = s[1];
//	s2[2] = s[2];
//	s2[3] = s[3];
//
//	printf("%s %s\n", s, s2);
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char* s = (const char*)"abc";
//	char s2[10];
//
//	strcpy_s(s2, 4, s);
//	printf("%s %s\n", s, s2);
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char* s = (const char*)"abcdefg";
//	char s2[10];
//
//	printf("len : %d\n", strlen(s));
//	strcpy_s(s2, strlen(s) + 1, s); // 널문자 포함해서 + 1
//	printf("%s %s\n", s, s2);
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char* s1 = "ABC";
//	const char s2[] = "ABC";
//
//	if (s1 == s2)
//		printf("true\n");
//	else
//		printf("false\n");
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char* s1 = "ABC";
//	const char s2[] = "ABC";
//
//	if (s1[0] == s2[0] &&
//		s1[1] == s2[1] &&
//		s1[2] == s2[2] &&
//		s1[3] == s2[3] )
//		printf("true\n");
//	else
//		printf("false\n");
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char* s1 = "ABC";
//	const char s2[] = "ABC";
//
//	if (strcmp(s1, s2) == 0) // > 양수(1), < 음수(1), = (0)
//		printf("true\n");
//	else
//		printf("false\n");
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	const char* s = (const char*)"ABC";
//	char s2[10];
//	char* s3 = NULL;
//
//	strcpy_s(s2, strlen(s) + 1, s); 
//	s3 = (char*)malloc(strlen(s) + 1);
//	//s3 = s;
//	strcpy_s(s3, strlen(s) + 1, s);
//	printf("%s %s\n", s, s2);
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
// 
//int main()
//{
//	const char* s = (const char*)"ABC";
//	char s2[10];
//	char* s3 = NULL;
//
//	strcpy_s(s2, strlen(s) + 1, s);
//	s3 = (char*)malloc(strlen(s) + 1);
//	//s3 = s;
//	strcpy_s(s3, strlen(s) + 1, s);
//
//	printf("%s %s\n", s, s2);
//
//	free(s3);
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	// C - Style : int bRun = 1;
//	bool bRun = true; // C++ 형식(bool) 키워드 (true);
//	int dataArray[1000] = { 0 };
//	int dataCount = 0;
//
//	while (bRun)
//	{
//		printf("사용자 입력 : ");
//		int data = 0;
//		scanf_s("%d", &data);
//		if (data < 0)
//			break;
//		printf("data : %d\n", data);
//	}
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	// C - Style : int bRun = 1;
//	bool bRun = true; // C++ 형식(bool) 키워드 (true);
//	int dataArray[1000] = { 0 };
//	int dataCount = 0;
//
//	while (bRun)
//	{
//		printf("사용자 입력 : ");
//		int data = 0;
//		scanf_s("%d", &data);
//		if (data < 0)
//			break;
//		dataArray[dataCount++] = data;
//
//	}
//
//	// 모든 데이터 출력
//
//	for (int i = 0; i < dataCount; ++i)
//		printf("[%d] : %d\n", i, dataArray[i]);
//
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	bool bRun = true; 
//	int dataArray[1000] = { 0 };
//	int dataCount = 0;
//
//	while (bRun)
//	{
//		printf("사용자 입력 : ");
//		int data = 0;
//		scanf_s("%d", &data);
//		if (data < 0)
//			bRun = false;
//		else
//			dataArray[dataCount++] = data;
//	}
//
//	for (int i = 0; i < dataCount; ++i)
//		printf("[%d] : %d\n", i, dataArray[i]);
//
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	bool bRun = true;
//	char* dataArray[1000] = { 0 };
//	int dataCount = 0;
//
//	while (bRun)
//	{
//		printf("사용자 입력 : ");
//		char buf[1024];
//		gets_s(buf, 1024);
//
//		if (strcmp("exit", buf) == 0)
//			bRun = false;
//		else
//		{
//			char* data = (char*)malloc(strlen(buf) + 1);
//			strcpy_s(data, strlen(buf) + 1, buf);
//			dataArray[dataCount++] = data;
//		}
//	}
//
//	for (int i = 0; i < dataCount; ++i)
//		printf("[%d] : %s\n", i, dataArray[i]);
//
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	bool bRun = true;
//	int dataArray[1000] = { 0 };
//	int dataCount = 0;
//
//	while (bRun)
//	{
//		printf("사용자 입력 : ");
//		char buf[1024];
//		gets_s(buf, 1024);
//
//		if (strcmp("exit", buf) == 0)
//			bRun = false;
//		else
//		{
//			char* data = (char*)malloc(strlen(buf) + 1);
//			strcpy_s(data, strlen(buf) + 1, buf);
//			dataArray[dataCount++] = data;
//		}
//	}
//
//	for (int i = 0; i < dataCount; ++i)
//		printf("[%d] : %s\n", i, dataArray[i]);
//
//	for (int i = 0; i < dataCount; ++i)
//		free(dataAray[i]);
//
//}

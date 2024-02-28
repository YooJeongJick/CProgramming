//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	double d = 2.6;
//	int* pn = &n;
//	double* pd = &d;
//
//	printf("%d %g\n", n, d);
//	printf("%d %g\n", *pn, *pd);
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	double d = 2.6;
//	int* pn = &n;
//	double* pd = &d;
//
//	printf("%d %g\n", n, d);
//	printf("%d %g\n", *pn, *pd);
//
//	void* pv = &n;
//	printf("%p\n", pv);
//	//printf("%p\n", *pv); -> 에러 발생, 무슨 형식인지 지정해야함
//	printf("%p\n", *(int*)pv);
//
//	pv = &d;
//	printf("%p\n", pv);
//	printf("%g\n", *(double*)pv);
//}

//#include <stdio.h>
//
//int main() 
//{
//	char c = 'A';
//	printf("%d %c\n", c, c);
//	printf("%d %c\n", c + 1, c + 1);
//	printf("%d %c\n", 65, 65);
//	printf("%d %c\n", 65 + 1, 65 + 1);
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* s = "ABC"; // 문자열을 생성하고, 문자열의 시작주소를 s에 담아라
//	printf("%p %s\n", s, s);
//	printf("%p %s\n", s + 1, s + 1); 
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* s = "ABC"; 
//	printf("%p %s\n", s, s);
//	printf("%p %s\n", s + 1, s + 1);
//	printf("%c %d\n", *s, *s);
//	printf("%c %d\n", *(s + 1), *(s + 1));
//	printf("%c %d\n", *(s + 2), *(s + 2));
//	printf("%c %d\n", *(s + 3), *(s + 3));
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* s = "ABC"; // 문자열을 생성하고, 문자열의 시작주소를 s에 담아라
//	printf("%p %s\n", s, s);
//	printf("%p %s\n", s + 1, s + 1);
//	printf("%c %d\n", s[0], s[0]);
//	printf("%c %d\n", s[1], s[1]);
//	printf("%c %d\n", s[2], s[2]);
//	printf("%c %d\n", s[3], s[3]);
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* s = "ABC"; // 문자열을 생성하고, 문자열의 시작주소를 s에 담아라
//	printf("%s %s %s\n", s, &s[0], &s[1]);
//}

//#include <stdio.h>
//
//int main()
//{
//	char arr[10] = { 'A', 'B', 'C' };
//
//	printf("%p %s\n", arr, arr);
//	printf("%p %s\n", arr + 1, arr + 1);
//}

//#include <stdio.h>
//
//int main()
//{
//	char arr[3] = { 'A', 'B', 'C' }; // 문자열이 아님, %s 사용 불가
//
//	printf("%p %s\n", arr, arr);
//	printf("%p %s\n", arr + 1, arr + 1);
//}

//#include <stdio.h>
//
//int main()
//{
//	char arr[4] = { 'A', 'B', 'C', '\0'};
//	//char arr[] = { 'A', 'B', 'C', '\0'};
//	char arr[] = "ABC";
//
//	printf("%p %s\n", arr, arr);
//	printf("%p %s\n", arr + 1, arr + 1);
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* s1 = "ABC";
//	const char* s2 = "abc";
//	const char* s3 = "hello";
//
//	char arr1[] = "ABC";
//	char arr2[] = "abc";
//	char arr3[] = "hello";
//
//	printf("%s %s %s\n", s1, s2, s3);
//	printf("%s %s %s\n", arr1, arr2, arr3);
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* s[3];
//
//	char arr1[] = "ABC";
//	char arr2[] = "abc";
//	char arr3[] = "hello";
//
//	printf("%s %s %s\n", s[0], s[1], s[2]);
//	printf("%s %s %s\n", arr1, arr2, arr3);
//	printf("%c\n", s[0][1]);
//	printf("%c\n", *(s[2] + 2));
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* s[3] = { "ABC", "abc", "hello" };
//	char arr[3][10] = { "ABC", "abc", "hello" };
//
//	printf("%s %s %s\n", s[0], s[1], s[2]);
//	printf("%s %s %s\n", arr[0], arr[1], arr[2]);
//}






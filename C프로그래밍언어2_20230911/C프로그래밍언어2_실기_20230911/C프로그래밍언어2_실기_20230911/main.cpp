#include <stdio.h>
#include <stdlib.h>

void ResetArray(int* p) // p : out parameter
{
	for (int i = 0; i < 10; ++i)
		p[i] = 0; // Write, �޸𸮸� �����ϱ� ���ؼ�
}

void PrintArray(const int* p) // p : int parameter, �б� �����̶� const �ٿ�����
{
	for (int i = 0; i < 10; ++i)
		printf("%d\n", p[i]); // Read, �޸𸮸� �б� ���ؼ�
}

char* InputData()
{
	char* buf = (char*)malloc(sizeof(char) * 500);
	printf("���ڿ��� �Է��ϼ��� : ");
	gets_s(buf, 500);
	return buf;
}

int main()
{
	//int arr[10] = { 1, 2, 3, 4, 5 };

	/*for (int i = 0; i < 10; i++)
		printf("%d : %d\n", i, arr[i]);*/

	/*printf("%p %d\n", arr, sizeof(arr));
	printf("%p %d\n", &arr[0], sizeof(&arr[0]));*/
	// arr != &arr[0], ������� ������ �ٸ�

	/*int* p1 = &arr[0];
	printf("%p %d\n", p1, sizeof(p1));
	printf("%d\n", *p1);
	int* p2 = arr;
	printf("%p %d\n", p2, sizeof(p2));*/

	/*int* p1 = &arr[0];
	int* p2 = arr;
	printf("%d %d\n", *p1, p1[0]);
	printf("%d %d\n", *(p1 + 1), p1[1]);
	printf("%d %d\n", *p2, p2[0]);
	printf("%d %d\n", *(p2 + 1), p2[1]);*/

	/*int* p = arr;
	printf("%p %p\n", p, arr);
	printf("%p %p\n", p + 1, arr + 1);

	for (int i = 0; i < 10; ++i)
		printf("%d %d\n", arr[i], p[i]);*/

	/*ResetArray(arr);
	PrintArray(arr);*/

	// stdlib�߰� ����, arr ����
	/*int* arr = (int*)malloc(sizeof(int) * 10);

	ResetArray(arr);
	PrintArray(arr);*/

	// ��
	/*int data = 10;
	int* p = (int*)malloc(sizeof(int));
	*p = 10;

	printf("%d %d\n", data, *p);

	free(p);*/

	/*char buf[500];
	printf("���ڿ��� �Է��ϼ��� : ");
	gets_s(buf, 100);
	printf("string : %s\n", buf);*/

	char* temp = InputData();
	printf("string : %s\n", temp);
	free(temp);
}




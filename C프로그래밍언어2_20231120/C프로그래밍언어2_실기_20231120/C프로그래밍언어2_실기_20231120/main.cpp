//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	FILE* pf = NULL;
//	fopen_s(&pf, "mydata.binary", "wb");
//
//	{ // file header
//		char head[2] = { 'M', 'Y' };
//		int dataLength = 4;
//
//		fwrite(head, sizeof(head), 1, pf);
//		fwrite(&dataLength, sizeof(int), 1, pf);
//	}
//	{ // file body
//		int data1 = 102;
//		double data2 = 3.141592;
//		const char* data3 = "Hello!";
//		char type;
//
//		// 정수
//		type = 'I';
//		fwrite(&type, sizeof(char), 1, pf);
//		fwrite(&data1, sizeof(int), 1, pf);
//
//		// 문자열
//		type = 'S';
//		fwrite(&type, sizeof(char), 1, pf);
//		int slen = strlen(data3) + 1;
//		fwrite(&slen, sizeof(int), 1, pf);
//		fwrite(data3, slen, 1, pf);
//
//		// 정수
//		type = 'I';
//		fwrite(&type, sizeof(char), 1, pf);
//		fwrite(&data1, sizeof(int), 1, pf);
//
//		// 실수
//		type = 'D';
//		fwrite(&type, sizeof(char), 1, pf);
//		fwrite(&data2, sizeof(double), 1, pf);
//	}
//
//	fclose(pf);
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	FILE* pf = NULL;
//	fopen_s(&pf, "mydata.binary", "rb");
//	int dataLength = 0;
//
//	{ // file header
//		char head[2] = { 0 };
//
//		fread(head, sizeof(head), 1, pf);
//		fread(&dataLength, sizeof(int), 1, pf);
//
//		if (!(head[0] == 'M' && head[1] == 'Y'))
//		{
//			printf("파일 포멧이 우리 프로그램이 아님!!\n");
//			return -7;
//		}
//
//		printf("%d%d, %c%c\n", head[0], head[1], head[0], head[1]);
//		printf("정수 : %d\n", dataLength);
//	}
//	{ // file body
//		for (int i = 0; i < dataLength; ++i)
//		{
//			char dataType = 0;
//			fread(&dataType, sizeof(char), 1, pf);
//			switch (dataType)
//			{
//			case 'I' :
//				{
//				int data;
//				fread(&data, sizeof(int), 1, pf);
//				printf("data[%c] : %d\n", dataType, data);
//				}
//				break;
//			case 'D':
//				{
//				double data;
//				fread(&data, sizeof(double), 1, pf);
//				printf("data[%c] : %g\n", dataType, data);
//				}
//				break;
//			case 'S':
//				{
//				int slen;
//				char data[500];
//				fread(&slen, sizeof(int), 1, pf);
//				fread(data, slen, 1, pf);
//				printf("data[%c] : %s\n", dataType, data);
//				}
//				break;
//			default :
//				break;
//			}
//		}
//	}
//
//	fclose(pf);
//}
//

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	FILE* pf = NULL;
//	fopen_s(&pf, "mydata.binary", "wb");
//
//	int dataLength = 5;
//	{ // file header
//		char head[2] = { 'M', 'Y' };
//
//		fwrite(head, sizeof(head), 1, pf);
//		fwrite(&dataLength, sizeof(int), 1, pf);
//	}
//	{ // file body
//		int data1 = 102;
//		double data2 = 3.141592;
//		const char* data3 = "Hello!";
//		char type;
//
//		// 정수
//		type = 'I';
//		fwrite(&type, sizeof(char), 1, pf);
//		fwrite(&data1, sizeof(int), 1, pf);
//
//		// 문자열
//		type = 'S';
//		fwrite(&type, sizeof(char), 1, pf);
//		int slen = strlen(data3) + 1;
//		fwrite(&slen, sizeof(int), 1, pf);
//		fwrite(data3, slen, 1, pf);
//
//		// 문자열
//		type = 'S';
//		fwrite(&type, sizeof(char), 1, pf);
//		slen = strlen(data3) + 1;
//		fwrite(&slen, sizeof(int), 1, pf);
//		fwrite(data3, slen, 1, pf);
//
//		// 정수
//		type = 'I';
//		fwrite(&type, sizeof(char), 1, pf);
//		fwrite(&data1, sizeof(int), 1, pf);
//
//		// 실수
//		type = 'D';
//		fwrite(&type, sizeof(char), 1, pf);
//		fwrite(&data2, sizeof(double), 1, pf);
//	}
//
//	fclose(pf);
//
//	fopen_s(&pf, "mydata.binary", "rb");
//	{ // file header
//		char head[2] = { 0 };
//
//		fread(head, sizeof(head), 1, pf);
//		fread(&dataLength, sizeof(int), 1, pf);
//
//		if (!(head[0] == 'M' && head[1] == 'Y'))
//		{
//			printf("파일 포멧이 우리 프로그램이 아님!!\n");
//			return -7;
//		}
//
//		printf("%d%d, %c%c\n", head[0], head[1], head[0], head[1]);
//		printf("정수 : %d\n", dataLength);
//	}
//	{ // file body
//		for (int i = 0; i < dataLength; ++i)
//		{
//			char dataType = 0;
//			fread(&dataType, sizeof(char), 1, pf);
//			switch (dataType)
//			{
//			case 'I':
//			{
//				int data;
//				fread(&data, sizeof(int), 1, pf);
//				printf("data[%c] : %d\n", dataType, data);
//			}
//			break;
//			case 'D':
//			{
//				double data;
//				fread(&data, sizeof(double), 1, pf);
//				printf("data[%c] : %g\n", dataType, data);
//			}
//			break;
//			case 'S':
//			{
//				int slen;
//				char data[500];
//				fread(&slen, sizeof(int), 1, pf);
//				fread(data, slen, 1, pf);
//				printf("data[%c] : %s\n", dataType, data);
//			}
//			break;
//			default:
//				break;
//			}
//		}
//	}
//
//	fclose(pf);
//}

//#include <stdio.h>
//
//void AddInteger(int dArray[], int* pdCount, int data)
//{
//	dArray[(*pdCount)++] = data;
//}
//
//void PrintInteger(int dArray[], int dCount)
//{
//	for (int i = 0; i < dCount; i++)
//		printf("%d : %d\n", i, dArray[i]);
//}
//
//int main()
//{
//	int dArray[100] = { 0 };
//	int dCount = 0;
//
//	AddInteger(dArray, &dCount, 10);
//	AddInteger(dArray, &dCount, 20);
//	AddInteger(dArray, &dCount, 30);
//
//	PrintInteger(dArray, dCount);
//}

//#include <stdio.h>
//
//void AddInteger(int dArray[], int* pdCount, int data)
//{
//	dArray[(*pdCount)++] = data;
//}
//
//void PrintInteger(const int dArray[], const int* pdCount)
//{
//	for (int i = 0; i < *pdCount; i++)
//		printf("%d : %d\n", i, dArray[i]);
//}
//
//int main()
//{
//	int dArray[100] = { 0 };
//	int dCount = 0;
//
//	AddInteger(dArray, &dCount, 10);
//	AddInteger(dArray, &dCount, 20);
//	AddInteger(dArray, &dCount, 30);
//
//	PrintInteger(dArray, &dCount);
//}

//#include <stdio.h>
//typedef struct _IntegerArray_tag
//{
//	int dArray[100];
//	int dCount;
//} IntegerArray;
//
//void AddInteger(IntegerArray *pia, int data)
//{
//	pia->dArray[pia->dCount++] = data;
//}
//
//void PrintInteger(IntegerArray* pia)
//{
//	for (int i = 0; i < pia->dCount; i++)
//		printf("%d : %d\n", i, pia->dArray[i]);
//}
//
//int main()
//{
//	IntegerArray ia = { 0 };
//
//	AddInteger(&ia, 10);
//	AddInteger(&ia, 20);
//	AddInteger(&ia, 30);
//
//	PrintInteger(&ia);
//}

//#include <stdio.h>
//typedef struct _IntegerArray_tag
//{
//	int dArray[100];
//	int dCount;
//} IntegerArray;
//
//void AddInteger(IntegerArray* pia, int data)
//{
//	pia->dArray[pia->dCount++] = data;
//}
//
//void PrintInteger(const IntegerArray* pia)
//{
//	for (int i = 0; i < pia->dCount; i++)
//		printf("%d : %d\n", i, pia->dArray[i]);
//}
//
//int main()
//{
//	IntegerArray ia = { 0 };
//
//	AddInteger(&ia, 10);
//	AddInteger(&ia, 20);
//	AddInteger(&ia, 30);
//
//	PrintInteger(&ia);
//}

#include <stdio.h>
typedef struct _IntegerArray_tag
{
	int dArray[100];
	int dCount;
} IntegerArray;

void AddInteger(IntegerArray* pia, int data)
{
	pia->dArray[pia->dCount++] = data;
}

void PrintInteger(const IntegerArray* pia)
{
	for (int i = 0; i < pia->dCount; i++)
		printf("%d : %d\n", i, pia->dArray[i]);
}

int main()
{
	IntegerArray ia = { 0 };

	AddInteger(&ia, 10);
	AddInteger(&ia, 20);
	AddInteger(&ia, 30);

	PrintInteger(&ia);
}

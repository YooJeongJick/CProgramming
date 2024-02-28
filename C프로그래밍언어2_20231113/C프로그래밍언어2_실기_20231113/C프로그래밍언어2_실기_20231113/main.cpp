//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = NULL;
//	// 1. ���� ����
//	fopen_s(&pf, "c:\\Projects\\test1.txt", "w"); // ����, pf = fopen("text1.txt", "w");
//	//fopen_s(&pf, "..\\test1.txt", "w"); // ���	
//
//	// 2. ���� ��/���
//	fprintf(pf, "%d : hello\n", 100);
//	
//	// 3. ���� �ݱ�
//	fclose(pf);
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", '\r'); // CR
//	printf("%d\n", '\n'); // LF
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = NULL;
//	// 1. ���� ����
//	fopen_s(&pf, "test1.txt", "w"); 
//
//	// 2. ���� ��/���
//	fprintf(pf, "A\n"); // �Ӽ� Ȯ�ν� 3B
//	
//	// 3. ���� �ݱ�
//	fclose(pf);
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = NULL;
//	fopen_s(&pf, "test1.txt", "wb");
//
//	fprintf(pf, "A\n"); 
//
//	fclose(pf);
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = NULL;
//	fopen_s(&pf, "test1.txt", "wb");
//
//	char arr[2] = { 'A', '\n' }; // { 65, 10 }, 2B
//	fwrite(arr, 2, 1, pf);
//
//	fclose(pf);
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = NULL;
//	fopen_s(&pf, "test1.txt", "w");
//
//	char arr[2] = { 'A', '\n' }; // { 65, 10 }, 3B
//	fwrite(arr, 2, 1, pf);
//
//	fclose(pf);
//}

//#include <stdio.h>
//
//int main()
//{
//	char c = 'A';
//	int n = 100;
//	double d = 2.55;
//
//	FILE* pf = NULL;
//	fopen_s(&pf, "test1.txt", "w");
//	fprintf(pf, "%c %d %g\n", c, n, d);
//	fclose(pf);
//
//	fopen_s(&pf, "test1.binary", "wb");
//	fwrite(&c, 1, 1, pf);
//	fwrite(&n, 4, 1, pf);
//	fwrite(&d, 8, 1, pf);
//	fclose(pf);
//
//	fopen_s(&pf, "test1.txt", "r");
//	char buf[500];
//	fgets(buf, 500, pf);
//	printf("%s", buf);
//	fclose(pf);
//
//	fopen_s(&pf, "test1.binary", "rb");
//	fclose(pf);
//}

//#include <stdio.h>
//
//int main()
//{
//	char c = 'A';
//	int n = 100;
//	double d = 2.55;
//
//	FILE* pf = NULL;
//	fopen_s(&pf, "test1.txt", "w");
//	fprintf(pf, "%c %d %g\n", c, n, d);
//	fclose(pf);
//
//	fopen_s(&pf, "test1.binary", "wb");
//	fwrite(&n, 4, 1, pf);
//	fwrite(&c, 1, 1, pf);
//	fwrite(&d, 8, 1, pf);
//	fclose(pf);
//
//	fopen_s(&pf, "test1.txt", "r");
//	char buf[500];
//	fgets(buf, 500, pf);
//	printf("%s", buf);
//	fclose(pf);
//
//	fopen_s(&pf, "test1.binary", "rb");
//	// 1byte : ����, 4byte : ����, 8byte : �Ǽ� - (13byte)
//	char c2;
//	int n2;
//	double d2;
//
//	fread(&c2, sizeof(char), 1, pf);
//	fread(&n2, sizeof(int), 1, pf);
//	fread(&d2, sizeof(double), 1, pf);
//	printf("���� ������ : %c %d %g\n", c2, n2, d2);
//	fclose(pf);
//}

#include <stdio.h>
#include <string.h>

int main()
{
	FILE* pf = NULL;
	fopen_s(&pf, "mydata.binary", "wb");

	{ // file header
		char head[2] = { 'M', 'Y' };
		int dataLength = 4;

		fwrite(head, sizeof(head), 1, pf);
		fwrite(&dataLength, sizeof(int), 1, pf);
	}
	{ // file body
		int data1 = 102;
		double data2 = 3.141592;
		const char* data3 = "Hello!";
		char type;

		// ����
		type = 'I';
		fwrite(&type, sizeof(char), 1, pf);
		fwrite(&data1, sizeof(int), 1, pf);

		// ���ڿ�
		type = 'S';
		fwrite(&type, sizeof(char), 1, pf);
		int slen = strlen(data3) + 1;
		fwrite(&slen, sizeof(int), 1, pf);
		fwrite(data3, slen, 1, pf);

		// ����
		type = 'I';
		fwrite(&type, sizeof(char), 1, pf);
		fwrite(&data1, sizeof(int), 1, pf);

		// �Ǽ�
		type = 'D';
		fwrite(&type, sizeof(char), 1, pf);
		fwrite(&data2, sizeof(double), 1, pf);
	}

	fclose(pf);
}


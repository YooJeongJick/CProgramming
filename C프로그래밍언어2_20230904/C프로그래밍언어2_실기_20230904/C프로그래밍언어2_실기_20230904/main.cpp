#include <stdio.h>

int main()
{
	/*int a = 10;
	printf("%d\n", a);
	printf("%p\n", &a);*/

	/*char a = 10;
	printf("%d %d\n", a, a + 1);
	printf("%p %p\n", &a, &a + 1);*/
	// &a + 1�� �ϸ� ���ĸ�ŭ �ǳʶ�, E14 -> E18

	int a = 10;
	int* p = &a;

	printf("%d\n", a);
	printf("%p\n", p);
	// &*p�� &a�� ����
}
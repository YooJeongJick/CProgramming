#include <stdio.h>

int main()
{
	/*int a = 10;
	printf("%d\n", a);
	printf("%p\n", &a);*/

	/*char a = 10;
	printf("%d %d\n", a, a + 1);
	printf("%p %p\n", &a, &a + 1);*/
	// &a + 1을 하면 형식만큼 건너뜀, E14 -> E18

	int a = 10;
	int* p = &a;

	printf("%d\n", a);
	printf("%p\n", p);
	// &*p와 &a는 같음
}
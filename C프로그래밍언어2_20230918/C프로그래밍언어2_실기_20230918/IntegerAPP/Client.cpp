#include "Server.h" // <> : ǥ�� ���丮 ã���ּ���~

int main()
{
	int* p = 0;
	
	AllocInteger(&p);
	SetInteger(p, 10);
	PrintInteger(*p);
	FreeInteger(p);
}
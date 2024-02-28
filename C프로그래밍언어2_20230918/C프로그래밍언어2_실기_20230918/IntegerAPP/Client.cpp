#include "Server.h" // <> : 표준 디렉토리 찾아주세요~

int main()
{
	int* p = 0;
	
	AllocInteger(&p);
	SetInteger(p, 10);
	PrintInteger(*p);
	FreeInteger(p);
}
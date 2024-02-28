#include "integerArray.h"

int main()
{
	IntegerArray ia = { 0 };

	AddInteger(&ia, 10);
	AddInteger(&ia, 20);
	AddInteger(&ia, 30);

	PrintInteger(&ia);
	PrintInteger(&ia);
	PrintInteger(&ia);
}

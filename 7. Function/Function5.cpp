#include <stdio.h>

void Function5(int a)
{
	a = 10000;
}

int main()
{
	int a = 3;

	printf("main's a : %d\n", a);

	Function5(a);

	printf("main's a after Function5 : %d\n", a);

	return 0;
}
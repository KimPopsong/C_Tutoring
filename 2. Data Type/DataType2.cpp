#include <stdio.h>

int main()
{
	double db1 = 1;
	char name[] = { 'K', 'I', 'M' };

	printf("%lf\n", db1);  // %lf 사용. 소수점 6자리까지 출력

	for (int i = 0; i < 3; i++)
	{
		printf("%c", name[i]);
	}
	printf("\n");

	return 0;
}
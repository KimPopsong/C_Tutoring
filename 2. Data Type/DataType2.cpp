#include <stdio.h>

int main()
{
	double db1 = 1;
	char name[] = { 'K', 'I', 'M' };

	printf("%lf\n", db1);  // %lf ���. �Ҽ��� 6�ڸ����� ���

	for (int i = 0; i < 3; i++)
	{
		printf("%c", name[i]);
	}
	printf("\n");

	return 0;
}
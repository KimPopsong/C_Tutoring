#include <stdio.h>

int main()
{
	int a = 10;

	do  // do ~ while��. �ּ� �ѹ��� ������.
	{
		printf("%d\n", a);
	} while (a < 10);  // while�� ������ ;�� �ٿ��� ��.

	a = 0;

	do
	{
		a += 1;

		if (a == 5 || a == 7)
		{
			continue;  // continue���� ������ �ݺ����� ó������ ���� ��
		}

		printf("%d\n", a);

	} while (a < 10);

	return 0;
}

// https://www.acmicpc.net/search#q=%EB%B3%84%20%EC%B0%8D%EA%B8%B0&c=Problems
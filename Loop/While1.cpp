#include <stdio.h>

int main()
{
	int a = 0;

	while (true)  // while��. ��ȣ �ȿ� ������ ���̸� ����
	{
		printf("%d\n", a);

		a++;  // a += 1�� ����

		if (a == 10)
		{
			break;  // break��. ������ �ݺ����� Ż��
		}
	}

	a = 0;

	while (a < 10)
	{
		printf("%d\n", a++);  // �� �ڵ�� ���� ����
	}

	return 0;
}

// https://www.acmicpc.net/problem/2741
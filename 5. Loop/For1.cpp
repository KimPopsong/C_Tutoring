#include <stdio.h>

int main()
{
	int i;  // �ݺ����� �ַ� i, j, k... ���� ���

	for (i = 0; i < 10; i++)  // if���� ���������� ���� ;�� ������ ����. ���۰�; ����; ���������� ����
	{
		printf("%d��° ���\n", i);  // 0���� ������ 10�̵Ǹ� Ż��
	}

	for (int j = 0; j < 10; j++)  // �̸� ������ �������� �ʰ�, for�� ������ ���� ����
	{
		int k = 0;
	}

	//printf("%d %d\n", j, k);  // j, k�� for�� ������ ����Ǿ����Ƿ�, �ܺο����� ��� �Ұ���.

	for (int j = 0; j < 10; j++)
	{
		for (int k = 0; k < j; k++)
		{
			printf("j = %d, k = %d\n", j, k);
		}
	}

	return 0;
}

// https://www.acmicpc.net/problem/2739
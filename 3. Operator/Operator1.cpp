#include <stdio.h>

int main()
{
	int a = 7, b = 5;
	
	printf("a + b = %d\n", a + b);  // ��� ������ �ܼ��� ������ �ƴ�, ��� ���� ��°���
	printf("a - b = %d\n", a - b);
	printf("a / b = %d\n", a / b);  // �������̹Ƿ� 1�� ���
	printf("a * b = %d\n", a * b);
	printf("a %% b = %d\n", a % b);  // %�� ���Ĺ����̹Ƿ� �׳� ��µ��� �ʰ�, ����Ϸ��� %% ���, %�� ������ ����

	return 0;
}

// https://www.acmicpc.net/problem/10869
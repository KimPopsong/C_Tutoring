#include <stdio.h>

int Sum(int a, int b)  // a�� b�� ���� ��ȯ�ϴ� �Լ�. �Լ� �̸��� ����������
{
	int sum = a + b;

	return sum;
}

int main()
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	printf("num1 + num2 = %d\n", Sum(num1, num2));

	return 0;
}
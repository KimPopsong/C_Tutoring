#include <stdio.h>

int b = 3;  // ���� ����

void Function4()
{
	int a = 4;

	printf("Function4's a : %d\n", a);  // main �Լ��� a�� Function4�� a�� �ٸ� ����
	printf("Function4's b : %d\n", b);  // main �Լ��� a�� Function4�� b�� ���� ����
}

int main()
{
	int a = 1;  // ���� ����

	printf("main's a : %d\n", a);
	printf("main's b : %d\n", b);

	Function4();

	return 0;
}
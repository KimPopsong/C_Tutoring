#include <stdio.h>

int main()
{
	int a = 1, b = 2;

	int c, d, e, f = 0;

	c = a + b;
	d = a;
	e = b;
	a = a + b;
	b += a;  // b = a + b�� ���� ��
	c++;  // c�� 1 ������Ų�ٴ� ��, ���� ������
	++c;  // c�� 1 ������Ų�ٴ� ��, ���� ������

	printf("���� ������ : %d\n", ++f);
	f = 0;
	printf("���� ������ : %d\n", f++);

	printf("%d %d %d %d %d\n", a, b, c, d, e);

	return 0;
}
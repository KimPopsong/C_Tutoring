#include <stdio.h>

int main()
{
	int a = 1, b = 2;

	int c, d, e, f = 0;

	c = a + b;  // c = 3
	d = a;  // d = 1
	e = b;  // e = 2
	a = a + b;  // a = 3
	b += a;  // b = a + b�� ���� ��, b = 5
	c++;  // c�� 1 ������Ų�ٴ� ��, ���� ������
	++c;  // c�� 1 ������Ų�ٴ� ��, ���� ������

	printf("���� ������ : %d\n", ++f);  //f = 1
	f = 0;
	printf("���� ������ : %d\n", f++);
	printf("%d %d %d %d %d\n", a, b, c, d, e);

	return 0;
}
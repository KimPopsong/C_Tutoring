#include <stdio.h>

void Function1(int a)  // ��ȯ��, �Լ���, �Ű� ����
{
	printf("Function1's print : %d\n", a);  // main �Լ��� a�� Function1�� a�� �ٸ� ����
}  // void ���� ��ȯ�� ����

int Function2(int a, int b, int c)  // �Ű� ������ ���� ���� ����
{
	int sum = a + b + c;

	return sum;
}  // int ���� ��ȯ���� ������

int main()
{
	int a, b, c;
	
	a = 3;
	b = 4;
	c = 5;

	Function1(a);  // int�� �Ű����� �Ѱ��� �־���

	int sum = Function2(a, b, c);  // ��ȯ�� int ���� �޾��� ����

	printf("sum : %d\n", sum);

	printf("Function2's return : %d\n", Function2(a, b, c));  // ���� ���� �ٷ� ��ȯ�� �� ��� ����

	return 0;
}
#include <stdio.h>

int main()
{
	int a = 1, b = 2, c = 2;

	printf("���� ������\n");
	printf("%d\n", a > b);  // ���� 1, ������ 0. a�� b �ʰ��ΰ�
	printf("%d\n", b >= c);  // b�� c �̻��ΰ�
	printf("%d\n", a == c);  // ������
	printf("%d\n", b != c);  // != ���� ������
	printf("\n");

	printf("�� ������\n");
	printf("%d\n", a && b);  // and����. a�� b�� �Ѵ� ���̸� true ����
	printf("%d\n", a || b);  // or����. a�� b �� �� �ϳ��� ���̸� true ����
	printf("%d\n", !a);  // not����. a�� �����̸� true��, ���̸� false�� ����

	return 0;
}
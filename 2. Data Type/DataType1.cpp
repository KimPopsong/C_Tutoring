#include <stdio.h>

int main()
{
	char ch1 = 'A';
	short srt1 = 32767;
	int int1 = 2147483647;
	long long1 = 2147483647;
	float flt1 = 123456.7890123456789;  // �Ǽ���. �ε� �Ҽ��� �����̶� ��Ȯ���� ������
	double dbl1 = 12345679.123456789;  // �Ǽ���.

	printf("%c\n%d\n%f\n%lf\n", ch1, int1, flt1, dbl1);

	return 0;
}
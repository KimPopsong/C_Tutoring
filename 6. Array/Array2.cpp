#include <stdio.h>

int main()
{
	char arr1[] = { 'H', 'I' };
	char arr2[10];  // �ʱ�ȭ�� ���� �ʾƵ� ��

	for (int i = 0; i < sizeof(arr1); i++)  // sizeof �̿�
	{
		printf("%c\n", arr1[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		char c;
		scanf(" %c", &c);  // ����� ���� ����
		arr2[i] = c;  // �ϳ��� �� �־��ֱ�
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%c", arr2[i]);  // �ϳ��� ���
	}
	printf("\n");

	return 0;
}

// https://www.acmicpc.net/step/6
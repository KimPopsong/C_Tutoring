#include <stdio.h>

int main()
{
	int arr1[] = { 0, 1, 2, 3, 4 };
	int arr2[3][3] = {
		{0, 1, 2},
		{0, 1, 2},
		{0, 1, 2} };  // 3�� 3���� 2���� �迭 ����

	for (int i = 0; i < 5; i++)  // 1���� �迭�� ������ ��
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	for (int i = 0; i < 9; i++)  // Ʋ�� ���
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

	for (int i = 0; i < 3; i++)  // 2���� �迭�� ������ ��
	{
		for (int j = 0; j < 3; j++)  // �� ���� ���� ��, �� �����ϴ� ����� ������
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
#include <stdio.h>

int main()
{
	int arr1[3][3] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf(" %d", &arr1[i][j]);  // �ּҰ� �̿��ؼ� �Է� ����
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
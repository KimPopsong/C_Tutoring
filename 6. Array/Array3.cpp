#include <stdio.h>

int main()
{
	int arr1[] = { 0, 1, 2, 3, 4 };
	int arr2[3][3] = {
		{0, 1, 2},
		{0, 1, 2},
		{0, 1, 2} };  // 3행 3열의 2차원 배열 생성

	for (int i = 0; i < 5; i++)  // 1차원 배열에 접근할 때
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	for (int i = 0; i < 9; i++)  // 틀린 방법
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

	for (int i = 0; i < 3; i++)  // 2차원 배열에 접근할 때
	{
		for (int j = 0; j < 3; j++)  // 행 먼저 접근 후, 열 접근하는 방식이 보편적
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
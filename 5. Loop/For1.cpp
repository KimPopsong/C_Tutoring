#include <stdio.h>

int main()
{
	int i;  // 반복문은 주로 i, j, k... 등을 사용

	for (i = 0; i < 10; i++)  // if문과 마찬가지로 끝에 ;을 붙이지 않음. 시작값; 조건; 증감식으로 구성
	{
		printf("%d번째 출력\n", i);  // 0부터 시작해 10이되면 탈출
	}

	for (int j = 0; j < 10; j++)  // 미리 변수를 선언하지 않고, for문 내에서 선언 가능
	{
		int k = 0;
	}

	//printf("%d %d\n", j, k);  // j, k는 for문 내에서 선언되었으므로, 외부에서는 사용 불가능.

	for (int j = 0; j < 10; j++)
	{
		for (int k = 0; k < j; k++)
		{
			printf("j = %d, k = %d\n", j, k);
		}
	}

	return 0;
}

// https://www.acmicpc.net/problem/2739
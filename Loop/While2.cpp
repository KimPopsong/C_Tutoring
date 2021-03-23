#include <stdio.h>

int main()
{
	int a = 10;

	do  // do ~ while문. 최소 한번은 실행함.
	{
		printf("%d\n", a);
	} while (a < 10);  // while의 끝에는 ;을 붙여야 함.

	a = 0;

	do
	{
		a += 1;

		if (a == 5 || a == 7)
		{
			continue;  // continue문은 강제로 반복문의 처음으로 가게 함
		}

		printf("%d\n", a);

	} while (a < 10);

	return 0;
}

// https://www.acmicpc.net/search#q=%EB%B3%84%20%EC%B0%8D%EA%B8%B0&c=Problems
#include <stdio.h>

int main()
{
	int a = 0;

	while (true)  // while문. 괄호 안에 조건이 참이면 실행
	{
		printf("%d\n", a);

		a++;  // a += 1과 같음

		if (a == 10)
		{
			break;  // break문. 강제로 반복문을 탈출
		}
	}

	a = 0;

	while (a < 10)
	{
		printf("%d\n", a++);  // 위 코드와 같은 동작
	}

	return 0;
}

// https://www.acmicpc.net/problem/2741
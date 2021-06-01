#include <stdio.h>

int main()
{
	int a = 7, b = 5;
	
	printf("a + b = %d\n", a + b);  // 출력 값으로 단순한 변수가 아닌, 계산 값도 출력가능
	printf("a - b = %d\n", a - b);
	printf("a / b = %d\n", a / b);  // 정수형이므로 1이 출력
	printf("a * b = %d\n", a * b);
	printf("a %% b = %d\n", a % b);  // %는 서식문자이므로 그냥 출력되지 않고, 출력하려면 %% 사용, %는 나머지 연산

	return 0;
}

// https://www.acmicpc.net/problem/10869
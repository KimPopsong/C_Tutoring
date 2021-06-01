#include <stdio.h>

int main()
{
	int a, b;
	int sum;

	printf("a의 값을 입력하세요 : ");
	scanf("%d", &a);

	printf("b의 값을 입력하세요 : ");
	scanf("%d", &b);

	sum = a + b;  // sum의 값이 a + b와 같다는 뜻이 아님. sum에 a + b라는 값을 넣어준 것

	printf("%d\n", sum);

	return 0;
}

// https://www.acmicpc.net/step/1
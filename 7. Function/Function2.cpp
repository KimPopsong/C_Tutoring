#include <stdio.h>

int Sum(int a, int b)  // a와 b의 합을 반환하는 함수. 함수 이름은 직관적으로
{
	int sum = a + b;

	return sum;
}

int main()
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	printf("num1 + num2 = %d\n", Sum(num1, num2));

	return 0;
}
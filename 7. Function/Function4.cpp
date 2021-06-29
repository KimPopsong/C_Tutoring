#include <stdio.h>

int b = 3;  // 전역 변수

void Function4()
{
	int a = 4;

	printf("Function4's a : %d\n", a);  // main 함수의 a와 Function4의 a는 다른 변수
	printf("Function4's b : %d\n", b);  // main 함수의 a와 Function4의 b는 같은 변수
}

int main()
{
	int a = 1;  // 지역 변수

	printf("main's a : %d\n", a);
	printf("main's b : %d\n", b);

	Function4();

	return 0;
}
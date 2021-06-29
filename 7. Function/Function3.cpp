#include <stdio.h>

// void Function3();  // 아래의 문제를 해결하기 위에, 맨 위에 함수의 원형 작성

int main()
{
	Function3();  // 식별 불가능

	return 0;
}

void Function3()  // main 함수보다 아래에 존재할 경우, main 함수는 Function3의 존재를 알지 못함.
{
	printf("This is Function3\n");
}
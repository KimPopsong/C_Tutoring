#include <stdio.h>

void Function1(int a)  // 반환형, 함수명, 매개 변수
{
	printf("Function1's print : %d\n", a);  // main 함수의 a와 Function1의 a는 다른 변수
}  // void 형은 반환이 없음

int Function2(int a, int b, int c)  // 매개 변수는 여러 개도 가능
{
	int sum = a + b + c;

	return sum;
}  // int 형은 반환형이 정수형

int main()
{
	int a, b, c;
	
	a = 3;
	b = 4;
	c = 5;

	Function1(a);  // int형 매개변수 한개를 넣어줌

	int sum = Function2(a, b, c);  // 반환된 int 값을 받아줄 변수

	printf("sum : %d\n", sum);

	printf("Function2's return : %d\n", Function2(a, b, c));  // 변수 없이 바로 반환된 값 사용 가능

	return 0;
}
#include <stdio.h>

int main()
{
	int a = 1, b = 2, c = 2;

	printf("관계 연산자\n");
	printf("%d\n", a > b);  // 참은 1, 거짓은 0. a가 b 초과인가
	printf("%d\n", b >= c);  // b가 c 이상인가
	printf("%d\n", a == c);  // 같은가
	printf("%d\n", b != c);  // != 같지 않은가
	printf("\n");

	printf("논리 연산자\n");
	printf("%d\n", a && b);  // and연산. a와 b가 둘다 참이면 true 리턴
	printf("%d\n", a || b);  // or연산. a와 b 둘 중 하나가 참이면 true 리턴
	printf("%d\n", !a);  // not연산. a가 거짓이면 true를, 참이면 false를 리턴

	return 0;
}
#include <stdio.h>

int main()
{
	int a;  // 정수형 타입의 변수 a
	int b, c = 3;  // 연속으로 선언 가능, 선언하며 초기화 가능
	
	a = 1;  // 초기화를 해주어야 함
	b = 2;  // b에 2를 넣는다는 뜻. 같다는 뜻이 아님
	
	printf("%d, %d, %d\n", a, b, c);  // %는 서식문자. %d는 정수형, %c는 문자형, 
	// %s는 문자열, %f는 실수형, %lf는 double형 등...
	// 출력타입 다음에 변수를 쓰면 원하는 변수 출력, ,(콤마)로 구분

	return 0;
}

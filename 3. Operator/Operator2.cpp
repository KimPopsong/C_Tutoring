#include <stdio.h>

int main()
{
	int a = 1, b = 2;

	int c, d, e, f = 0;

	c = a + b;  // c = 3
	d = a;  // d = 1
	e = b;  // e = 2
	a = a + b;  // a = 3
	b += a;  // b = a + b와 같은 뜻, b = 5
	c++;  // c를 1 증가시킨다는 뜻, 후위 연산자
	++c;  // c를 1 증가시킨다는 뜻, 전위 연산자

	printf("전위 연산자 : %d\n", ++f);  //f = 1
	f = 0;
	printf("후위 연산자 : %d\n", f++);
	printf("%d %d %d %d %d\n", a, b, c, d, e);

	return 0;
}
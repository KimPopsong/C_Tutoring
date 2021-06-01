#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;

	scanf("%d", &a);  // scanf 사용 시 &(ampersand) 사용
	scanf("%d", &b);  // &는 주소값을 의미

	printf("a = %d\nb = %d\n", a, b);  //a와 b값을 입력하여 변경시킴. b는 3으로 선언되었으나 직접 값을 넣어주어 바꿈

	return 0;
}

// https://www.acmicpc.net/problem/1000
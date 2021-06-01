#include <stdio.h>  // 헤더파일. stdio.h라는 헤더파일을 사용하겠다는 의미
// stdio.h에는 기본적인 입출력 함수가 있음
int main()  // main 함수. C언어는 항상 main함수부터 시작. main함수는 반드시 한 개만 존재해야함
{
	printf("Hello World!\n");  // printf();함수. 문장을 출력하는 함수. ""안에 문장을 쓰면 출력시켜줌. \n은 개행문자.

	return 0;  // 0을 반환. 프로그램이 정상 종료되었음을 의미하는 코드
}

// https://www.acmicpc.net/problem/2557
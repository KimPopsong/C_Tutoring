#include <stdio.h>

int main() 
{
	bool a = true;
	bool b = false;

	if (a)  // if문 안에 문장이 참이면 실행. ;(세미콜론)은 if의 끝에 붙지않음
	{
		printf("처음 if문 실행\n");
	}

	if (b)
	{
		printf("두 번째 if문 실행\n");
	}

	return 0;
}
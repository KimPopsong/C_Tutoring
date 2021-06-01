#include <stdio.h>

int main()
{
	int a = 1;
	int b = 0;
	int c = 100000;

	if (a)
	{
		printf("if a문 실행\n");

		if (b)  // if문 안에 또 if문 사용 가능
		{
			printf("if b문 실행\n");
		}

		else  // else는 if가 아닐 때 실행
		{
			printf("else b문 실행\n");
		}
	}

	else
	{
		printf("else a문 실행\n");
	}

	if (b)
	{
		printf("if b문 실행\n");
	}

	else if (c)  // if가 아니고, else if의 조건일 때 실행
	{
		printf("else if c문 실행\n");
	}

	else  // if도 아니고, else if도 아닐 때 실행
	{
		printf("else문 실행\n");
	}

	return 0;
}
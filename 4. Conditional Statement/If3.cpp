#include <stdio.h>

int main()
{
	int a = 10, d = 0;
	bool b = true, c = false;

	if (a != 10)
	{
		printf("if a != 10문 실행\n");
	}

	if (!b)
	{
		printf("if !b문 실행\n");
	}

	if (!c)
	{
		printf("if !c문 실행\n");
	}

	if (a && b)
	{
		printf("if a && b문 실행\n");
	}

	if (d || c)
	{
		printf("if d || c문 실행\n");
	}

	if (d)  // 몇 번째 문장이 실행될까?
	{
		printf("1\n");
	}

	else if (d)
	{
		printf("2\n");
	}

	else if (!a)
	{
		printf("3\n");
	}

	else if (b)
	{
		printf("4\n");
	}

	else
	{
		printf("5\n");
	}

	return 0;
}

// https://www.acmicpc.net/problem/1330
// https://www.acmicpc.net/problem/9498
// https://www.acmicpc.net/problem/2753 조금 어려움

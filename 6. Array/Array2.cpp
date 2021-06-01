#include <stdio.h>

int main()
{
	char arr1[] = { 'H', 'I' };
	char arr2[10];  // 초기화를 하지 않아도 됌

	for (int i = 0; i < sizeof(arr1); i++)  // sizeof 이용
	{
		printf("%c\n", arr1[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		char c;
		scanf(" %c", &c);  // 띄어쓰기로 버퍼 제거
		arr2[i] = c;  // 하나씩 값 넣어주기
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%c", arr2[i]);  // 하나씩 출력
	}
	printf("\n");

	return 0;
}

// https://www.acmicpc.net/step/6
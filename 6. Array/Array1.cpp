#include <stdio.h>

int main()
{
	int arr1[10] = { 0 };  // 자료형 변수명[크기]의 형식. 0으로 초기화
	int arr2[] = { 1, 2, 3, 4 };  // 크기를 지정하지 않고, 초기화시켜도 됌
	
	printf("%d\n", arr1[2]);  // arr[값]의 형식으로 원소에 접근 가능. 원소의 인덱스는 0부터 시작

	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", arr2[i]);
	}

	return 0;
}
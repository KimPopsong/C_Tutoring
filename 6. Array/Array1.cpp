#include <stdio.h>

int main()
{
	int arr1[10] = { 0 };  // �ڷ��� ������[ũ��]�� ����. 0���� �ʱ�ȭ
	int arr2[] = { 1, 2, 3, 4 };  // ũ�⸦ �������� �ʰ�, �ʱ�ȭ���ѵ� ��
	
	printf("%d\n", arr1[2]);  // arr[��]�� �������� ���ҿ� ���� ����. ������ �ε����� 0���� ����

	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", arr2[i]);
	}

	return 0;
}
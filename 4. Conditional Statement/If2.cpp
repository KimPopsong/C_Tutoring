#include <stdio.h>

int main()
{
	int a = 1;
	int b = 0;
	int c = 100000;

	if (a)
	{
		printf("if a�� ����\n");

		if (b)  // if�� �ȿ� �� if�� ��� ����
		{
			printf("if b�� ����\n");
		}

		else  // else�� if�� �ƴ� �� ����
		{
			printf("else b�� ����\n");
		}
	}

	else
	{
		printf("else a�� ����\n");
	}

	if (b)
	{
		printf("if b�� ����\n");
	}

	else if (c)  // if�� �ƴϰ�, else if�� ������ �� ����
	{
		printf("else if c�� ����\n");
	}

	else  // if�� �ƴϰ�, else if�� �ƴ� �� ����
	{
		printf("else�� ����\n");
	}

	return 0;
}
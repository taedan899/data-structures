#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i = 0, n;
	int multiply[9];

	printf("\n1부터 9까지의 정수를 입력하시오: ");

	while (1)
	{
		scanf("%d", &n);
		if (n < 0 || n > 9)
		{
			printf("1~9까지의 정수를 입력하시오.");
		}
		else
			break;

	}

	printf("\n");

	for (i = 0; i < n; i++)
	{
		multiply[i] = i * n;
		printf("\n%d * %d = %d", &n, (i + 1), multiply[i]);
	}

	getchar(); getchar();



}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long int fact(int);

void main()
{
	int n, result;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	result = fact(n);
	printf("%d의 팩토리얼 값은 %ld입니다.", n, result);
	getchar();
	getchar();


	
}

long int fact(int n)
{
	int value;

	if (n <= 1)
	{
		printf("\n fact(1)호출");
		printf("\n fact(1) 값 1 반환!");
		return 1;

	}
	else {
		printf("\n fact(%d)함수호출", n);
		value = (n * fact(n - 1));
		printf("\n fact(%d) 값 %ld 반환", n, value);
		return value;

	}


}
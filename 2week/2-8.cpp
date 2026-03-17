#include <stdio.h>

void main()
{
	int i = 10, j = 20;
	int* ptr;

	printf("\ni의 값: %d, j의값: %d", i, j);
	printf("\ni의 메모리 주소: %u", &i);
	printf("\nj의 메모리 주소: %u", &j);

	ptr = &i;
	printf("\n\n<<ptr=&i실행>>");	
	printf("\n ptr의 메모리 주소: %u", &ptr);
	printf("\n ptr의 값: %u", ptr);
	printf("\n ptr의 참조값: %d", *ptr);

	ptr = &j;

	printf("\n\n<<ptr = &j 실행>>");
	printf("\n ptr의 메모리 주소: %u", &ptr);
	printf("\n ptr의 값: %u", ptr);
	printf("\n ptr의 참조값: %d", *ptr);

	i = *ptr;

	printf("\n\n<<i = *ptr 실행>>");
	printf("\n i의 값: %d", i);

	getchar();





}
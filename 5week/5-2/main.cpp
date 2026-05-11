#include <stdio.h>
#include "StackL.h"

int main() 
{
	printf("**연결 스텍  연산**\n\n");
	element item;
	printStack();

	push(1); printStack();
	push(2); printStack();
	push(3); printStack();

	item = peek();
	printStack(); printf(" peek => %d", item);

	item = pop();
	printStack(); printf("\t  pop => %d", item);

	item = pop();
	printStack(); printf("\t  pop => %d", item);

	item = pop();
	printStack(); printf("\t  pop => %d", item);

	return 0;
}
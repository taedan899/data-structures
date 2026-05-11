#include <stdlib.h>
#include <stdio.h>
#include "StackL.h"

StackNode* top = NULL;

int isStackEmpty() {
	if (top == NULL)
		return 1;
	else
		return 0;
}
void push(element item)
{
	StackNode* temp = (StackNode*)malloc(sizeof(StackNode));
	temp->data = item;
	temp->link = top;
	top = temp;

}

element pop() {
	element item;
	StackNode* temp;

	if (isStackEmpty())
	{
		printf("Stack is empty");
		return 0;

	}

	else {
		temp = top;
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
}

element peek() {
	if (isStackEmpty())
	{
		printf("Stack is empty");
		return 0;

	}
	else
	{
		return(top->data);
	}

}

void printStack() {
	StackNode* p = top;
	printf("\n[");

	while (p)
	{
		printf(" %d",p->data);
		p = p->link;
	}
	printf(" ]");

}
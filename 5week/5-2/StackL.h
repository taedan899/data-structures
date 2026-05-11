#pragma once

typedef int element;

typedef struct StackNode {
	element data;
	struct StackNode* link;
}StackNode;

int isStackEmpty();
void push(element item);
element pop();
element peek();
void printStack();
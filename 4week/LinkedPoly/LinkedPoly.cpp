#include <stdio.h>
#include "LinkedPoly.h"
#include <stdlib.h>

ListHead* createLinkedList(void) {
	ListHead* L;
	L = (ListHead*)malloc(sizeof(ListHead));
	L->head = NULL;
	return L;

}

void appendTerm(ListHead* L, float coef, int expo) {
	ListNode* newNode;
	ListNode* p;
	newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->coef = coef;
	newNode->expo = expo;
	newNode->link = NULL;

	if (L->head == NULL)
	{
		L->head = newNode;
		return;
	}
	else
	{
		p = L->head;
		while (p->link != NULL)
		{
			p = p->link;
		}

		p->link = newNode;
	}

}

void addPoly(ListHead* A, ListHead* B, ListHead* C)
{
	ListNode* pA = A->head;
	ListNode* pB = B->head;
	float sum;

	while (pA && pB) {
		if (pA->expo > pB->expo)
		{
			appendTerm(C, pA->coef, pA->expo);
			pA = pA->link;

		}

		else if (pA->expo < pB->expo)
		{
			appendTerm(C, pB->coef, pB->expo);
			pB = pB->link;


		}

		else
		{	
			sum = pA->coef + pB->coef;
			appendTerm(C,sum, pB->expo);
			pB = pB->link;
			pA = pA->link;

		}

	}
	while (pA != NULL)
	{
		appendTerm(C, pA->coef, pA->expo);
		pA = pA->link;

	}


	while (pB != NULL)
	{
		appendTerm(C, pB->coef, pB->expo);
		pB = pB->link;

	}

}

void printPoly(ListHead* L)
{
	ListNode* p;
	p = L->head;
	while (p !=  NULL)
	{
		printf("%3.0fx%d", p->coef, p->expo);
		
		if (p->link != NULL)
		{
			printf(" + ");
		}

		p = p->link;

	}

}

#include "stdafx.h"

/*
  返回带头节点的空链表
*/
SNode * initSLinked()
{
	SNode *head = (SNode *)malloc(sizeof(SNode));
	head->data = -250;
	head->next = NULL;
	return head;
}

void insertSLinked(SNode *head, SNode node)
{

}
#include "stdafx.h"

/*
  ���ش�ͷ�ڵ�Ŀ�����
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
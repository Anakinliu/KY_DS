#pragma once
/*
  �������Ա�Ľṹ��
*/

// ������
typedef struct SNode
{
	int data;
	struct SNode *next;
}SNode;


// ˫����
typedef struct DNode
{
	int data;
	struct DNode *next;
	struct DNode *prior;
}DNode;


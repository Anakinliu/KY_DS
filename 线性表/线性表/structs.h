#pragma once
/*
  定义线性表的结构体
*/

// 单链表
typedef struct SNode
{
	int data;
	struct SNode *next;
}SNode;


// 双链表
typedef struct DNode
{
	int data;
	struct DNode *next;
	struct DNode *prior;
}DNode;


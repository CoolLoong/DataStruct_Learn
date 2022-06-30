#ifndef LINK_STACK
#define LINK_STACK
#include "common.h"
typedef struct StackNode {
	ElemType data;
	struct StackNode* next;
}StackNode, * LinkStack;

Status InitStack(LinkStack& S);
Status DestroyStack(LinkStack& S);
bool StackEmpty(LinkStack S);
int StackLength(LinkStack S);
ElemType GetTop(LinkStack S);
Status Push(LinkStack& S, ElemType e);
Status Pop(LinkStack& S, ElemType& e);
Status StackTraverse(LinkStack S);
#endif
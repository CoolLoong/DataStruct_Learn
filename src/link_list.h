#ifndef LINK_LIST
#define LINK_LIST
#include "common.h"
typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LNode, * LinkList;

/*
	初始化链表
	传入一个头指针引用,生成一个头节点,使得头指针指向头节点
	头节点next指向空
*/
Status InitList(LinkList &L);
Status DestroyList(LinkList& L);
Status ClearEmpty(LinkList& L);
bool ListEmpty(LinkList L);
int ListLength(LinkList L);
Status GetElem(LinkList L, ElemType i, ElemType& e);
int LocateElem(LinkList L, ElemType e);
Status PriorElem(LinkList L, ElemType cur_e, LinkList& pre_e);
Status NextElem(LinkList L, ElemType cur_e, LinkList& next_e);
Status ListInsert(LinkList& L, ElemType i, ElemType e);
Status ListDelete(LinkList& L, ElemType i);
Status TraverseList(LinkList L);
#endif
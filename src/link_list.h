#ifndef LINK_LIST
#define LINK_LIST
#include "common.h"
typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LNode, * LinkList;

/*
	��ʼ������
	����һ��ͷָ������,����һ��ͷ�ڵ�,ʹ��ͷָ��ָ��ͷ�ڵ�
	ͷ�ڵ�nextָ���
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
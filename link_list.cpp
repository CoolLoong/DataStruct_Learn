#ifndef LINK_LIST
#include "link_list.h"
#endif


Status InitList(LinkList& L){
	L = new LNode;
	L->next = nullptr;
	return OK;
}

Status DestroyList(LinkList& L){
	if (L != nullptr) {
		delete L;
		return OK;
	}
	else return ERROR;
}

Status ClearEmpty(LinkList& L){
	if (DestroyList(L)) {
		InitList(L);
		return OK;
	}
	else return ERROR;
}

bool ListEmpty(LinkList L){
	return L->next == nullptr ? true : false;
}

int ListLength(LinkList L){
	int i = 0;
	while (L->next) {
		L = L->next;
		++i;
	}
	return i;
}

Status GetElem(LinkList L, ElemType i, ElemType& e){
	int j = 0;
	while (L->next && j < i) {
		L = L->next;
		++j;
	}
	if (j!=i) return ERROR;
	e = L->data;
	return OK;
}

int LocateElem(LinkList L, ElemType e){
	return 0;
}

Status PriorElem(LinkList L, ElemType cur_e, ElemType& e){
	return Status();
}

Status NextElem(LinkList L, ElemType cur_e, ElemType& e){
	return Status();
}

Status ListInsert(LinkList& L, ElemType i, ElemType e){
	LinkList p = L;
	int j = 0;
	while (p!=nullptr && j<i-1) {
		p = p->next;
		++j;
	}
	if (p == nullptr || j>i-1) return ERROR;
	LinkList s = new LNode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}

Status ListDelete(LinkList& L, ElemType i){
	LinkList p = L;
	int j = 0;
	while (p != nullptr && j < i - 1) {
		p = p->next;
		++j;
	}
	if (p==nullptr || j > i - 1) return ERROR;
	LinkList q = p->next;
	p->next = q->next;
	delete q;
	return OK;
}

Status TraverseList(LinkList L){
	if (L != nullptr) {
		L = L->next;
		while (1) {
			if (L != nullptr) std::cout << L->data << " ";
			else break;
			L = L->next;
		}
		return OK;
	}
	else return ERROR;
}

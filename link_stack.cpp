#ifndef LINK_STACK
#include "link_stack.h"
#endif

Status InitStack(LinkStack& S) {
	S = nullptr;
	return OK;
}

Status DestroyStack(LinkStack& S) {
	int i = 0;
	while (!StackEmpty(S)) {
		LinkStack p = S;
		S = S->next;
		delete p;
		p = nullptr;
		++i;
	}
	return i <= 0 ? ERROR : OK;;
}

bool StackEmpty(LinkStack S) {
	return S == nullptr ? true : false;
}

int StackLength(LinkStack S) {
	int i = 0;
	while (!StackEmpty(S)) {
		S = S->next;
		++i;
	}
	return i;
}

ElemType GetTop(LinkStack S) {
	if (!StackEmpty(S)) {
		return S->data;
	}
	else return YWM_UNDERFLOW;
}

Status Push(LinkStack& S, ElemType e) {
	LinkStack p = new(std::nothrow) StackNode;
	if (p == nullptr) exit(RAM_OVERFLOW);
	p->data = e;
	p->next = S;
	S = p;
	return OK;
}

Status Pop(LinkStack& S, ElemType& e) {
	if (StackEmpty(S)) return YWM_UNDERFLOW;
	e = S->data;
	LinkStack p = S;
	S = S->next;
	delete p;
	p = nullptr;
	return OK;
}

Status StackTraverse(LinkStack S) {
	int i = 0;
	while (!StackEmpty(S)) {
		std::cout << S->data << " ";
		S = S->next;
		++i;
	}
	return i <= 0 ? ERROR : OK;
}

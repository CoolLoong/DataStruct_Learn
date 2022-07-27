#ifndef LINK_STACK
#include "link_stack.h"
#endif

Status InitStack(LinkStack& S) {
	S = nullptr;//栈顶指针置空
	return OK;
}

Status DestroyStack(LinkStack& S) {
	int i = 0;
	while (!StackEmpty(S)) {//若栈非空
		LinkStack p = S;//保留当前栈顶指针
		S = S->next;//指向栈顶下一个节点
		delete p;//删除当前栈顶节点
		p = nullptr;
		++i;//记录已删除的节点数
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
	LinkStack p = new(std::nothrow) StackNode;//新建一个栈节点
	if (p == nullptr) exit(RAM_OVERFLOW);
	p->data = e;//给当前节点赋值
	p->next = S;//当前节点指向原始栈顶
	S = p;//替代它变为新栈顶
	return OK;
}

Status Pop(LinkStack& S, ElemType& e) {
	if (StackEmpty(S)) return YWM_UNDERFLOW;
	e = S->data;//当前栈顶元素
	LinkStack p = S;//暂存栈顶指针
	S = S->next;//栈顶指针指向下一个节点
	delete p;//释放栈顶指针
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

#ifndef LINK_STACK
#include "link_stack.h"
#endif

Status InitStack(LinkStack& S) {
	S = nullptr;//ջ��ָ���ÿ�
	return OK;
}

Status DestroyStack(LinkStack& S) {
	int i = 0;
	while (!StackEmpty(S)) {//��ջ�ǿ�
		LinkStack p = S;//������ǰջ��ָ��
		S = S->next;//ָ��ջ����һ���ڵ�
		delete p;//ɾ����ǰջ���ڵ�
		p = nullptr;
		++i;//��¼��ɾ���Ľڵ���
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
	LinkStack p = new(std::nothrow) StackNode;//�½�һ��ջ�ڵ�
	if (p == nullptr) exit(RAM_OVERFLOW);
	p->data = e;//����ǰ�ڵ㸳ֵ
	p->next = S;//��ǰ�ڵ�ָ��ԭʼջ��
	S = p;//�������Ϊ��ջ��
	return OK;
}

Status Pop(LinkStack& S, ElemType& e) {
	if (StackEmpty(S)) return YWM_UNDERFLOW;
	e = S->data;//��ǰջ��Ԫ��
	LinkStack p = S;//�ݴ�ջ��ָ��
	S = S->next;//ջ��ָ��ָ����һ���ڵ�
	delete p;//�ͷ�ջ��ָ��
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

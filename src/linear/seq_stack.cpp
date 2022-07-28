#ifndef SEQ_STACK
#include "seq_stack.h"
#endif

Status InitStack(SqStack& S){
	S.stacksize = MAXSIZE;
	S.base = new(std::nothrow) ElemType[MAXSIZE];//��baseָ�����ռ���������Ԫ��
	if (S.base == nullptr) exit(RAM_OVERFLOW);//�ڴ治���ж�
	S.top = S.base;//��ʼ��ջ��ָ��ָ��ջ��
	return OK;
}

Status DestroyStack(SqStack& S){
	if (S.base != nullptr) {//ջ�ǿ�
		S.stacksize = 0;
		delete[] S.base;//�ͷſռ�
		S.base = nullptr;
		S.top = nullptr;
		return OK;
	}
	else return ERROR;
}

Status ClearStack(SqStack& S){
	if (DestroyStack(S)) {
		InitStack(S);
		return OK;
	}
	else return ERROR;
}

bool StackEmpty(SqStack S){
	if (S.base != nullptr) {
		return S.base == S.top ? true : false;
	}
	else return false;
}

int StackLength(SqStack S) {
	if (S.base != nullptr) {
		return (int)(S.top - S.base);//���ڷ�����������Ĵ洢�ռ�,����ջ��ָ����ջ��ָ��ĵ�ַ��ֵ����ջ�ĳ���
	}
	else return ERROR;
}

ElemType GetTop(SqStack S){
	if (!StackEmpty(S)) {//��ջ�ǿ�
		return *--S.top;//
	}
	else return ERROR;
}

Status Push(SqStack& S, ElemType e){
	if (S.base != nullptr) {
		if (StackLength(S) == S.stacksize) return YWM_OVERFLOW;
		*S.top++ = e;//��ֵ��S.top,����ַ+1
		return OK;
	}
	else return ERROR;
}

Status Pop(SqStack& S, ElemType& e){
	if (S.base != nullptr) {
		if (!StackLength(S)) return YWM_UNDERFLOW;
		e = *--S.top;//�Ƚ�S.top��ַ��1,ȡֵ����e
		return OK;
	}
	else return ERROR;
}

Status StackTraverse(SqStack S){
	if (S.base != nullptr) {
		while (!StackEmpty(S)) {
			std::cout << GetTop(S) << " ";
			S.top--;
		}
		return OK;
	}
	else return ERROR;
}

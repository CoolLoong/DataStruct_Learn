#ifndef SEQ_STACK
#include "seq_stack.h"
#endif

Status InitStack(SqStack& S){
	S.stacksize = MAXSIZE;
	S.base = new(std::nothrow) ElemType[MAXSIZE];//给base指针分配空间用于容纳元素
	if (S.base == nullptr) exit(RAM_OVERFLOW);//内存不足中断
	S.top = S.base;//初始化栈顶指针指向栈底
	return OK;
}

Status DestroyStack(SqStack& S){
	if (S.base != nullptr) {//栈非空
		S.stacksize = 0;
		delete[] S.base;//释放空间
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
		return (int)(S.top - S.base);//由于分配的是连续的存储空间,所以栈顶指针与栈底指针的地址差值等于栈的长度
	}
	else return ERROR;
}

ElemType GetTop(SqStack S){
	if (!StackEmpty(S)) {//若栈非空
		return *--S.top;//
	}
	else return ERROR;
}

Status Push(SqStack& S, ElemType e){
	if (S.base != nullptr) {
		if (StackLength(S) == S.stacksize) return YWM_OVERFLOW;
		*S.top++ = e;//赋值给S.top,随后地址+1
		return OK;
	}
	else return ERROR;
}

Status Pop(SqStack& S, ElemType& e){
	if (S.base != nullptr) {
		if (!StackLength(S)) return YWM_UNDERFLOW;
		e = *--S.top;//先将S.top地址减1,取值赋给e
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

#ifndef SEQ_STACK
#define SEQ_STACK
#include "seq_list.h"
typedef struct {
	ElemType* base;//储存栈中的元素(一段连续的存储空间)base指向空间基地址，也就是栈底
	ElemType* top;//指向栈顶,当*top==*base时栈空,为stack_size-1表示满栈
	int stacksize;//栈的最大容量
}SqStack;

Status InitStack(SqStack& S);
Status DestroyStack(SqStack& S);
Status ClearStack(SqStack& S);
bool StackEmpty(SqStack S);
int StackLength(SqStack S);
ElemType GetTop(SqStack S);
Status Push(SqStack& S,ElemType e);
Status Pop(SqStack& S,ElemType& e);
Status StackTraverse(SqStack S);
#endif


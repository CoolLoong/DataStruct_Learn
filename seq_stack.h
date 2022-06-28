#ifndef SEQ_STACK
#define SEQ_STACK
#include "seq_list.h"
typedef struct {
	ElemType* base;//����ջ�е�Ԫ��(һ�������Ĵ洢�ռ�)baseָ��ռ����ַ��Ҳ����ջ��
	ElemType* top;//ָ��ջ��,��*top==*baseʱջ��,Ϊstack_size-1��ʾ��ջ
	int stacksize;//ջ���������
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


#ifndef SEQ_STACK
#define SEQ_STACK
#include "../common.h"
typedef struct {
	ElemType* base;//����ջ�е�Ԫ��(һ�������Ĵ洢�ռ�)baseָ��ռ����ַ��Ҳ����ջ��
	ElemType* top;//ָ��ջ�����һ��Ԫ�صĺ�һ��Ԫ��,��*top==*baseʱջ��,Ϊstack_size-1��ʾ��ջ
	int stacksize;//ջ���������
}SqStack;
/// <summary>
/// ��ʼ��ջ(�����ʼ�ռ�)
/// </summary>
/// <param name="S">SqStackջ������</param>
/// <returns>ִ��״̬��</returns>
Status InitStack(SqStack& S);
/// <summary>
/// ����ջ������ָ��
/// </summary>
/// <param name="S">SqStackջ������</param>
/// <returns>ִ��״̬��</returns>
Status DestroyStack(SqStack& S);
/// <summary>
/// ���ջ
/// </summary>
/// <param name="S">SqStackջ������</param>
/// <returns>ִ��״̬��</returns>
Status ClearStack(SqStack& S);
/// <summary>
/// �ж�ջ�Ƿ�Ϊ��
/// </summary>
/// <param name="S">SqStackջ</param>
/// <returns>ջ�Ƿ�Ϊ��</returns>
bool StackEmpty(SqStack S);
/// <summary>
/// ջ�ĳ���
/// </summary>
/// <param name="S">SqStackջ</param>
/// <returns>ջ�ĳ���</returns>
int StackLength(SqStack S);
/// <summary>
/// ��ȡջ��Ԫ��
/// </summary>
/// <param name="S">SqStackջ</param>
/// <returns>Ԫ�ص�ֵ</returns>
ElemType GetTop(SqStack S);
/// <summary>
/// ��Ԫ����ջ
/// </summary>
/// <param name="S">SqStackջ����</param>
/// <param name="e">��ջԪ��</param>
/// <returns>ִ��״̬��</returns>
Status Push(SqStack& S, ElemType e);
/// <summary>
/// �Ƴ�ջ��Ԫ��
/// </summary>
/// <param name="S">SqStackջ����</param>
/// <param name="e">����Ԫ�ؽ��������</param>
/// <returns>ִ��״̬��</returns>
Status Pop(SqStack& S, ElemType& e);
/// <summary>
/// ����ջ(��ջ����ջ��)
/// </summary>
/// <param name="S">SqStackջ</param>
/// <returns>ִ��״̬��</returns>
Status StackTraverse(SqStack S);
#endif


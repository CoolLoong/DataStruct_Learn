#ifndef LINK_STACK
#define LINK_STACK
#include "../common.h"
/// <summary>
/// ջ�Ľڵ�
/// </summary>
typedef struct StackNode {
	ElemType data;//���ڱ���Ԫ��
	struct StackNode* next;//����ָ����һ���ڵ�
}StackNode, * LinkStack;//ջ��ָ��
/// <summary>
/// ��ʼ��ջ(�����ʼ�ռ�)
/// </summary>
/// <param name="S">LinkStackջ������</param>
/// <returns>ִ��״̬��</returns>
Status InitStack(LinkStack& S);
/// <summary>
/// ����ջ������ָ��
/// </summary>
/// <param name="S">LinkStackջ������</param>
/// <returns>ִ��״̬��</returns>
Status DestroyStack(LinkStack& S);
/// <summary>
/// �ж�ջ�Ƿ�Ϊ��
/// </summary>
/// <param name="S">LinkStackջ</param>
/// <returns>ջ�Ƿ�Ϊ��</returns>
bool StackEmpty(LinkStack S);
/// <summary>
/// ջ�ĳ���
/// </summary>
/// <param name="S">LinkStackջ</param>
/// <returns>ջ�ĳ���</returns>
int StackLength(LinkStack S);
/// <summary>
/// ��ȡջ��Ԫ��
/// </summary>
/// <param name="S">LinkStackջ</param>
/// <returns>Ԫ�ص�ֵ</returns>
ElemType GetTop(LinkStack S);
/// <summary>
/// ��Ԫ����ջ
/// </summary>
/// <param name="S">LinkStackջ����</param>
/// <param name="e">��ջԪ��</param>
/// <returns>ִ��״̬��</returns>
Status Push(LinkStack& S, ElemType e);
/// <summary>
/// �Ƴ�ջ��Ԫ��
/// </summary>
/// <param name="S">LinkStackջ����</param>
/// <param name="e">����Ԫ�ؽ��������</param>
/// <returns>ִ��״̬��</returns>
Status Pop(LinkStack& S, ElemType& e);
/// <summary>
/// ����ջ(��ջ����ջ��)
/// </summary>
/// <param name="S">LinkStackջ</param>
/// <returns>ִ��״̬��</returns>
Status StackTraverse(LinkStack S);
#endif
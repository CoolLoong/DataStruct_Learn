#ifndef LINK_LIST
#define LINK_LIST
#include "../common.h"
typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LNode, * LinkList;

/// <summary>
/// ��ʼ������
/// </summary>
/// <param name="L">LinkListͷָ������</param>
/// <returns>ִ��״̬��</returns>
Status InitList(LinkList& L);
/// <summary>
/// ��������
/// </summary>
/// <param name="L">LinkListͷָ������</param>
/// <returns>ִ��״̬��</returns>
Status DestroyList(LinkList& L);
/// <summary>
/// �������
/// </summary>
/// <param name="L">LinkListͷָ������</param>
/// <returns>ִ��״̬��</returns>
Status ClearEmpty(LinkList& L);
/// <summary>
/// �ж������Ƿ�Ϊ��
/// </summary>
/// <param name="L">LinkListͷָ��</param>
/// <returns>�����Ƿ�Ϊ��</returns>
bool ListEmpty(LinkList L);
/// <summary>
/// ��ȡ����ĳ���
/// </summary>
/// <param name="L">LinkListͷָ��</param>
/// <returns>����ĳ���</returns>
int ListLength(LinkList L);
/// <summary>
/// ��ȡ����ָ��λ�õ�Ԫ��
/// </summary>
/// <param name="L">LinkListͷָ��</param>
/// <param name="i">λ������(1-length)</param>
/// <param name="e">��������Ԫ������</param>
/// <returns>ִ��״̬��</returns>
Status GetElem(LinkList L, ElemType i, ElemType& e);
/// <summary>
/// ��ȡ����ָ��Ԫ�ص�λ��
/// </summary>
/// <param name="L">LinkListͷָ��</param>
/// <param name="e">����ѯ��Ԫ��</param>
/// <returns>��Ԫ�����ڵ�����(1-length)</returns>
int LocateElem(LinkList L, ElemType e);
/// <summary>
/// ��ȡ����ָ��Ԫ�ص�ǰ��Ԫ��
/// </summary>
/// <param name="L">LinkListͷָ��</param>
/// <param name="cur_e">����ѯ��Ԫ��</param>
/// <param name="pre_e">����ǰ��Ԫ�ص�Ԫ������</param>
/// <returns>ִ��״̬��</returns>
Status PriorElem(LinkList L, ElemType cur_e, LinkList& pre_e);
/// <summary>
/// ��ȡ����ָ��Ԫ�صĺ��Ԫ��
/// </summary>
/// <param name="L">LinkListͷָ��</param>
/// <param name="cur_e">����ѯ��Ԫ��</param>
/// <param name="next_e">������Ԫ�ص�Ԫ������</param>
/// <returns>ִ��״̬��</returns>
Status NextElem(LinkList L, ElemType cur_e, LinkList& next_e);
/// <summary>
/// ����ָ��Ԫ�ص�ָ��λ��
/// </summary>
/// <param name="L">LinkListͷָ������</param>
/// <param name="i">����Ԫ�ص�λ��</param>
/// <param name="e">�������Ԫ��</param>
/// <returns>ִ��״̬��</returns>
Status ListInsert(LinkList& L, ElemType i, ElemType e);
/// <summary>
/// ɾ��ָ��λ�õ�Ԫ��
/// </summary>
/// <param name="L">LinkListͷָ������</param>
/// <param name="i">��ɾ��Ԫ�ص�λ������</param>
/// <returns>ִ��״̬��</returns>
Status ListDelete(LinkList& L, ElemType i);
/// <summary>
/// ˳����������������
/// </summary>
/// <param name="L">LinkListͷָ��</param>
/// <returns>ִ��״̬��</returns>
Status TraverseList(LinkList L);
#endif
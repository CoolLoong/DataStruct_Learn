#ifndef SEQ_LIST
#define SEQ_LIST
#include "../common.h"

typedef struct {
	ElemType* elem;//�洢�ռ�Ļ���ַ
	int length;//���Ա���
}SqList;

/// <summary>
/// ��ʼ�����Ա�
/// </summary>
/// <param name="L">SqList�ṹ������</param>
/// <returns>ִ��״̬��</returns>
Status InitList(SqList& L);
/// <summary>
/// �������Ա�
/// </summary>
/// <param name="L">SqList�ṹ������</param>
/// <returns>ִ��״̬��</returns>
Status DestroyList(SqList& L);
/// <summary>
/// ������Ա�
/// </summary>
/// <param name="L">SqList�ṹ������</param>
/// <returns>ִ��״̬��</returns>
Status ClearEmpty(SqList& L);
/// <summary>
/// �ж����Ա��Ƿ�Ϊ��
/// </summary>
/// <param name="L">SqList�ṹ��</param>
/// <returns>���Ա��Ƿ�Ϊ��</returns>
bool ListEmpty(SqList L);
/// <summary>
/// ��ȡ���Ա�ĳ���
/// </summary>
/// <param name="L">SqList�ṹ��</param>
/// <returns>���Ա�ĳ���</returns>
int ListLength(SqList L);
/// <summary>
/// ��ȡ���Ա�ָ��λ�õ�Ԫ��
/// </summary>
/// <param name="L">SqList�ṹ��</param>
/// <param name="i">λ������(1-length)</param>
/// <param name="e">��������Ԫ������</param>
/// <returns>ִ��״̬��</returns>
Status GetElem(SqList L, ElemType i, ElemType& e);
/// <summary>
/// ��ȡ���Ա�ָ��Ԫ�ص�λ��
/// </summary>
/// <param name="L">SqList�ṹ��</param>
/// <param name="e">����ѯ��Ԫ��</param>
/// <returns>��Ԫ�����ڵ�����(1-length)</returns>
int LocateElem(SqList L, ElemType e);
/// <summary>
/// ��ȡ���Ա�ָ��Ԫ�ص�ǰ��Ԫ��
/// </summary>
/// <param name="L">SqList�ṹ��</param>
/// <param name="cur_e">����ѯ��Ԫ��</param>
/// <param name="pre_e">����ǰ��Ԫ�ص�Ԫ������</param>
/// <returns>ִ��״̬��</returns>
Status PriorElem(SqList L, ElemType cur_e, ElemType& pre_e);
/// <summary>
/// ��ȡ���Ա�ָ��Ԫ�صĺ��Ԫ��
/// </summary>
/// <param name="L">SqList�ṹ��</param>
/// <param name="cur_e">����ѯ��Ԫ��</param>
/// <param name="next_e">������Ԫ�ص�Ԫ������</param>
/// <returns>ִ��״̬��</returns>
Status NextElem(SqList L, ElemType cur_e, ElemType& next_e);
/// <summary>
/// ����ָ��Ԫ�ص�ָ��λ��
/// </summary>
/// <param name="L">SqList�ṹ������</param>
/// <param name="i">����Ԫ�ص�λ��</param>
/// <param name="e">�������Ԫ��</param>
/// <returns>ִ��״̬��</returns>
Status ListInsert(SqList& L, ElemType i, ElemType e);
/// <summary>
/// ɾ��ָ��λ�õ�Ԫ��
/// </summary>
/// <param name="L">SqList�ṹ������</param>
/// <param name="i">��ɾ��Ԫ�ص�λ������</param>
/// <returns>ִ��״̬��</returns>
Status ListDelete(SqList& L, ElemType i);
/// <summary>
/// ˳������������Ա����
/// </summary>
/// <param name="L">SqList�ṹ��</param>
/// <returns>ִ��״̬��</returns>
Status TraverseList(SqList L);

#endif

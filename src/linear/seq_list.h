#ifndef SEQ_LIST
#define SEQ_LIST
#include "../common.h"

typedef struct {
	ElemType* elem;//�洢�ռ�Ļ���ַ
	int length;//���Ա���
}SqList;

/*
��ʼ�����Ա�
����: SqList�ṹ������
����ֵ: ִ��״̬��
*/
Status InitList(SqList& L);
/*
�������Ա�
����: SqList�ṹ������
����ֵ: ִ��״̬��
*/
Status DestroyList(SqList& L);
/*
������Ա�
����: SqList�ṹ������
����ֵ: ִ��״̬��
*/
Status ClearEmpty(SqList& L);
/*
�ж����Ա��Ƿ�Ϊ��
����: SqList�ṹ��
����ֵ: ���Ա��Ƿ�Ϊ��
*/
bool ListEmpty(SqList L);
/*
��ȡ���Ա�ĳ���
����: SqList�ṹ��
����ֵ: ���Ա�ĳ���
*/
int ListLength(SqList L);

/*
��ȡ���Ա�ָ��λ�õ�Ԫ��
����: SqList�ṹ�� λ������(1-length) ��������Ԫ������
����ֵ: ִ��״̬��
*/
Status GetElem(SqList L, ElemType i, ElemType& e);
/*
��ȡ���Ա�ָ��Ԫ�ص�λ��
����: SqList�ṹ�� ����ѯ��Ԫ��
����ֵ: ��Ԫ�����ڵ�����(1-length)
*/
int LocateElem(SqList L, ElemType e);
/*
��ȡ���Ա�ָ��Ԫ�ص�ǰ��Ԫ��
����: SqList�ṹ�� ����ѯ��Ԫ�� ����ǰ��Ԫ�ص�Ԫ������
����ֵ: ִ��״̬��
*/
Status PriorElem(SqList L, ElemType cur_e, ElemType& pre_e);
/*
��ȡ���Ա�ָ��Ԫ�صĺ��Ԫ��
����: SqList�ṹ�� ����ѯ��Ԫ�� ������Ԫ�ص�Ԫ������
����ֵ: ִ��״̬��
*/
Status NextElem(SqList L, ElemType cur_e, ElemType& next_e);
/*
����ָ��Ԫ�ص�ָ��λ��
����: SqList�ṹ������ ����Ԫ�ص�λ�� �������Ԫ��
����ֵ: ִ��״̬��
*/
Status ListInsert(SqList& L, ElemType i, ElemType e);
/*
ɾ��ָ��λ�õ�Ԫ��
����: SqList�ṹ������ ��ɾ��Ԫ�ص�λ������
����ֵ: ִ��״̬��
*/
Status ListDelete(SqList& L, ElemType i);
/*
�����������Ա����
����: SqList�ṹ��
����ֵ: ִ��״̬��
*/
Status TraverseList(SqList L);

#endif

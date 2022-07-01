#ifndef SEQ_LIST
#define SEQ_LIST
#include "../common.h"
typedef struct{
	ElemType* elem;//�洢�ռ�Ļ���ַ
	int length;//���Ա���
}SqList;

Status InitList(SqList& L);
Status DestroyList(SqList& L);
Status ClearEmpty(SqList& L);
bool ListEmpty(SqList L);
int ListLength(SqList L);
//i��ȡֵ��Χ��(1-length)
Status GetElem(SqList L, ElemType i, ElemType& e);
//����ֵ��1-length
int LocateElem(SqList L, ElemType e);
Status PriorElem(SqList L, ElemType cur_e, ElemType& pre_e);
Status NextElem(SqList L, ElemType cur_e, ElemType& next_e);
Status ListInsert(SqList& L, ElemType i,ElemType e);
Status ListDelete(SqList& L, ElemType i);
Status TraverseList(SqList L);

#endif

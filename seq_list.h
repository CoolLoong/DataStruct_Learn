#ifndef SEQ_LIST
#define SEQ_LIST
#define OK 1
#define ERROR 0
#define YWM_UNDERFLOW -1
#define YWM_OVERFLOW -2
#define MAXSIZE 100
#include <iostream>

typedef int Status;
typedef int ElemType;
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
Status PriorElem(SqList L, ElemType cur_e, ElemType& e);
Status NextElem(SqList L, ElemType cur_e, ElemType& e);
Status ListInsert(SqList& L, ElemType i,ElemType e);
Status ListDelete(SqList& L, ElemType i);
Status TraverseList(SqList L);


#endif

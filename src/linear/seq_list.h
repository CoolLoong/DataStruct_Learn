#ifndef SEQ_LIST
#define SEQ_LIST
#include "../common.h"
typedef struct{
	ElemType* elem;//存储空间的基地址
	int length;//线性表长度
}SqList;

Status InitList(SqList& L);
Status DestroyList(SqList& L);
Status ClearEmpty(SqList& L);
bool ListEmpty(SqList L);
int ListLength(SqList L);
//i的取值范围在(1-length)
Status GetElem(SqList L, ElemType i, ElemType& e);
//返回值从1-length
int LocateElem(SqList L, ElemType e);
Status PriorElem(SqList L, ElemType cur_e, ElemType& pre_e);
Status NextElem(SqList L, ElemType cur_e, ElemType& next_e);
Status ListInsert(SqList& L, ElemType i,ElemType e);
Status ListDelete(SqList& L, ElemType i);
Status TraverseList(SqList L);

#endif

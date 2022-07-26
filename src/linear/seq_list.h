#ifndef SEQ_LIST
#define SEQ_LIST
#include "../common.h"

typedef struct {
	ElemType* elem;//存储空间的基地址
	int length;//线性表长度
}SqList;

/*
初始化线性表
参数: SqList结构体引用
返回值: 执行状态码
*/
Status InitList(SqList& L);
/*
销毁线性表
参数: SqList结构体引用
返回值: 执行状态码
*/
Status DestroyList(SqList& L);
/*
清空线性表
参数: SqList结构体引用
返回值: 执行状态码
*/
Status ClearEmpty(SqList& L);
/*
判断线性表是否为空
参数: SqList结构体
返回值: 线性表是否为空
*/
bool ListEmpty(SqList L);
/*
获取线性表的长度
参数: SqList结构体
返回值: 线性表的长度
*/
int ListLength(SqList L);

/*
获取线性表指定位置的元素
参数: SqList结构体 位置索引(1-length) 保存结果的元素引用
返回值: 执行状态码
*/
Status GetElem(SqList L, ElemType i, ElemType& e);
/*
获取线性表指定元素的位置
参数: SqList结构体 待查询的元素
返回值: 该元素所在的索引(1-length)
*/
int LocateElem(SqList L, ElemType e);
/*
获取线性表指定元素的前驱元素
参数: SqList结构体 待查询的元素 保存前驱元素的元素引用
返回值: 执行状态码
*/
Status PriorElem(SqList L, ElemType cur_e, ElemType& pre_e);
/*
获取线性表指定元素的后继元素
参数: SqList结构体 待查询的元素 保存后继元素的元素引用
返回值: 执行状态码
*/
Status NextElem(SqList L, ElemType cur_e, ElemType& next_e);
/*
插入指定元素到指定位置
参数: SqList结构体引用 插入元素的位置 待插入的元素
返回值: 执行状态码
*/
Status ListInsert(SqList& L, ElemType i, ElemType e);
/*
删除指定位置的元素
参数: SqList结构体引用 待删除元素的位置索引
返回值: 执行状态码
*/
Status ListDelete(SqList& L, ElemType i);
/*
遍历整个线性表并输出
参数: SqList结构体
返回值: 执行状态码
*/
Status TraverseList(SqList L);

#endif

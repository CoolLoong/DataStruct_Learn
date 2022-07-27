#ifndef SEQ_LIST
#define SEQ_LIST
#include "../common.h"

typedef struct {
	ElemType* elem;//存储空间的基地址
	int length;//线性表长度
}SqList;

/// <summary>
/// 初始化线性表
/// </summary>
/// <param name="L">SqList结构体引用</param>
/// <returns>执行状态码</returns>
Status InitList(SqList& L);
/// <summary>
/// 销毁线性表
/// </summary>
/// <param name="L">SqList结构体引用</param>
/// <returns>执行状态码</returns>
Status DestroyList(SqList& L);
/// <summary>
/// 清空线性表
/// </summary>
/// <param name="L">SqList结构体引用</param>
/// <returns>执行状态码</returns>
Status ClearEmpty(SqList& L);
/// <summary>
/// 判断线性表是否为空
/// </summary>
/// <param name="L">SqList结构体</param>
/// <returns>线性表是否为空</returns>
bool ListEmpty(SqList L);
/// <summary>
/// 获取线性表的长度
/// </summary>
/// <param name="L">SqList结构体</param>
/// <returns>线性表的长度</returns>
int ListLength(SqList L);
/// <summary>
/// 获取线性表指定位置的元素
/// </summary>
/// <param name="L">SqList结构体</param>
/// <param name="i">位置索引(1-length)</param>
/// <param name="e">保存结果的元素引用</param>
/// <returns>执行状态码</returns>
Status GetElem(SqList L, ElemType i, ElemType& e);
/// <summary>
/// 获取线性表指定元素的位置
/// </summary>
/// <param name="L">SqList结构体</param>
/// <param name="e">待查询的元素</param>
/// <returns>该元素所在的索引(1-length)</returns>
int LocateElem(SqList L, ElemType e);
/// <summary>
/// 获取线性表指定元素的前驱元素
/// </summary>
/// <param name="L">SqList结构体</param>
/// <param name="cur_e">待查询的元素</param>
/// <param name="pre_e">保存前驱元素的元素引用</param>
/// <returns>执行状态码</returns>
Status PriorElem(SqList L, ElemType cur_e, ElemType& pre_e);
/// <summary>
/// 获取线性表指定元素的后继元素
/// </summary>
/// <param name="L">SqList结构体</param>
/// <param name="cur_e">待查询的元素</param>
/// <param name="next_e">保存后继元素的元素引用</param>
/// <returns>执行状态码</returns>
Status NextElem(SqList L, ElemType cur_e, ElemType& next_e);
/// <summary>
/// 插入指定元素到指定位置
/// </summary>
/// <param name="L">SqList结构体引用</param>
/// <param name="i">插入元素的位置</param>
/// <param name="e">待插入的元素</param>
/// <returns>执行状态码</returns>
Status ListInsert(SqList& L, ElemType i, ElemType e);
/// <summary>
/// 删除指定位置的元素
/// </summary>
/// <param name="L">SqList结构体引用</param>
/// <param name="i">待删除元素的位置索引</param>
/// <returns>执行状态码</returns>
Status ListDelete(SqList& L, ElemType i);
/// <summary>
/// 顺序遍历整个线性表并输出
/// </summary>
/// <param name="L">SqList结构体</param>
/// <returns>执行状态码</returns>
Status TraverseList(SqList L);

#endif

#ifndef LINK_LIST
#define LINK_LIST
#include "../common.h"
typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LNode, * LinkList;

/// <summary>
/// 初始化链表
/// </summary>
/// <param name="L">LinkList头指针引用</param>
/// <returns>执行状态码</returns>
Status InitList(LinkList& L);
/// <summary>
/// 销毁链表
/// </summary>
/// <param name="L">LinkList头指针引用</param>
/// <returns>执行状态码</returns>
Status DestroyList(LinkList& L);
/// <summary>
/// 清空链表
/// </summary>
/// <param name="L">LinkList头指针引用</param>
/// <returns>执行状态码</returns>
Status ClearEmpty(LinkList& L);
/// <summary>
/// 判断链表是否为空
/// </summary>
/// <param name="L">LinkList头指针</param>
/// <returns>链表是否为空</returns>
bool ListEmpty(LinkList L);
/// <summary>
/// 获取链表的长度
/// </summary>
/// <param name="L">LinkList头指针</param>
/// <returns>链表的长度</returns>
int ListLength(LinkList L);
/// <summary>
/// 获取链表指定位置的元素
/// </summary>
/// <param name="L">LinkList头指针</param>
/// <param name="i">位置索引(1-length)</param>
/// <param name="e">保存结果的元素引用</param>
/// <returns>执行状态码</returns>
Status GetElem(LinkList L, ElemType i, ElemType& e);
/// <summary>
/// 获取链表指定元素的位置
/// </summary>
/// <param name="L">LinkList头指针</param>
/// <param name="e">待查询的元素</param>
/// <returns>该元素所在的索引(1-length)</returns>
int LocateElem(LinkList L, ElemType e);
/// <summary>
/// 获取链表指定元素的前驱元素
/// </summary>
/// <param name="L">LinkList头指针</param>
/// <param name="cur_e">待查询的元素</param>
/// <param name="pre_e">保存前驱元素的元素引用</param>
/// <returns>执行状态码</returns>
Status PriorElem(LinkList L, ElemType cur_e, LinkList& pre_e);
/// <summary>
/// 获取链表指定元素的后继元素
/// </summary>
/// <param name="L">LinkList头指针</param>
/// <param name="cur_e">待查询的元素</param>
/// <param name="next_e">保存后继元素的元素引用</param>
/// <returns>执行状态码</returns>
Status NextElem(LinkList L, ElemType cur_e, LinkList& next_e);
/// <summary>
/// 插入指定元素到指定位置
/// </summary>
/// <param name="L">LinkList头指针引用</param>
/// <param name="i">插入元素的位置</param>
/// <param name="e">待插入的元素</param>
/// <returns>执行状态码</returns>
Status ListInsert(LinkList& L, ElemType i, ElemType e);
/// <summary>
/// 删除指定位置的元素
/// </summary>
/// <param name="L">LinkList头指针引用</param>
/// <param name="i">待删除元素的位置索引</param>
/// <returns>执行状态码</returns>
Status ListDelete(LinkList& L, ElemType i);
/// <summary>
/// 顺序遍历整个链表并输出
/// </summary>
/// <param name="L">LinkList头指针</param>
/// <returns>执行状态码</returns>
Status TraverseList(LinkList L);
#endif
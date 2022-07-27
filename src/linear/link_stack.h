#ifndef LINK_STACK
#define LINK_STACK
#include "../common.h"
/// <summary>
/// 栈的节点
/// </summary>
typedef struct StackNode {
	ElemType data;//用于保存元素
	struct StackNode* next;//用于指向下一个节点
}StackNode, * LinkStack;//栈顶指针
/// <summary>
/// 初始化栈(分配初始空间)
/// </summary>
/// <param name="S">LinkStack栈的引用</param>
/// <returns>执行状态码</returns>
Status InitStack(LinkStack& S);
/// <summary>
/// 销毁栈并清理指针
/// </summary>
/// <param name="S">LinkStack栈的引用</param>
/// <returns>执行状态码</returns>
Status DestroyStack(LinkStack& S);
/// <summary>
/// 判断栈是否为空
/// </summary>
/// <param name="S">LinkStack栈</param>
/// <returns>栈是否为空</returns>
bool StackEmpty(LinkStack S);
/// <summary>
/// 栈的长度
/// </summary>
/// <param name="S">LinkStack栈</param>
/// <returns>栈的长度</returns>
int StackLength(LinkStack S);
/// <summary>
/// 获取栈顶元素
/// </summary>
/// <param name="S">LinkStack栈</param>
/// <returns>元素的值</returns>
ElemType GetTop(LinkStack S);
/// <summary>
/// 令元素入栈
/// </summary>
/// <param name="S">LinkStack栈引用</param>
/// <param name="e">入栈元素</param>
/// <returns>执行状态码</returns>
Status Push(LinkStack& S, ElemType e);
/// <summary>
/// 推出栈顶元素
/// </summary>
/// <param name="S">LinkStack栈引用</param>
/// <param name="e">保存元素结果的引用</param>
/// <returns>执行状态码</returns>
Status Pop(LinkStack& S, ElemType& e);
/// <summary>
/// 遍历栈(从栈顶到栈底)
/// </summary>
/// <param name="S">LinkStack栈</param>
/// <returns>执行状态码</returns>
Status StackTraverse(LinkStack S);
#endif
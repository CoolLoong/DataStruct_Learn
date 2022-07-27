#ifndef SEQ_STACK
#define SEQ_STACK
#include "../common.h"
typedef struct {
	ElemType* base;//储存栈中的元素(一段连续的存储空间)base指向空间基地址，也就是栈底
	ElemType* top;//指向栈中最后一个元素的后一个元素,当*top==*base时栈空,为stack_size-1表示满栈
	int stacksize;//栈的最大容量
}SqStack;
/// <summary>
/// 初始化栈(分配初始空间)
/// </summary>
/// <param name="S">SqStack栈的引用</param>
/// <returns>执行状态码</returns>
Status InitStack(SqStack& S);
/// <summary>
/// 销毁栈并清理指针
/// </summary>
/// <param name="S">SqStack栈的引用</param>
/// <returns>执行状态码</returns>
Status DestroyStack(SqStack& S);
/// <summary>
/// 清空栈
/// </summary>
/// <param name="S">SqStack栈的引用</param>
/// <returns>执行状态码</returns>
Status ClearStack(SqStack& S);
/// <summary>
/// 判断栈是否为空
/// </summary>
/// <param name="S">SqStack栈</param>
/// <returns>栈是否为空</returns>
bool StackEmpty(SqStack S);
/// <summary>
/// 栈的长度
/// </summary>
/// <param name="S">SqStack栈</param>
/// <returns>栈的长度</returns>
int StackLength(SqStack S);
/// <summary>
/// 获取栈顶元素
/// </summary>
/// <param name="S">SqStack栈</param>
/// <returns>元素的值</returns>
ElemType GetTop(SqStack S);
/// <summary>
/// 令元素入栈
/// </summary>
/// <param name="S">SqStack栈引用</param>
/// <param name="e">入栈元素</param>
/// <returns>执行状态码</returns>
Status Push(SqStack& S, ElemType e);
/// <summary>
/// 推出栈顶元素
/// </summary>
/// <param name="S">SqStack栈引用</param>
/// <param name="e">保存元素结果的引用</param>
/// <returns>执行状态码</returns>
Status Pop(SqStack& S, ElemType& e);
/// <summary>
/// 遍历栈(从栈顶到栈底)
/// </summary>
/// <param name="S">SqStack栈</param>
/// <returns>执行状态码</returns>
Status StackTraverse(SqStack S);
#endif


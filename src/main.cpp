#include "linear/seq_list.h"
#include "linear/link_list.h"
#include "linear/seq_stack.h"
#include "linear/link_stack.h"
#include "linear/seq_queue.h"
#include "linear/link_queue.h"

using namespace std;

void seq_list_test() {
	SqList seq_list;
	int next, pre, result;
	cout << "函数状态" << InitList(seq_list) << endl;
	for (int j = 1; j <= 10; ++j) {
		ListInsert(seq_list, j, j * 10);
	}
	cout << "函数状态" << TraverseList(seq_list) << endl;
	cout << "函数状态" << ListDelete(seq_list, 1) << endl;
	cout << "函数状态" << ListDelete(seq_list, 8) << endl;
	cout << "函数状态" << ListDelete(seq_list, 7) << endl;
	cout << "函数状态" << TraverseList(seq_list) << endl;
	cout << "函数状态" << NextElem(seq_list, 50, next) << endl;
	cout << "前驱结果" << next << endl;
	cout << "函数状态" << PriorElem(seq_list, 50, pre) << endl;
	cout << "前驱结果" << pre << endl;
	cout << "50的位置" << LocateElem(seq_list, 50) << endl;
	cout << "函数状态" << GetElem(seq_list, 3, result) << endl;
	cout << "3号位置的元素是" << result << endl;
	cout << "表长" << ListLength(seq_list) << endl;
	cout << "函数状态" << ClearEmpty(seq_list) << endl;
	cout << "表是否为空" << ListEmpty(seq_list) << endl;
	cout << "函数状态" << DestroyList(seq_list) << endl;
	cout << "销毁是否成功" << seq_list.elem << endl;
}

void link_list_test() {
	LinkList test, next, pre;
	int result;
	cout << "函数状态" << InitList(test) << endl;
	for (int j = 1; j <= 10; ++j) {
		ListInsert(test, j, j * 10);
	}
	cout << "函数状态" << TraverseList(test) << endl;
	cout << "函数状态" << ListDelete(test, 1) << endl;
	cout << "函数状态" << TraverseList(test) << endl;
	cout << "List Length" << ListLength(test) << endl;
	cout << "函数状态" << GetElem(test, 9, result) << endl;
	cout << "GetElem结果" << result << endl;
	cout << "300的位置在" << LocateElem(test, 30) << endl;
	cout << "函数状态" << PriorElem(test, 40, pre) << endl;
	cout << "PriorElem结果" << pre->data << endl;
	cout << "函数状态" << NextElem(test, 40, next) << endl;
	cout << "NextElem结果" << next->data << endl;
	cout << "函数状态" << ClearEmpty(test) << endl;
	cout << "函数状态" << ListEmpty(test) << endl;
	cout << "函数状态" << DestroyList(test) << endl;
	cout << "销毁是否成功" << test << endl;
}

void seq_stack_test() {
	SqStack test;
	int result;
	cout << "函数状态" << InitStack(test) << endl;
	for (int j = 1; j < 10; ++j) {
		Push(test, j * 10);
	}
	cout << "函数状态" << StackTraverse(test) << endl;
	cout << "函数状态" << Pop(test, result) << endl;
	cout << "Pop结果" << result << endl;
	cout << "函数状态" << StackTraverse(test) << endl;
	cout << "List Length" << StackLength(test) << endl;
	cout << "GetTop结果" << GetTop(test) << endl;
	cout << "函数状态" << ClearStack(test) << endl;
	cout << "函数状态" << StackEmpty(test) << endl;
	cout << "函数状态" << DestroyStack(test) << endl;
	cout << "销毁是否成功" << test.base << endl;
}

void link_stack_test() {
	LinkStack test;
	int result;
	cout << "函数状态" << InitStack(test) << endl;
	for (int j = 1; j < 10; ++j) {
		Push(test, j * 10);
	}
	cout << "函数状态" << StackTraverse(test) << endl;
	cout << "函数状态" << Pop(test, result) << endl;
	cout << "Pop结果" << result << endl;
	cout << "函数状态" << StackTraverse(test) << endl;
	cout << "List Length" << StackLength(test) << endl;
	cout << "GetTop结果" << GetTop(test) << endl;
	cout << "函数状态" << DestroyStack(test) << endl;
	cout << "函数状态" << StackEmpty(test) << endl;
	cout << "销毁是否成功" << test << endl;
}

void seq_queue_test() {
	SqQueue test;
	int result;
	cout << "函数状态" << InitQueue(test) << endl;
	for (int j = 1; j < 10; ++j) {
		EnQueue(test, j * 10);
	}
	cout << "函数状态" << QueueTraverse(test) << endl;
	cout << "函数状态" << DeQueue(test, result) << endl;
	cout << "DeQueue结果" << result << endl;
	cout << "函数状态" << QueueTraverse(test) << endl;
	cout << "List Length" << QueueLength(test) << endl;
	cout << "GetTop结果" << GetHead(test) << endl;
	cout << "函数状态" << ClearQueue(test) << endl;
	cout << "函数状态" << QueueEmpty(test) << endl;
	cout << "函数状态" << DestroyQueue(test) << endl;
	cout << "销毁是否成功" << test.base << endl;
}

void link_queue_test() {
	LinkQueue test;
	int result;
	cout << "函数状态" << InitQueue(test) << endl;
	for (int j = 1; j < 10; ++j) {
		EnQueue(test, j * 10);
	}
	cout << "函数状态" << QueueTraverse(test) << endl;
	cout << "函数状态" << DeQueue(test, result) << endl;
	cout << "DeQueue结果" << result << endl;
	cout << "函数状态" << QueueTraverse(test) << endl;
	cout << "List Length" << QueueLength(test) << endl;
	cout << "GetTop结果" << GetHead(test) << endl;
	cout << "函数状态" << ClearQueue(test) << endl;
	cout << "函数状态" << QueueEmpty(test) << endl;
	cout << "函数状态" << DestroyQueue(test) << endl;
	cout << "销毁是否成功" << test.front << endl;
}

int main() {
	int opt;
	cout << "请选择测试项:" << endl
		<< "1.线性表(顺序)" << endl
		<< "2.线性表(链式)" << endl
		<< "3.栈(顺序)" << endl
		<< "4.栈(链式)" << endl
		<< "5.队列(顺序)" << endl
		<< "6.队列(链式)" << endl;
	while (cin >> opt) {
		switch (opt) {
		case 1: seq_list_test(); break;
		case 2:link_list_test(); break;
		case 3:seq_stack_test(); break;
		case 4:link_stack_test(); break;
		case 5:seq_queue_test(); break;
		case 6:link_queue_test(); break;
		default:cout << "输入错误,请重新输入";
		}
	}
	return 0;
}
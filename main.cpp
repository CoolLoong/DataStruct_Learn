#include "seq_list.h"
#include "link_list.h"
#include "seq_stack.h"
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
	cout << "函数状态" << ListDelete(seq_list, 9) << endl;
	cout << "函数状态" << ListDelete(seq_list, 8) << endl;
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
	cout << "函数状态" << GetElem(test, 1, result) << endl;
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
	for (int j = 1; j <= 10; ++j) {
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

int main() {
	seq_list_test();
	return 0;
}
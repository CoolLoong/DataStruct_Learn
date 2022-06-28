#include "seq_list.h"
#include "link_list.h"
#include "seq_stack.h"
using namespace std;

void seq_list_test() {
	SqList seq_list;
	int next, pre, result;
	cout << "����״̬" << InitList(seq_list) << endl;
	for (int j = 1; j <= 10; ++j) {
		ListInsert(seq_list, j, j * 10);
	}
	cout << "����״̬" << TraverseList(seq_list) << endl;
	cout << "����״̬" << ListDelete(seq_list, 1) << endl;
	cout << "����״̬" << ListDelete(seq_list, 9) << endl;
	cout << "����״̬" << ListDelete(seq_list, 8) << endl;
	cout << "����״̬" << TraverseList(seq_list) << endl;
	cout << "����״̬" << NextElem(seq_list, 50, next) << endl;
	cout << "ǰ�����" << next << endl;
	cout << "����״̬" << PriorElem(seq_list, 50, pre) << endl;
	cout << "ǰ�����" << pre << endl;
	cout << "50��λ��" << LocateElem(seq_list, 50) << endl;
	cout << "����״̬" << GetElem(seq_list, 3, result) << endl;
	cout << "3��λ�õ�Ԫ����" << result << endl;
	cout << "��" << ListLength(seq_list) << endl;
	cout << "����״̬" << ClearEmpty(seq_list) << endl;
	cout << "���Ƿ�Ϊ��" << ListEmpty(seq_list) << endl;
	cout << "����״̬" << DestroyList(seq_list) << endl;
	cout << "�����Ƿ�ɹ�" << seq_list.elem << endl;
}

void link_list_test() {
	LinkList test, next, pre;
	int result;
	cout << "����״̬" << InitList(test) << endl;
	for (int j = 1; j <= 10; ++j) {
		ListInsert(test, j, j * 10);
	}
	cout << "����״̬" << TraverseList(test) << endl;
	cout << "����״̬" << ListDelete(test, 1) << endl;
	cout << "����״̬" << TraverseList(test) << endl;
	cout << "List Length" << ListLength(test) << endl;
	cout << "����״̬" << GetElem(test, 1, result) << endl;
	cout << "GetElem���" << result << endl;
	cout << "300��λ����" << LocateElem(test, 30) << endl;
	cout << "����״̬" << PriorElem(test, 40, pre) << endl;
	cout << "PriorElem���" << pre->data << endl;
	cout << "����״̬" << NextElem(test, 40, next) << endl;
	cout << "NextElem���" << next->data << endl;
	cout << "����״̬" << ClearEmpty(test) << endl;
	cout << "����״̬" << ListEmpty(test) << endl;
	cout << "����״̬" << DestroyList(test) << endl;
	cout << "�����Ƿ�ɹ�" << test << endl;
}

void seq_stack_test() {
	SqStack test;
	int result;
	cout << "����״̬" << InitStack(test) << endl;
	for (int j = 1; j <= 10; ++j) {
		Push(test, j * 10);
	}
	cout << "����״̬" << StackTraverse(test) << endl;
	cout << "����״̬" << Pop(test, result) << endl;
	cout << "Pop���" << result << endl;
	cout << "����״̬" << StackTraverse(test) << endl;
	cout << "List Length" << StackLength(test) << endl;
	cout << "GetTop���" << GetTop(test) << endl;
	cout << "����״̬" << ClearStack(test) << endl;
	cout << "����״̬" << StackEmpty(test) << endl;
	cout << "����״̬" << DestroyStack(test) << endl;
	cout << "�����Ƿ�ɹ�" << test.base << endl;
}

int main() {
	seq_list_test();
	return 0;
}
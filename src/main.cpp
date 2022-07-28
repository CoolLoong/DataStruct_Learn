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
	cout << "����״̬" << InitList(seq_list) << endl;
	for (int j = 1; j <= 10; ++j) {
		ListInsert(seq_list, j, j * 10);
	}
	cout << "����״̬" << TraverseList(seq_list) << endl;
	cout << "����״̬" << ListDelete(seq_list, 1) << endl;
	cout << "����״̬" << ListDelete(seq_list, 8) << endl;
	cout << "����״̬" << ListDelete(seq_list, 7) << endl;
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
	cout << "����״̬" << GetElem(test, 9, result) << endl;
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
	for (int j = 1; j < 10; ++j) {
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

void link_stack_test() {
	LinkStack test;
	int result;
	cout << "����״̬" << InitStack(test) << endl;
	for (int j = 1; j < 10; ++j) {
		Push(test, j * 10);
	}
	cout << "����״̬" << StackTraverse(test) << endl;
	cout << "����״̬" << Pop(test, result) << endl;
	cout << "Pop���" << result << endl;
	cout << "����״̬" << StackTraverse(test) << endl;
	cout << "List Length" << StackLength(test) << endl;
	cout << "GetTop���" << GetTop(test) << endl;
	cout << "����״̬" << DestroyStack(test) << endl;
	cout << "����״̬" << StackEmpty(test) << endl;
	cout << "�����Ƿ�ɹ�" << test << endl;
}

void seq_queue_test() {
	SqQueue test;
	int result;
	cout << "����״̬" << InitQueue(test) << endl;
	for (int j = 1; j < 10; ++j) {
		EnQueue(test, j * 10);
	}
	cout << "����״̬" << QueueTraverse(test) << endl;
	cout << "����״̬" << DeQueue(test, result) << endl;
	cout << "DeQueue���" << result << endl;
	cout << "����״̬" << QueueTraverse(test) << endl;
	cout << "List Length" << QueueLength(test) << endl;
	cout << "GetTop���" << GetHead(test) << endl;
	cout << "����״̬" << ClearQueue(test) << endl;
	cout << "����״̬" << QueueEmpty(test) << endl;
	cout << "����״̬" << DestroyQueue(test) << endl;
	cout << "�����Ƿ�ɹ�" << test.base << endl;
}

void link_queue_test() {
	LinkQueue test;
	int result;
	cout << "����״̬" << InitQueue(test) << endl;
	for (int j = 1; j < 10; ++j) {
		EnQueue(test, j * 10);
	}
	cout << "����״̬" << QueueTraverse(test) << endl;
	cout << "����״̬" << DeQueue(test, result) << endl;
	cout << "DeQueue���" << result << endl;
	cout << "����״̬" << QueueTraverse(test) << endl;
	cout << "List Length" << QueueLength(test) << endl;
	cout << "GetTop���" << GetHead(test) << endl;
	cout << "����״̬" << ClearQueue(test) << endl;
	cout << "����״̬" << QueueEmpty(test) << endl;
	cout << "����״̬" << DestroyQueue(test) << endl;
	cout << "�����Ƿ�ɹ�" << test.front << endl;
}

int main() {
	int opt;
	cout << "��ѡ�������:" << endl
		<< "1.���Ա�(˳��)" << endl
		<< "2.���Ա�(��ʽ)" << endl
		<< "3.ջ(˳��)" << endl
		<< "4.ջ(��ʽ)" << endl
		<< "5.����(˳��)" << endl
		<< "6.����(��ʽ)" << endl;
	while (cin >> opt) {
		switch (opt) {
		case 1: seq_list_test(); break;
		case 2:link_list_test(); break;
		case 3:seq_stack_test(); break;
		case 4:link_stack_test(); break;
		case 5:seq_queue_test(); break;
		case 6:link_queue_test(); break;
		default:cout << "�������,����������";
		}
	}
	return 0;
}
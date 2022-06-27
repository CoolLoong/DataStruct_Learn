#include "seq_list.h"
#include "link_list.h"
using namespace std;

void seq_list_test() {
	SqList seq_list;
	int next, pre, result;
	cout << "º¯Êı×´Ì¬" << InitList(seq_list) << endl;
	for (int j = 1; j <= 10; ++j) {
		ListInsert(seq_list, j, j * 10);
	}
	cout << "º¯Êı×´Ì¬" << TraverseList(seq_list) << endl;
	cout << "º¯Êı×´Ì¬" << ListDelete(seq_list, 1) << endl;
	cout << "º¯Êı×´Ì¬" << ListDelete(seq_list, 9) << endl;
	cout << "º¯Êı×´Ì¬" << ListDelete(seq_list, 8) << endl;
	cout << "º¯Êı×´Ì¬" << TraverseList(seq_list) << endl;
	cout << "º¯Êı×´Ì¬" << NextElem(seq_list, 50, next) << endl;
	cout << "Ç°Çı½á¹û" << next << endl;
	cout << "º¯Êı×´Ì¬" << PriorElem(seq_list, 50, pre) << endl;
	cout << "Ç°Çı½á¹û" << pre << endl;
	cout << "50µÄÎ»ÖÃ" << LocateElem(seq_list, 50) << endl;
	cout << "º¯Êı×´Ì¬" << GetElem(seq_list, 3, result) << endl;
	cout << "3ºÅÎ»ÖÃµÄÔªËØÊÇ" << result << endl;
	cout << "±í³¤" << ListLength(seq_list) << endl;
	cout << "º¯Êı×´Ì¬" << ClearEmpty(seq_list) << endl;
	cout << "±íÊÇ·ñÎª¿Õ" << ListEmpty(seq_list) << endl;
	cout << "º¯Êı×´Ì¬" << DestroyList(seq_list) << endl;
}

void link_list_test() {
	LinkList test, next, pre;
	int result;
	cout << "º¯Êı×´Ì¬" << InitList(test) << endl;
	for (int j = 1; j <= 10; ++j) {
		ListInsert(test, j, j * 10);
	}
	cout << "º¯Êı×´Ì¬" << TraverseList(test) << endl;
	cout << "º¯Êı×´Ì¬" << ListDelete(test, 1) << endl;
	cout << "º¯Êı×´Ì¬" << TraverseList(test) << endl;
	cout << "List Length" << ListLength(test) << endl;
	cout << "º¯Êı×´Ì¬" << GetElem(test, 1, result) << endl;
	cout << "GetElem½á¹û" << result << endl;
	cout << "300µÄÎ»ÖÃÔÚ" << LocateElem(test, 30) << endl;
	cout << "º¯Êı×´Ì¬" << PriorElem(test, 40, pre) << endl;
	cout << "PriorElem½á¹û" << pre->data << endl;
	cout << "º¯Êı×´Ì¬" << NextElem(test, 40, next) << endl;
	cout << "NextElem½á¹û" << next->data << endl;
	cout << "º¯Êı×´Ì¬" << ClearEmpty(test) << endl;
	cout << "º¯Êı×´Ì¬" << ListEmpty(test) << endl;
	cout << "º¯Êı×´Ì¬" << DestroyList(test) << endl;
}

int main() {
	link_list_test();
	return 0;
}
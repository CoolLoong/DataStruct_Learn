#include "seq_list.h"
#include "link_list.h"
using namespace std;
int main() {
	/*SqList seq_list;
	int next, pre,result;
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
	*/
	LinkList test;
	cout << "º¯Êı×´Ì¬" << InitList(test) << endl;
	cout << "º¯Êı×´Ì¬" << ListInsert(test,1,100) << endl;
	cout << "º¯Êı×´Ì¬" << ListInsert(test,2,200) << endl;
	cout << "º¯Êı×´Ì¬" << TraverseList(test) << endl;
	cout << "º¯Êı×´Ì¬" << ListDelete(test,1) << endl;
	cout << "º¯Êı×´Ì¬" << TraverseList(test) << endl;
	return 0;
}
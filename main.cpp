#include "seq_list.h"
#include "link_list.h"
using namespace std;
int main() {
	/*SqList seq_list;
	int next, pre,result;
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
	*/
	LinkList test;
	cout << "����״̬" << InitList(test) << endl;
	cout << "����״̬" << ListInsert(test,1,100) << endl;
	cout << "����״̬" << ListInsert(test,2,200) << endl;
	cout << "����״̬" << TraverseList(test) << endl;
	cout << "����״̬" << ListDelete(test,1) << endl;
	cout << "����״̬" << TraverseList(test) << endl;
	return 0;
}
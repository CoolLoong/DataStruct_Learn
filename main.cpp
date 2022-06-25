#include "seq_list.h"
using namespace std;
int main() {
	SqList seq_list;
	int next, pre,result;
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
	return 0;
}
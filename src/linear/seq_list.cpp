#ifndef SEQ_LIST
#include "seq_list.h"
#endif

Status InitList(SqList& L) {
	L.length = 0;
	L.elem = new(std::nothrow) ElemType[MAXSIZE];//��elem����ַ����ռ�,ʹ��std::nothrow���ڴ治��ʱnew���ܳ��쳣���Ƿ���NULLָ��
	if (L.elem == nullptr) exit(RAM_OVERFLOW);
	return OK;
}

Status DestroyList(SqList& L) {
	if (L.elem != nullptr) {
		L.length = 0;
		delete[] L.elem;//����ռ��ֹ�ڴ�й¶
		L.elem = nullptr;
		return OK;
	}
	else return ERROR;
}

Status ClearEmpty(SqList& L) {
	if (DestroyList(L)) {
		InitList(L);
		return OK;
	}
	else return ERROR;
}

bool ListEmpty(SqList L) {
	return L.length == 0 ? true : false;
}

int ListLength(SqList L) {
	return L.length;
}

Status GetElem(SqList L, ElemType i, ElemType& e) {
	if (L.elem != nullptr) {
		if (i > 0 && i <= L.length) {//�����ж�,������Χ��1---length
			e = L.elem[i - 1];//ʵ�ʴ洢��Χ��0---length-1
			return OK;
		}
		else return i <= 0 ? YWM_UNDERFLOW : YWM_OVERFLOW;
	}
	return ERROR;
}

int LocateElem(SqList L, ElemType e) {
	if (L.elem != nullptr) {
		for (int i = 0; i < L.length; ++i) {//�������Ա�
			if (L.elem[i] == e) {//�ҵ���һ����e��ȵ�Ԫ��
				return i + 1;//ʵ��������Χ��1---length ����Ҫ+1
			}
		}
	}
	return ERROR;
}

Status PriorElem(SqList L, ElemType cur_e, ElemType& pre_e) {
	if (L.elem != nullptr) {
		if (L.elem[0] == cur_e) { return YWM_UNDERFLOW; }
		for (int i = 0; i < L.length; ++i) {
			if (L.elem[i] == cur_e) {
				pre_e = L.elem[i - 1];
			}
		}
		return OK;
	}
	return ERROR;
}

Status NextElem(SqList L, ElemType cur_e, ElemType& next_e) {
	if (L.elem != nullptr) {
		if (L.elem[L.length - 1] == cur_e) { return YWM_OVERFLOW; }
		for (int i = 0; i < L.length; ++i) {
			if (L.elem[i] == cur_e) {
				next_e = L.elem[i + 1];
			}
		}
		return OK;
	}
	return ERROR;
}

Status ListInsert(SqList& L, ElemType i, ElemType e) {
	if (L.elem != nullptr) {
		if (L.length == MAXSIZE) return YWM_OVERFLOW;//���˾Ͳ��ܲ���Ԫ����
		if (i<1 || i > L.length + 1) return ERROR;
		for (int j = L.length - 1; j >= i - 1; --j) {//�Ӻ���ǰ������i-1
			L.elem[j + 1] = L.elem[j];//ÿ��Ԫ�ض�����,��i-1��λ�ÿճ���
		}
		L.elem[i - 1] = e;//���뵽��λ��
		L.length++;
		return OK;
	}
	return ERROR;
}

Status ListDelete(SqList& L, ElemType i) {
	if (L.elem != nullptr) {
		if (L.length == 0) return YWM_UNDERFLOW;
		if (i<1 || i > L.length) return ERROR;
		for (int j = i; j <= L.length-1; ++j) {//��i�������б��β
			L.elem[j - 1] = L.elem[j];//ÿ��Ԫ�ض�����
		}
		L.elem[L.length] = -1;//�������� ���һ��Ԫ����-1�߼�ɾ��
		L.length--;
		return OK;
	}
	return ERROR;
}

Status TraverseList(SqList L) {
	if (L.elem != nullptr && L.length != 0) {
		for (int i = 0; i < L.length; ++i) {
			std::cout << L.elem[i] << " ";
		}
		return OK;
	}
	return ERROR;
}

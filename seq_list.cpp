#ifndef SEQ_LIST
#include "seq_list.h"
#endif

Status InitList(SqList& L) {
	L.length = 0;
	L.elem = new ElemType[MAXSIZE];
	return OK;
}

Status DestroyList(SqList& L) {
	if (L.elem != nullptr) {
		L.length = 0;
		delete[] L.elem;
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
	if (L.elem != nullptr) {
		if (L.length == 0) return true;
		else return false;
	}
}

int ListLength(SqList L) {
	if (L.elem != nullptr) {
		return L.length;
	}
}

Status GetElem(SqList L, ElemType i, ElemType& e) {
	if (L.elem != nullptr) {
		if (i > 0 && i <= L.length) {
			e = L.elem[i - 1];
			return OK;
		}
		else return i <= 0 ? YWM_UNDERFLOW : YWM_OVERFLOW;
	}
	return ERROR;
}

int LocateElem(SqList L, ElemType e) {
	if (L.elem != nullptr) {
		for (int i = 0; i < L.length; ++i) {
			if (L.elem[i] == e) {
				return i + 1;
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
	}
	return ERROR;
}

Status ListInsert(SqList& L, ElemType i, ElemType e) {
	if (L.elem != nullptr) {
		if (i - 1 >= 0 && i - 1 <= L.length) {
			for (int j = L.length - 1; j >= i - 1; --j) {
				L.elem[j + 1] = L.elem[j];
			}
			L.elem[i - 1] = e;
			L.length++;
			return OK;
		}
		else return i <= 0 ? YWM_UNDERFLOW : YWM_OVERFLOW;
	}
	return ERROR;
}

Status ListDelete(SqList& L, ElemType i) {
	if (L.elem != nullptr) {
		if (i - 1 >= 0 && i - 1 <= L.length) {
			for (int j = i; j <= L.length; ++j) {
				L.elem[j - 1] = L.elem[j];
			}
			L.length--;
			return OK;
		}
		else return i <= 0 ? YWM_UNDERFLOW : YWM_OVERFLOW;
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

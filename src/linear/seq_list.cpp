#ifndef SEQ_LIST
#include "seq_list.h"
#endif

Status InitList(SqList& L) {
	L.length = 0;
	L.elem = new(std::nothrow) ElemType[MAXSIZE];//从elem基地址分配空间,使用std::nothrow令内存不足时new不跑出异常而是返回NULL指针
	if (L.elem == nullptr) exit(RAM_OVERFLOW);
	return OK;
}

Status DestroyList(SqList& L) {
	if (L.elem != nullptr) {
		L.length = 0;
		delete[] L.elem;//清理空间防止内存泄露
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
		if (i > 0 && i <= L.length) {//参数判断,索引范围在1---length
			e = L.elem[i - 1];//实际存储范围在0---length-1
			return OK;
		}
		else return i <= 0 ? YWM_UNDERFLOW : YWM_OVERFLOW;
	}
	return ERROR;
}

int LocateElem(SqList L, ElemType e) {
	if (L.elem != nullptr) {
		for (int i = 0; i < L.length; ++i) {//遍历线性表
			if (L.elem[i] == e) {//找到第一个与e相等的元素
				return i + 1;//实际索引范围在1---length 故需要+1
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
		if (L.length == MAXSIZE) return YWM_OVERFLOW;//满了就不能插入元素了
		if (i<1 || i > L.length + 1) return ERROR;
		for (int j = L.length - 1; j >= i - 1; --j) {//从后往前遍历到i-1
			L.elem[j + 1] = L.elem[j];//每个元素都后移,将i-1的位置空出来
		}
		L.elem[i - 1] = e;//插入到该位置
		L.length++;
		return OK;
	}
	return ERROR;
}

Status ListDelete(SqList& L, ElemType i) {
	if (L.elem != nullptr) {
		if (L.length == 0) return YWM_UNDERFLOW;
		if (i<1 || i > L.length) return ERROR;
		for (int j = i; j <= L.length-1; ++j) {//从i遍历到列表结尾
			L.elem[j - 1] = L.elem[j];//每个元素都左移
		}
		L.elem[L.length] = -1;//由于左移 最后一个元素置-1逻辑删除
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

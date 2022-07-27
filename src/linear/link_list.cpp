#ifndef LINK_LIST
#include "link_list.h"
#endif

Status InitList(LinkList& L) {
	L = new(std::nothrow) LNode;
	if (L == nullptr) exit(RAM_OVERFLOW);
	L->next = nullptr;
	return OK;
}

Status DestroyList(LinkList& L) {
	static int len = 1;//用一个静态int变量保存链表长度,长度初始为1是因为把头指针也计算进来
	if (L->next != nullptr) { 
		len++;
		DestroyList(L->next);//递归直到元素下一个为nullptr(即链表最后一个元素)
	}
	delete L;
	L = nullptr;
	len--;
	if (len == 0) {//删除完毕返回成功
		len = 1;//静态变量复原
		return OK;
	}
	else return ERROR;
}

Status ClearEmpty(LinkList& L) {
	if (DestroyList(L)) {
		InitList(L);
		return OK;
	}
	else return ERROR;
}

bool ListEmpty(LinkList L) {
	return L->next == nullptr ? true : false;
}

int ListLength(LinkList L) {
	int i = 0;
	L = L->next;//初始指向头节点
	while (L != nullptr) {//若节点非空
		L = L->next;//指向下一个节点
		++i;//长度+1
	}
	return i;
}

Status GetElem(LinkList L, ElemType i, ElemType& e) {
	int j = 0;
	while (L->next && j < i) {//若节点非空且未到指定位置i
		L = L->next;
		++j;
	}
	if (j != i) return ERROR;
	e = L->data;
	return OK;
}

int LocateElem(LinkList L, ElemType e) {
	if (L != nullptr) {
		int j = 1;
		L = L->next;//初始指向头节点
		while (L != nullptr) {
			if (L->data == e) {
				return j;
			}
			L = L->next;
			++j;
		}
	}
	return ERROR;
}

Status PriorElem(LinkList L, ElemType cur_e, LinkList& pre_e) {
	if (L != nullptr) {
		if (L->next->data == cur_e) return ERROR;
		while (L != nullptr) {
			if (L->next->data == cur_e) {
				pre_e = L;
				return OK;
			}
			L = L->next;
		}
	}
	return ERROR;
}

Status NextElem(LinkList L, ElemType cur_e, LinkList& next_e) {
	while (L != nullptr) {
		if (L->data == cur_e) {
			if (L->next != nullptr) {
				next_e = L->next;
				return OK;
			}
			else return ERROR;
		}
		L = L->next;
	}
	return ERROR;
}

Status ListInsert(LinkList& L, ElemType i, ElemType e) {
	LinkList p = L;
	int j = 0;
	while (p != nullptr && j < i - 1) {//为了方便插入,遍历到第i-1个节点,i为0时为头指针,赋值给p.
		p = p->next;
		++j;
	}
	if (p == nullptr || j > i - 1) return ERROR;
	LinkList s = new(std::nothrow) LNode;//创建一个新节点
	if (s == nullptr) exit(RAM_OVERFLOW);
	s->data = e;
	s->next = p->next;//s下一个指向原本p的下一个
	p->next = s;//p下一个为s
	return OK;
}

Status ListDelete(LinkList& L, ElemType i) {
	LinkList p = L;
	int j = 0;
	while (p != nullptr && j < i - 1) {
		p = p->next;
		++j;
	}
	if (p == nullptr || j > i - 1) return ERROR;
	LinkList q = p->next;//用q临时存p->next
	p->next = q->next;//p的下一个指向下下个节点,即p->next=p->next->next,这样p->next这个节点就逻辑移除了
	delete q;//进行内存释放
	q = nullptr;
	return OK;
}

Status TraverseList(LinkList L) {
	if (L != nullptr) {
		L = L->next;
		while (1) {
			if (L != nullptr) std::cout << L->data << " ";
			else break;
			L = L->next;
		}
		return OK;
	}
	else return ERROR;
}

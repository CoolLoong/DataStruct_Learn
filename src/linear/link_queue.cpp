#ifndef LINK_QUEUE
#include "link_queue.h"
#endif

Status InitQueue(LinkQueue& Q) {
	Q.front = Q.rear = new(std::nothrow) QNode;//该节点不使用,仅用于指向队头元素
	if (Q.front == nullptr) exit(RAM_OVERFLOW);
	Q.front->next = nullptr;
	return OK;
}

Status DestroyQueue(LinkQueue& Q) {
	QueuePtr q = Q.front;
	while (1) {
		QueuePtr p = q;
		if (p != nullptr) {
			q = q->next;
			delete p;
			p = nullptr;
		}
		else break;
	}
	Q.front = Q.rear = nullptr;
	return OK;
}

Status ClearQueue(LinkQueue& Q) {
	if (DestroyQueue(Q)) {
		InitQueue(Q);
		return OK;
	}
	else return ERROR;
}

bool QueueEmpty(LinkQueue Q) {
	return Q.rear == Q.front ? true : false;
}

int QueueLength(LinkQueue Q) {
	int i = 0;
	if (!QueueEmpty(Q)) {
		QueuePtr q = Q.front->next;
		while (1) {
			if (q != nullptr) ++i;
			else break;
			q = q->next;
		}
		return i;
	}
	else return 0;
}

ElemType GetHead(LinkQueue Q) {
	if (!QueueEmpty(Q)) {
		return Q.front->next->data;
	}
	else return YWM_UNDERFLOW;
}

Status EnQueue(LinkQueue& Q, ElemType e) {
	if (Q.front != nullptr) {
		QueuePtr p = new(std::nothrow) QNode;
		if (p == nullptr) exit(RAM_OVERFLOW);
		p->data = e;
		p->next = nullptr;
		Q.rear->next = p;
		Q.rear = p;
		return OK;
	}
	else return ERROR;
}

Status DeQueue(LinkQueue& Q, ElemType& e) {
	if (Q.front != nullptr) {
		if (QueueEmpty(Q)) return YWM_UNDERFLOW;
		QueuePtr p = Q.front->next;
		e = p->data;
		Q.front->next = p->next;
		if (Q.rear == p) Q.rear = Q.front;
		delete p;
		p = nullptr;
		return OK;
	}
	else return ERROR;
}

Status QueueTraverse(LinkQueue Q) {
	if (!QueueEmpty(Q)) {
		QueuePtr q = Q.front->next;
		while (1) {
			if (q != nullptr) std::cout << q->data << " ";
			else break;
			q = q->next;
		}
		return OK;
	}
	else return ERROR;
}

#ifndef SEQ_QUEUE
#include "seq_queue.h"
#endif

Status InitQueue(SqQueue& Q) {
	Q.base = new(std::nothrow) ElemType[MAXSIZE];
	if (Q.base == nullptr) exit(RAM_OVERFLOW);
	Q.front = Q.rear = 0;
	return OK;
}

Status DestroyQueue(SqQueue& Q) {
	if (Q.base != nullptr) {
		Q.front = Q.rear = 0;
		delete Q.base;
		Q.base = nullptr;
		return OK;
	}
	else return ERROR;
}

Status ClearQueue(SqQueue& Q) {
	if (DestroyQueue(Q)) {
		InitQueue(Q);
		return OK;
	}
	else return ERROR;
}

bool QueueEmpty(SqQueue Q) {
	return Q.front==Q.rear ? true : false;
}

int QueueLength(SqQueue Q) {
	return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

ElemType GetHead(SqQueue Q) {
	if (!QueueEmpty(Q)) {
		return Q.base[Q.front];
	}
	else return ERROR;
}

Status EnQueue(SqQueue& Q, ElemType e) {
	if ((Q.rear + 1) % MAXSIZE == Q.front) return YWM_OVERFLOW;//为了判别循环队列是否为满,保留rear所指向的存储空间不用
	Q.base[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MAXSIZE;
	return OK;
}

Status DeQueue(SqQueue& Q, ElemType& e) {
	if (QueueEmpty(Q)) return YWM_UNDERFLOW;
	e = Q.base[Q.front];
	Q.front = (Q.front + 1) % MAXSIZE;
	return OK;
}

Status QueueTraverse(SqQueue Q) {
	if (!QueueEmpty(Q)) {
		for (int i = Q.front; i != Q.rear; i=(++i) % MAXSIZE) {
			std::cout << Q.base[i] << " ";
		}
		return OK;
	}
	else return ERROR;
}

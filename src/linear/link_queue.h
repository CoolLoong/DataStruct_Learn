#ifndef LINK_QUEUE
#define LINK_QUEUE
#include "../common.h"

typedef struct QNode {
	ElemType data;
	struct QNode* next;
}QNode, * QueuePtr;

typedef struct {
	QueuePtr front;//��ͷָ�� front->nextʼ��ָ���ͷԪ�ػ�nullptr(���п�)
	QueuePtr rear;//��βָ��  rearʼ��ָ���βԪ�ػ�ͷ�ڵ�(���п�)
}LinkQueue;

Status InitQueue(LinkQueue& Q);
Status DestroyQueue(LinkQueue& Q);
Status ClearQueue(LinkQueue& Q);
bool QueueEmpty(LinkQueue Q);
int QueueLength(LinkQueue Q);
ElemType GetHead(LinkQueue Q);
Status EnQueue(LinkQueue& Q, ElemType e);
Status DeQueue(LinkQueue& Q, ElemType& e);
Status QueueTraverse(LinkQueue Q);

#endif
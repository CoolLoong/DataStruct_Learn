#ifndef LINK_QUEUE
#define LINK_QUEUE
#include "../common.h"

typedef struct QNode {
	ElemType data;
	struct QNode* next;
}QNode, * QueuePtr;

typedef struct {
	QueuePtr front;//队头指针 front->next始终指向队头元素或nullptr(队列空)
	QueuePtr rear;//队尾指针  rear始终指向队尾元素或头节点(队列空)
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
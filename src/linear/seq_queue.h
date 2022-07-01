#ifndef SEQ_QUEUE
#define SEQ_QUEUE
#include "../common.h"
//顺序队列,使用循环队列实现
typedef struct {
	ElemType* base; //储存队列中的元素,base指向空间基地址,有效存储空间为MAXSIZE-1
	int front; //头指针始终指向队头元素
	int rear; //尾指针始终指向队尾元素的下一个
}SqQueue;

Status InitQueue(SqQueue& Q);
Status DestroyQueue(SqQueue& Q);
Status ClearQueue(SqQueue& Q);
bool QueueEmpty(SqQueue Q);
int QueueLength(SqQueue Q);
ElemType GetHead(SqQueue Q);
Status EnQueue(SqQueue& Q, ElemType e);
Status DeQueue(SqQueue& Q, ElemType& e);
Status QueueTraverse(SqQueue Q);

#endif


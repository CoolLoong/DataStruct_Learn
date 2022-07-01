#ifndef SEQ_QUEUE
#define SEQ_QUEUE
#include "../common.h"
//˳�����,ʹ��ѭ������ʵ��
typedef struct {
	ElemType* base; //��������е�Ԫ��,baseָ��ռ����ַ,��Ч�洢�ռ�ΪMAXSIZE-1
	int front; //ͷָ��ʼ��ָ���ͷԪ��
	int rear; //βָ��ʼ��ָ���βԪ�ص���һ��
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


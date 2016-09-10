#ifndef QUEUE
#define QUEUE
#include <iostream>
using namespace std;
template <class Type>
class Queue
{
public:
	Type *queue;
	int front;
	int rear;
	int MaxSize;
	Queue(int iMaxSize);
	~Queue();
	void InQueue(Type item);
	Type OutQueue();
	Type GetQueue();
};
template <class Type>
Queue<Type>::Queue(int iMaxSize)
{
	if(iMaxSize<=0)
	{
		cerr<<"Invalid maxsize!"<<endl;
		exit(1);
	}
	MaxSize=iMaxSize;
	queue=new Type[MaxSize];
	front=rear=0;
}
template <class Type>
Queue<Type>::~Queue()
{
	delete []queue;
    front=rear=0;
}
template <class Type>
void Queue<Type>::InQueue(Type item)
{
	int k=(rear+1)%MaxSize;
	if(k==MaxSize)
	{
		cerr<<"Queue overflow!"<<endl;
		exit(1);
	}
	rear=k;
	queue[rear]=item;
}
template<class Type>
Type Queue<Type>::OutQueue()
{
	if(front==rear)
	{
		cerr<<"The queue is empty!"<<endl;
		exit(1);
	}
	front=(front+1)%MaxSize;
	return queue[front];
}
template<class Type>
Type Queue<Type>::GetQueue()
{
	if(front==rear)
	{
		cerr<<"The queue is empty!"<<endl;
		exit(1);
	}
	int k=(front+1)%MaxSize;
	return queue[k];
}
#endif
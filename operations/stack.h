#ifndef STACK
#define STACK
#include <iostream>
using namespace std;
template <class Type>
class Stack
{
public:
	Type *stack;
	int top;
	int MaxSize;
	Stack(int iMaxSize);
	~Stack();
	void Push(Type ref);
	Type Pop();
	Type GetTop();
	void ClearStack();
};
template <class Type>
Stack<Type>::Stack(int iMaxSize)
{
	MaxSize=iMaxSize;
	if(MaxSize<=0)
	{
		cerr<<"Invalid MaxSize!"<<endl;
		exit(1);
	}
	stack=new Type[MaxSize];
	if(!stack)
	{
		cerr<<"Memory failed!"<<endl;
		exit(1);
	}
	top=-1;
}
template <class Type>
Stack<Type>::~Stack()
{
	top=-1;
	delete []stack;
	stack=NULL;
}
template <class Type>
void Stack<Type>::Push(Type ref)
{
	if(top==MaxSize-1)
	{
		cerr<<"Stack overflow!"<<endl;
		exit(1);
	}
	top++;
	stack[top]=ref;
}
template <class Type>
Type Stack<Type>::Pop()
{
	if(top==-1)
	{
		cerr<<"The stack is empty, can't pop!"<<endl;
		exit(1);
	}
	top--;
	return stack[top+1];
}
template <class Type>
Type Stack<Type>::GetTop()
{
	if(top==-1)
	{
		cerr<<"The stack is empty,have no top!"<<endl;
		exit(1);
	}
	return stack[top];
}
template <class Type>
void Stack<Type>::ClearStack()
{
	delete []stack;
	stack=new Type[MaxSize];
	if(!stack)
	{
		cerr<<"Memory failed!"<<endl;
		exit(1);
	}
	top=-1;
}
#endif
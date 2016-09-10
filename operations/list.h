#ifndef LIST
#define LIST
#include<iostream>
using namespace std;
template <class Type>
class Node
{
public:
	Type data;
	Node<Type> *next;
	Node<Type> *previous;
};
template <class Type>
class List
{
public:
	Node<Type> *head;
	List();
	~List();
	int ListLen();//get length of list
	void InsertList(Node<Type> *Location,Type iData);//insert a node after Location
	void DeleteList(Node<Type> *Location);//delete the node after Location
	Node<Type> *FindList(Type iValue);//get the node whose data is iValue
	bool IsEmpty();
};
template <class Type>
List<Type>::List()
{
	head=NULL;
}
template <class Type>
List<Type>::~List()
{
	Node<Type> *p1=head,*p2;
	while(p1->next!=head)
	{
		p2=p1;p1=p1->next;delete p2;
	}
	delete p1;
	head=NULL;
}
template <class Type>
int List<Type>::ListLen()
{
	Node<Type> *p=head;int len=0;
	while(p->next!=head)
	{
		p=p->next;len++;
	}
	return len+1;
}
template <class Type>
void List<Type>::InsertList(Node<Type> *Location,Type iData)
{
	Node<Type> *temp=new Node<Type>;
	temp->data=iData;
	if(head==NULL)
	{
		head=temp;
		temp->next=temp;temp->previous=temp;
		return ;
	}
	temp->next=Location->next;
	temp->previous=Location;
	Location->next=temp;
	temp->next->previous=temp;
}
template <class Type>
void List<Type>::DeleteList(Node<Type> *Location)
{
	Location->previous->next=Location->next;
    Location->next->previous=Location->previous;
	delete Location;
	Location=NULL;
}
template <class Type>
Node<Type> *List<Type>::FindList(Type iValue)
{
	Node<Type> *p=head;
	while(p!=NULL)
	{
		if(p->data==iValue)
			return p;
		else p=p->next;
	}
	return NULL;
}
template <class Type>
bool List<Type>::IsEmpty()
{
	return head==NULL;
}
#endif
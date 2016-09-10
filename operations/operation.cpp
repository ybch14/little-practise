#include <iostream>
#include <iomanip>
#include "stack.h"
#include "queue.h"
#include "list.h"
using namespace std;
int i=0;
int operate(char ch)
{
	if(ch=='+'||ch=='-')
		return 1;
	else if(ch=='*'||ch=='/')
		return 2;
	else if(ch=='('||ch==';')
		return 0;
	else 
		exit(1);
}
void predoing(char *str)
{
	List<char> cList;
	cList.InsertList(cList.head,*str);
	for(i=1;i<(int)strlen(str);i++)
		cList.InsertList(cList.head->previous,*(str+i));
    Node<char> *p=cList.head;
	if(cList.head->data=='-'&&cList.head->next->data!='(')
	{
		cList.InsertList(cList.head->previous,'(');
		cList.head=cList.head->previous;
		while(!((p->data>='0'&&p->data<='9')&&!((p->next->data>='0'&&p->next->data<='9')||p->next->data=='.')))
			p=p->next;
		cList.InsertList(p,')');
		cList.InsertList(cList.head,'0');
	}
	else if(cList.head->data=='-'&&cList.head->next->data=='(')
	{
		cList.InsertList(cList.head->previous,'(');
		cList.head=cList.head->previous;
		cList.InsertList(cList.head,'0');
		p=p->next;p=p->next;p=p->next;
		Stack<char> buffer(50);
		buffer.Push('(');
		while(buffer.top!=-1)
		{
			p=p->next;
			if(p->data=='(') buffer.Push('(');
			else if(p->data==')') buffer.Pop();
		}
		cList.InsertList(p,')');
	}
	else ;
	while(p->data!=';')
	{
		if(p->data=='('&&p->next->data=='-')
			cList.InsertList(p,'0');
		p=p->next;
	}
	if(cList.ListLen()>100)
	{
		cerr<<"The expression is overflow!"<<endl;
		exit(1);
	}
	p=cList.head;
	for(i=0;i<cList.ListLen();i++)
	{
		*(str+i)=p->data;
		p=p->next;
	}
}
int main()
{
	int operate(char ch);
	void predoing(char *str);
	cout<<"请输入计算待计算表达式，分号结尾"<<endl;
	Stack<char> cStack(100);
	Queue<char> cQueue(100);
	char str[100],buffer;
	cin>>str;
	predoing(str);
	cStack.Push(';');
	for(i=0;i<100;i++)
	{
		if((str[i]>='0'&&str[i]<='9')||str[i]=='.')
			cQueue.InQueue(str[i]);
		if((str[i]>='0'&&str[i]<='9')&&!((str[i+1]>='0'&&str[i+1]<='9')||str[i+1]=='.'))
			cQueue.InQueue(' ');
		if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='('||str[i]==')'||str[i]==';')
		{
			if(str[i]=='(')
				cStack.Push(str[i]);
			else if(str[i]==')')
			{
				while(cStack.GetTop()!='(')
				{
					buffer=cStack.Pop();
					cQueue.InQueue(buffer);
				}
				buffer=cStack.Pop();
			}
			else if(str[i]==';')
			{
				while(cStack.GetTop()!=';')
				{
					buffer=cStack.Pop();
					cQueue.InQueue(buffer);
				}
				cQueue.InQueue(';');
				break;
			}
			else if(operate(str[i])>operate(cStack.GetTop()))
				cStack.Push(str[i]);
			else if(operate(str[i])<=operate(cStack.GetTop()))
			{
				cQueue.InQueue(cStack.Pop());
				cStack.Push(str[i]);
			}
			else ;
		}
	}
	//for(i=cQueue.front+1;i<=cQueue.rear;i++)
	//    cout<<cQueue.OutQueue();
	Stack<double> dStack(100);dStack.Push(0.0);
	while(cQueue.GetQueue()!=';')
	{
		buffer=cQueue.OutQueue();
		if(buffer>='0'&&buffer<='9')
			dStack.Push(dStack.Pop()*10+(double)(buffer-48));
		else if(buffer=='.')
		{
			char buffer2=cQueue.OutQueue();
			dStack.Push((double)(buffer2-48));
			while(cQueue.GetQueue()>='0'&&cQueue.GetQueue()<='9')
			{
				buffer2=cQueue.OutQueue();
				dStack.Push(dStack.Pop()*10+(double)(buffer2-48));
			}
			double temp=dStack.Pop();
			while(temp>=1)
				temp=temp/10;
			dStack.Push(dStack.Pop()+temp);
		}
		else if(buffer==' '&&cQueue.GetQueue()>='0'&&cQueue.GetQueue()<='9')
			dStack.Push((double)(cQueue.OutQueue()-48));
		else if(buffer=='+')
		{
			dStack.Push(dStack.Pop()+dStack.Pop());
			if(cQueue.GetQueue()>='0'&&cQueue.GetQueue()<='9')
				dStack.Push((double)(cQueue.OutQueue()-48));
		}
		else if(buffer=='-')
		{
			dStack.Push(-dStack.Pop()+dStack.Pop());
			if(cQueue.GetQueue()>='0'&&cQueue.GetQueue()<='9')
				dStack.Push((double)(cQueue.OutQueue()-48));
		}
		else if(buffer=='*')
		{
			dStack.Push(dStack.Pop()*dStack.Pop());
			if(cQueue.GetQueue()>='0'&&cQueue.GetQueue()<='9')
				dStack.Push((double)(cQueue.OutQueue()-48));
		}
		else if(buffer=='/')
		{
			dStack.Push(1/dStack.Pop()*dStack.Pop());
			if(cQueue.GetQueue()>='0'&&cQueue.GetQueue()<='9')
				dStack.Push((double)(cQueue.OutQueue()-48));
		}
	}
	cout<<setprecision(10)<<dStack.Pop()<<endl;
	return 0;
}
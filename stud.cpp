// stud.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
struct student
{
	char name[60];
	char num[20];
	int age;
	struct student * next;
};

int main()
{
	struct student *p,*q,*head;
	int s=1;
	head=NULL;
	while(cout<<"输入(1) or 结束(0) ?"<<endl,cin>>s,s==1)
	{
		p=new student;
		cout<<"请输入姓名 :   "<<endl;
		cin>>p->name;
		cout<<"请输入学号 :   "<<endl;
		cin>>p->num;
		cout<<"请输入年龄 :   "<<endl;
		cin>>p->age;
		if(head==NULL)
		{
			head=p;
		}
		else
		{
			q->next=p;
		}
		q=p;
		p->next=NULL;	 
	}
	p=head;
	while(p!=NULL)
	{
		cout<<"姓名: "<<p->name<<endl;
		cout<<"学号:"<<p->num <<endl;
		cout<<"年龄: "<<p->age <<endl;
		p=p->next;
	}
	p=head;
	do
	{
		q=p->next;
		delete p;
		p=q;
	}while(q);
	return 0;
}




int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}


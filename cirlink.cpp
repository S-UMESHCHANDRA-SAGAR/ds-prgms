#include<iostream>
#include<stdlib.h>
using namespace std;
class sll
{
struct list
{
int data;
struct list *next;
}*head;
public:
typedef struct list node;
sll();
void create();
void insert();
void display();
int deletepos();
void insertatbeg();
void insertatmid();
void insertatend();
void search();
};
sll::sll()
{
head=NULL;
}
int main()
{
int ch,k;
sll obj;
do
{
cout<<"\n\tMAIN MENU\n";
cout<<"\t\t1.create\n\t\t2.display\n\t\t3.insert\n\t\t4.dletepos\n\t\t5.search\n\t\t6.exit\n";
cout<<"\n\tenter your choice";
cin>>ch;
switch(ch)
{
case 1:obj.create();
	break;
case 2:obj.display();
	break;
case 3:obj.insert();
	break;
case 4:k=obj.deletepos();
cout<<"\ndeleted element from the list :"<<k;
	break;
case 5:obj.search();
	break;
case 6:exit(0);
}
}while(ch>0&&ch<7);
}
void sll::create()
{
node *temp,*p;
temp=new node;
cout<<"enter the element";
cin>>temp->data;
if(head==NULL)
{
temp->next=head;
head=temp;
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
temp->next=head;
p->next=temp;
}
}
void sll::display()
{
int d;
node *q;
if(head==NULL)
cout<<"\n list is empty\n";
q=head;
cout<<"\nelement in the list are\n";
if(q==head)
cout<<q->data<<"->";
q=q->next;
while(q!=head)
{
cout<<"->"<<q->data;
q=q->next;
}
}
void sll::search()
{
int f=0,k;
node *p;
p=head;
cout<<"enter the element you want to found";
cin>>k;
if(p==NULL)
cout<<"list is empty\n";
while((p->next!=head)&&(f==0))
{
if(p->data==k)
f=1;
else
p=p->next;
}
if(f==1)
{
cout<<"element  found";
}
else 
{
cout<<"element not found";
}
}
void sll::insert()
{
int ch;
do
{
cout<<"\n\t\t\t1.insertatbeg\n\t\t\t2.insertatmid\n\t\t\t3.insertatend\n\t\t\t4.display\n\t\t\t5.exit";
cout<<"enter your choice";
cin>>ch;
switch(ch)
{
case 1:insertatbeg();
	break;
case 2:insertatmid();
	break;
case 3:insertatend();
	break;
case 4:display();
	break;
default:
	break;
}
}while(ch>0&&ch<5);
}
void sll::insertatbeg()
{
node *temp,*p;
temp=new node;
cout<<"enter the inserted element";
cin>>temp->data;
temp->next=NULL;
p=head;
while(p->next!=head)
p=p->next;
p->next=temp;
temp->next=head;
head=temp;
}
void sll::insertatmid()
{
node *temp,*p;
int key;
temp=new node;
cout<<"enter the element";
cin>>temp->data;
if(head==NULL)
{
head=temp;
}
else
{
cout<<"enter the key element";
cin>>key;
p=head;
do
{
if(p->data==key)
{
temp->next=p->next;
p->next=temp;
cout<<"\nnode is inserted";
return;
}
else
p=p->next;
}while(p!=head);
}
}
void sll::insertatend()
{
node *temp,*p;
temp=new node;
cout<<"\nenter element";
cin>>temp->data;
if(head=NULL)
{
temp->next=temp;
head=temp;
}
else
{
p=head;
while(p->next!=head)
p=p->next;
temp->next=head;
p->next=temp;
}
}
int sll::deletepos()
{
node *p,*p1;
int  key,i,k;
cout<<"enter element which is to be deleted";
cin>>key;
p=head;
if(p->data==key)
{
p1=p->next;
if(p1==p)
{
p=NULL;
head=p;
cout<<"\nthe node is deleted";
}
else
{
while(p->next!=head)
p=p->next;
p->next=p1;
head=p1;
cout<<"the node is deleted";
}
}
else
{
while(p->next!=head)
{
if((p->next)->data==key)
{
p1=p->next;
p->next=p1->next;
p1->next=NULL;
delete p1;
cout<<"the node is deleted";
}
else
p=p->next;
}
}
cout<<"LIST IS EMPTY";
}

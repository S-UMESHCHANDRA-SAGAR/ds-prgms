#include<iostream>
#include<stdlib.h>
using namespace std;
class sull
{
struct stack
{
int data;
struct stack *next;
}*top;
public:
typedef struct stack node;
void push();
int pop();
void display();
sull();
};
sull::sull()
{
top=NULL;
}
int main()
{
sull obj;
int ch,k;
while(1)
{
cout<<"\n\t\tMAIN MENU\n";
cout<<"\n\t1.PUsh\n\t2.pop\n\t3.display\n\t4.exit\n";
cout<<"enter your choice";
cin>>ch;
switch(ch)
{
case 1:obj.push();
break;
case 2:k=obj.pop();
cout<<"\ndeleted element from the queue is :"<<k;
break;
case 3:obj.display();
break;
case 4:exit(0);
default:
cout<<"\n\t enter correct option";
break;
}
}
}
void sull::push()
{
node *temp;
int element;
temp=new node;
cout<<"enter the inserted element int to the stack";
cin>>element;
temp->data=element;
temp->next=top;
top=temp;
}
int sull::pop()
{
int k;
node *p,*q;
p=top;
k=top->data;
q=top;
top=p->next;
free(q);
return(k);
}
void sull::display()
{
node *p;
p=top;
cout<<"\n elements in the stack are\n";
if(top!=NULL)
{
while(p!=NULL)
{
cout<<"->"<<p->data;
p=p->next;
}
}
else
cout<<"QUEUE IS EMPTY";
}

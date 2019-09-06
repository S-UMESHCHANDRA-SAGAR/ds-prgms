#include<iostream>
#include<stdlib.h>
#define max 5
int qa[max];
int rear=-1;
int front=-1;
using namespace std;
class qua
{
public:
void insert();
void del();
void display();
};
int main()
{
qua obj;
int ch;
while(1)
{
cout<<"1.insert\n2.delete\n3.display\n4.quit\n";
cout<<"enter your choice:";
cin>>ch;
switch(ch)
{
case 1:obj.insert();
break;
case 2:obj.del();
break;
case 3:obj.display();
break;
case 4:exit(1);
default:
cout<<"wrong choice\n";
}
}
}
void qua::insert()
{
int added_item;
if(rear==max-1)
cout<<"queue overflow \n";
else
{
if(front==-1)
front=0;
cout<<"input the element for adding in queue:";
cin>>added_item;
rear=rear+1;
qa[rear]=added_item;
}
}
void qua::display()
{
int i;
if(front==-1)
cout<<"queue is empty\n";
else
{
cout<<"queue is :\n";
for(i=front;i<=rear;i++)
cout<<qa[i]<<"\n";
}
}
void qua::del()
{
if(front==-1)
{
cout<<"queue underflow\n";
return;
}
else
{
cout<<"element deleted from queue is"<<qa[front]<<"\n";
front=front+1;
}
}

#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#define MAX 5
int top=-1;
int a[5];
using namespace std;
class sua
{
public:
void push();
void pop();
void display();
};
int main()
{
sua obj;
int ch;
while(1)
{
cout<<"1.push\n2.pop\n3.display\n4.quit\n";
cout<<"enter your choice:";
cin>>ch;
switch(ch)
{
case 1:obj.push();
break;
case 2:obj.pop();
break;
case 3:obj.display();
break;
case 4:exit(1);
break;
default:
cout<<"wrong choice\n";
}
}
}
void sua::push()
{
int pushed_item;
if(top==(MAX-1))
cout<<"stack overflow\n";
else
{
cout<<"enter the item to be oushed in the stack";
cin>>pushed_item;
top=top+1;
a[top]=pushed_item;
}
}
void sua::display()
{
int i;
if(top==-1)
cout<<"stack is empty";
else
{
cout<<"stack element:\n";
for(i=top;i>0;i--)
cout<<a[i]<<"\n";
}
}
void sua::pop()
{
if(top==-1)
cout<<"stack under flow";
else
{
cout<<"popped element:"<<a[top];
top=top-1;
}
}


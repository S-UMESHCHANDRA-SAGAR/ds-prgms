/* write a c program for circular queue*/
#include<iostream>
#include<stdlib.h>
#define max 5
using namespace std;
int cq[max],ele,temp,rear=-1,front=-1,ch;
class Cqueue
{
public:
void insert();
void del();
void display();
};
int main()
{
  Cqueue obj;
   
   while(1)
   {
  cout<<"\n\nenter your choice from following";
   cout<<"\n1.Insertion";
   cout<<"\n2.Deleteion";
   cout<<"\n3.Display";
   cout<<"\n4.Exit";
   cout<<"\nEnter your choice: ";
   cin>>ch;
   switch(ch)
   {
	     case 1:obj.insert();
		     break;
	     case 2:obj.del();
		     break;
	     case 3:obj.display();
		      break;
	     case 4:exit(0);
	     default:cout<<"Invalid choice:\n";
	 }
  }
}
void Cqueue::insert()
{
     if((front==0)&&(rear==max-1)||(front==rear+1))
      {

	 cout<<"\nQueue is overFlow";
	 return;
      }
      else
      {
	    cout<<"enter the elements: ";
	    cin>>ele;
	    if(front==-1)
	    {
	      front=0;
	      rear=0;
	    }
	    else if(rear==max-1)
	    {
	      rear=0;
	      cq[rear]=ele;
	    }
	    else
	    rear=rear+1;
	    }
	    cq[rear]=ele;

    }
void Cqueue:: display()
{
    int i;
    if(rear==-1)
     {
	   cout<<"\n queue is emplty";
	   return;
     }
      else if(front<=rear)
      {
	  cout<<"\n The circular queue elements are:\n";
	    for(i=front;i<=rear;i++)
	    {
	       cout<<"\t"<<cq[i];
	    }
      }
       else
      {
	   cout<<"circular  elements are:";

	   for(i=front;i<=max-1;i++)
	   cout<<"\t"<<cq[i];
	   for(i=0;i<=rear;i++)
	   {
	       cout<<"\t"<<cq[i];
	   }
       }
}
void Cqueue::del()
{

     if(front==-1)
     {
	 cout<<"Underflow";
	 return;
     }
     else


      ele=cq[front];
      if(front==rear)
	 {
	  front=-1;
	  rear=-1;
      }
      else if(front==max-1)
       front=0;
       else
	front++;
	cout<<"The deleted elements is "<<ele;
}


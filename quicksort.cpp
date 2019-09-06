#include<iostream>
using namespace std;
void quicksort(int x[],int lb,int ub)
{
int down,up,pivot,t;
if(lb<ub)
{
down=lb;
up=ub;
pivot=down;
while(down<up)
{
while((x[down]<=x[pivot])&&(down<ub))down++;
while(x[up]>x[pivot])
up--;
if(down<up)
{
t=x[down];
x[down]=x[up];
x[up]=t;
}
}
t=x[pivot];
x[pivot]=x[up];
x[up]=t;
quicksort(x,lb,up-1);
quicksort(x,up+1,ub);
}
}
int main()
{
int n,i;
int list[30];
cout<<"enter no of elements\n";
cin>>n;
cout<<"enter"<<n<<"numbers";
for(i=0;i<n;i++)
cin>>list[i];
quicksort(list,0,n-1);
cout<<"after sorting\n";
for(i=0;i<n;i++)
cout<<list[i]<<endl;
return 0;
}

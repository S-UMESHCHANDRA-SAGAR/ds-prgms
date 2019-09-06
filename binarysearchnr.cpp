#include<iostream>
using namespace std;
int binary_search(int list[],int key,int low,int high);
int main()
{
int n,i,key,list[25],pos;
cout<<"enter no of elements \n";
cout<<"enter"<<n<<"elements in ascending order";
for(i=0;i<n;i++)
cin>>list[i];
cout<<"enter key to search";
pos=mid;
}
cin>>key;
pos=binary_search(list,key,0,n-1);
if(pos==-1)
cout<<"element not found";
else
cout<<"element found at index"<<pos;
}
int binary_search(int list[],int key,int low,int high)
{
int mid,pos=-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==list[mid])
{
pos=mid;
break;
}
else if(key<list[mid])
high=mid-1;
else
 low=mid=1;   
}
return 0;
}


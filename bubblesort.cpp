/*Bubble sort*/
#include<iostream>
using namespace std;
void bubble_sort(int list[30], int n)
{
int temp;
int i,j;
for(i=0;i<n;i++)
for(j=0;j<n-1;j++)
if(list[j]<list[j+1])
{
temp = list[j];
list[j]=list[j+1];
list[j+1]=temp;
}
}
int main()
{
int n,i;
int list[30];
cout<<"Enter no of elments\n";
cin >> n;
cout<<"Enter "<<n<< " numbers\n";
for(i=0;i<n;i++)
cin>>list[i];
bubble_sort(list,n);
cout<<"After sorting\n";
for(i=0;i<n;i++)
cout<<list[i]<<endl;
return 0;
}



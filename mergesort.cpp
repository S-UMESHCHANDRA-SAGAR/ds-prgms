/*Merge sort*/
#include<iostream>
using namespace std;
#define max 15
//template <class T>
void merge(int a[],int l,int m,int u)
{
int b[max];
int i,j,k;
i=l;j=m+1;k=l;
while((i<=m)&&(j<=u))
{
 if(a[i] <= a[j])
 {
  b[k]=a[i];
  ++i;
 }
 else
 {
  b[k]=a[j];
  ++j;
 }
 ++k;
}
 if(i >m)
 {
  while(j <= u)
  { 
    b[k] = a[j];
    ++j;
    ++k;
  }
 }
 else
 {
  while(i<=m)
  {
    b[k]=a[i];
    ++i;
    ++k;
  }
}

for(int r=l;r<=u;r++)
a[r]=b[r];
}
//template <class T>
void mergesort(int a[],int p,int q)
{
 int mid;
 if(p < q)
 {
  mid = (p+q)/2;
  mergesort(a,p,mid);
  mergesort(a,mid+1,q);
  merge(a,p,mid,q);
 }
}
int main()
{
 int n,i;
 int list[30];
 cout<<"Enter no of elemnets\n";
 cin>>n;
cout<<"Enter "<< n <<" numbers\n";
for(i=0;i<n;i++)
cin>>list[i];
mergesort(list,0,n-1);
cout<<"After sorting \n";
for(i=0;i<n;i++)
cout<<list[i]<<endl;
return 0;
}





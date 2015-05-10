#include<iostream>

using namespace std;

int peak(int a[], int st, int en);
int main()
{
  int m,i,arr[1000];
  cout<<"Enter no. of elements: ";
  cin>>m;
  cout<<"Enter the elements"<<endl;
  for(i=0;i<m;i++)
    cin>>arr[i];
  cout<<"The peak is: "<<peak(arr,0,m-1)<<endl;
  return 0;
}

int peak(int a[], int st, int en)
{
  int mid = (st+en)/2;
  if(mid-1>=st && a[mid-1]>a[mid])
    peak(a,st,mid-1);
  else if(mid+1<=en && a[mid+1]>a[mid])
    peak(a,mid+1,en);
  else
    return a[mid];
}

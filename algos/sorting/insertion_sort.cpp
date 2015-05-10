#include<iostream>
using namespace std;
int insertionSort(int aman[], int m);
int swap(int anshi[], int x, int y);
int main()
{
  int i,n,arr[100];
  cout<<"Number of elements: ";
  cin>>n;
  cout<<"Enter the elements"<<endl;
  for(i=0; i<n; i++)
    cin>>arr[i];
  insertionSort(arr, n);
  cout<<"The sorted array is: ";
  for(i=0; i<n; i++)
  cout<<arr[i]<<" ";
  cout<<endl;
  return 0;
}

int insertionSort(int aman[], int m)
{
  int i,j;
  for(i=1; i<m; i++)
    for(j=i;j>0;j--)
      if(aman[j]<aman[j-1])
        swap(aman, j, j-1);
  return 0;
}

int swap(int anshi[], int x, int y)
{
  int temp = anshi[x];
  anshi[x] = anshi[y];
  anshi[y] = temp;
  return 0;
}

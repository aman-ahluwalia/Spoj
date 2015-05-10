#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int quickSort(vector<int>& elem, int start, int end);
int partition(vector<int>& elem, int start, int end);

int main()
{
  int n,i;
  cout<<"Enter number of elements: ";
  cin>>n;
  vector<int> elem(n);
  cout<<"Enter elements"<<endl;
  for(i=0;i<n;i++)
  {
    cin>>elem[i];
  }
  quickSort(elem,0,n-1);
  for(i=0;i<n;i++)
  {
    cout<<elem[i]<<" ";
  }
  cout<<endl;
  return 0;
}

int quickSort(vector<int>& elem, int start, int end)
{
  int fix;
  if(start<end)
  {
    fix = partition(elem, start, end);
    quickSort(elem, start, fix-1);
    quickSort(elem, fix+1, end);
  }
}

int partition(vector<int>& elem, int start, int end)
{
  int i=start-1,pivot = elem[end],j;
  for(j=start;j<end;j++)
  {
    if(elem[j]<pivot)
    {
      i++;
      int temp = elem[j];
      elem[j] = elem[i];
      elem[i] = temp;
    }
  }
  int temp = elem[++i];
  elem[i] = elem[end];
  elem[end] = temp;
  return i;
}

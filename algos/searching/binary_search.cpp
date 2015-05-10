#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int search(vector<int> arr, int start, int end, int find);
int main()
{
  int n,find,pos;
  cout<<"Number of elements: ";
  cin>>n;
  vector<int> arr(n);
  vector<int>::size_type i;
  for(i=0;i<n;i++)
    cin>>arr[i];
  sort(arr.begin(), arr.end());
  cout<<"Value to be searched: ";
  cin>>find;
  pos = search(arr,0,arr.size(),find);
  if(pos==-1)
    cout<<"Sorry!"<<endl;
  else
    cout<<"Element found at position "<<pos+1<<endl;
  return 0;
}

int search(vector<int> arr, int start, int end, int find)
{
  if(start >= end)
    return -1;
  int mid = (start+end)/2;
  if(find == arr[mid])
    return mid;
  return (find>arr[mid] ? search(arr,mid+1,end,find) : search(arr, start, mid,find));
}

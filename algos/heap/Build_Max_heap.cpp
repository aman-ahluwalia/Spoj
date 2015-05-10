#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Max_heapify(vector<int>& heap, int pos);
int Build_Max_Heap(vector<int>& heap);
int main()
{
  int n,i,pos;
  cout<<"Number of Elements: ";
  cin>>n;
  vector<int> heap(n+1);
  for(i=1;i<=n;i++)
    cin>>heap[i];
  Build_Max_Heap(heap);
  for(i=1;i<=n;i++)
    cout<<heap[i]<<" ";
  cout<<endl;
}
int Build_Max_Heap(vector<int>& heap)
{
  int i;
  for(i=heap.size()/2+1;i>0;i--)
    Max_heapify(heap,i);
  return 0;
}
int Max_heapify(vector<int>& heap, int pos)
{
  int i,largest=pos,l=2*pos,r=l+1;
  if(l<=heap.size() && heap[pos]<heap[l])
    largest = l;
  if(r<=heap.size() && heap[largest]<heap[r])
    largest = r;
  if(largest != pos)
  {
    int temp = heap[pos];
    heap[pos] = heap[largest];
    heap[largest] = temp;
    Max_heapify(heap,largest);
  }
  return 0;
}

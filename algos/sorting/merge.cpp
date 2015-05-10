#include<iostream>
#define size 100
using namespace std;
int mergeSort(int A[], int temp[], int start, int end);
int merge(int A[], int temp[], int start, int mid, int end);
int main()
{
    int i,n,arr[size],temp[size];
    cout<<"Enter no. of elements: ";
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0; i<n; i++)
      cin>>arr[i];
    mergeSort(arr,temp,0,n-1);
    for(i=0; i<n; i++)
      cout<<temp[i]<<" ";
    cout<<endl;
    return 0;
}

int mergeSort(int A[], int temp[], int start, int end)
{
	if(start>=end)
	  return 0;
	int mid = (end+start)/2;
	mergeSort(A,temp,start,mid);
	mergeSort(A,temp,mid+1,end);
	merge(A,temp,start,mid,end);
	return 0;
}

int merge(int A[], int temp[], int start, int mid, int end)
{
	int i=start,c=start,j=mid+1;
	while(i<=mid && j<=end)
	{
		if(A[i] <= A[j])
		  temp[c++] = A[i++];
		else
		  temp[c++] = A[j++];
	}
	while(i<=mid)
	  temp[c++] = A[i++];
	while(j<=end)
	  temp[c++] = A[j++];
	for(i=start;i<=end;i++)
	  A[i] = temp[i];
	return 0;
}

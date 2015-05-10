#include<iostream>
#define size 200010
using namespace std;
long long int mergeSort(long long int A[], long long int temp[], long long int start, long long int end);
long long int merge(long long int A[], long long int temp[], long long int start, long long int mid, long long int end);
int main()
{
	long long int i,n,arr[size],temp[size],t;
	cin>>t;
	while(t--)
	{
	  cin>>n;
	  for(i=0; i<n; i++)
	    cin>>arr[i];
      long long int c = mergeSort(arr,temp,0,n-1);
      cout<<c<<endl;
    }
    return 0;
}

long long int mergeSort(long long int A[], long long int temp[], long long int start, long long int end)
{
	long long int inv_count=0;
	if(start>=end)
	  return inv_count;
	long long int mid = (end+start)/2;
	inv_count=mergeSort(A,temp,start,mid);
	inv_count+=mergeSort(A,temp,mid+1,end);
	inv_count+=merge(A,temp,start,mid,end);
	return inv_count;
}

long long int merge(long long int A[], long long int temp[], long long int start, long long int mid, long long int end)
{
	long long int i=start,c=start,j=mid+1,inv_count=0;
	while(i<=mid && j<=end)
	{
		if(A[i] <= A[j])
		  temp[c++] = A[i++];
		else
		{
		  temp[c++] = A[j++];
		  inv_count = inv_count + (mid+1-i);
	    }
	}
	while(i<=mid)
	  temp[c++] = A[i++];
	while(j<=end)
	  temp[c++] = A[j++];
	for(i=start;i<=end;i++)
	  A[i] = temp[i];
	return inv_count;
}

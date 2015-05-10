#include<iostream>
#define si_x 100
#define si_y 100

using namespace std;

int peak(int a[si_x][si_y], int i, int j_st,int j_en);
int max(int A[si_x][si_y], int n, int mid);

int main()
{
  int i,j,n,m,arr[si_x][si_y];
  cout<<"Enter size of array: ";
  cin>>n>>m;
  cout<<"Enter the elements";
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      cin>>arr[i][j];
  int tmp = peak(arr,n,0,m-1);
  cout<<"The peak is: "<<arr[max(arr,i,tmp)][tmp]<<endl;
  return 0;
}

int peak(int a[si_x][si_y], int i, int j_st, int j_en)
{
  int mid = (j_st+j_en)/2;
  int max_i = max(a,i,mid);
  if(mid-1>=j_st && a[max_i][mid]<a[max_i][mid-1])
    mid=peak(a,i,j_st,mid-1);
  else if(mid+1<=j_en && a[max_i][mid]<a[max_i][mid+1])
    mid=peak(a,i,mid+1,j_en);
  return mid;
}

int max(int A[si_x][si_y], int n, int mid)
{
  int x,lar = A[0][mid],pos=0;;
  for(x=1;x<n;x++)
  {
    if(A[x][mid]>lar)
    {
      lar = A[x][mid];
      pos = x;
    }
  }
  return pos;
}


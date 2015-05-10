#include<iostream>
#include<vector>
#include<vector>
using namespace std;
int main()
{
  int j,n,lar=0,i;
  cin>>n;
  vector<int> A(n),B(n);
  for(i=0;i<n;i++)
  {
    cin>>A[i];
    if(A[i] > lar)
      lar = A[i];
  } 
  vector<int> C(lar+1);
  for(i=0;i<lar+1;i++)
  {
    C[i] = 0;
  }
  for(i=0;i<n;i++)
  {
    C[A[i]]++;
  }
  for(i=1;i<lar+1;i++)
  {
    C[i] = C[i] + C[i-1];
  }
  for(i=n-1;i>=0;i--)
  {
    B[C[A[i]]-1] = A[i];
    C[A[i]]--;
  }
  for(i=0;i<n;i++)
    cout<<B[i]<<" ";
  cout<<endl;
  return 0;
}

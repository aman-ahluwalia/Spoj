#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  int j,i,n,d;
  cout<<"Enter number of elements: ";
  cin>>n;
  cout<<"Enter number of digits in a particular number: ";
  cin>>d;
  vector<int> arr(n),A(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  for(j=0;j<d;j++)
  {
    for(i=0;i<n;i++)
      A[i] = arr[i]/pow(10,j);
    vector<int> C(10),B(n);
    for(i=0;i<10;i++)
      C[i] = 0;
    for(i=0;i<n;i++)
      C[A[i]%10]++;
    for(i=1;i<10;i++)
      C[i] = C[i] + C[i-1];
    for(i=n-1;i>=0;i--)
    {
      B[C[A[i]%10]-1] = arr[i];
      C[A[i]%10]--;
    }
    arr = B;
  }
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
  return 0;
}

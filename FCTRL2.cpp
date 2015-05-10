#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,i,j,arr[200];
    cin>>n;
    arr[0] = 1;
    int m=0;
    for(i=1;i<=n;i++)
    {
      int temp = 0;
      for(j=0;j<=m;j++)
      {
        temp = arr[j] * i + temp;
        arr[j] = temp%10;
        temp/=10;
      }
      while(temp!=0)
      {
        arr[++m] = temp%10;
        temp/=10;
      }
    }
    for(i=m;i>=0;i--)
      cout<<arr[i];
    cout<<endl;
  }
  return 0;
}

#include<iostream>
using namespace std;
int main()
{
  int n,i,arr[100010];
  cin>>n;
  while(n!=0)
  {
    for(i=0;i<n;i++)
      cin>>arr[i];
    for(i=0;i<n;i++)
    {
      if(arr[arr[i]-1] != i+1)
        break;
    }
    if(i==n)
      cout<<"ambiguous"<<endl;
    else
      cout<<"not ambiguous"<<endl;
    cin>>n; 
  }
  return 0;
}

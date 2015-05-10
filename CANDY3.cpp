#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    unsigned long long int ans=0,n,i,temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin >> temp;
      ans = (ans+temp)%n;
    }
    if(ans==0)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}

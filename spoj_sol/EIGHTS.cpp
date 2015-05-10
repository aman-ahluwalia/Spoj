#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    unsigned long long int n,ans;
    cin>>n;
    ans = 192 + 250*(n-1);
    cout<<ans<<endl;
  }
  return 0;
}

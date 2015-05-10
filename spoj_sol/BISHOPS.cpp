#include<iostream>
using namespace std;
int main()
{
  long long int n;
  while(true)
  {
    cin>>n;
    if(n==0)
      cout<<0<<endl;
    else if(n==1)
      cout<<1<<endl;
    else
    {
      long long int count = 0;
      while(n>0)
      {
        count += n;
        n = n-2;
      }
      cout<<count<<endl;
    }
  }
  return 0;
}

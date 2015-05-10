#include<iostream>
using namespace std;
int rev(int n)
{
  int res=0;
  while(n>0)
    {
      res = (res*10) +  n%10;
      n /= 10;
    }
  return res;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n1,n2;
    cin>>n1>>n2;
    n1 = rev(n1);
    n2 = rev(n2);
    n1 += n2;
    n1 = rev(n1);
    cout<<n1<<endl;
  }
  return 0;
}

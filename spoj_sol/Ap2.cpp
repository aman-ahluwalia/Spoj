#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int i,a3,l3,sum,n,d;
    cin>>a3>>l3>>sum;
    n = ((sum*2)/(a3+l3));
    d = (l3-a3)/(n-5);
    a3 = a3-(2*d);
    cout<<n<<endl;
    for(i=0;i<n;i++)
      cout<<a3+(i*d)<<" ";
    cout<<endl;
  }
  return 0;
}

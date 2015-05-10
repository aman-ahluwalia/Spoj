#include<iostream>
using namespace std;
long long int power(long long int a, long long int n);
int main()
{
  long long int a,n,res;
  cout<<"Enter number: ";
  cin>>a;
  cout<<"Enter power: ";
  cin>>n;
  res = power(a,n);
  cout<<a<<" to the power "<<n<<" is "<<res<<endl;
  return 0;
}
long long int power(long long int a, long long int n)
{
  if(n==1)
    return a;
  if(n%2==0)
    return power(a,n/2)*power(a,n/2);
  else
    return power(a,(n-1)/2)*power(a,(n-1)/2);
}

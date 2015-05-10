#include<iostream>
#include<math.h>
using namespace std;
double power(double a, double n);
int main()
{
  double a,n,res;
  cout<<"Enter number: ";
  cin>>n;
  a = (1+sqrt(5))/2; 
  res = power(a,n);
  res /= sqrt(5);
  int t=res;
  cout<<t<<endl;
  return 0;
}
double power(double a, double n)
{
  if(n==1.0)
    return a;
  int tmp = n;
  if(tmp%2==0)
    return power(a,n/2)*power(a,n/2);
  else
    return power(a,(n-1)/2)*power(a,(n-1)/2);
}

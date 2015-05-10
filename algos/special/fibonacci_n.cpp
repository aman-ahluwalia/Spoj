#include<iostream>
using namespace std;
int main()
{
  long long int a,n1=0,n2=1,i;
  cout<<"Enter number: ";
  cin>>a;
  if(a<=1)
    n2=0;
  for(i=2;i<a;i++)
  {
    long long int tmp = n2;
    n2 = n1+n2;
    n1 = tmp;
  }
  cout<<n2<<endl;
  return 0;
}

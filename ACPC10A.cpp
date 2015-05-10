#include<iostream>
using namespace std;
int main()
{
  int n1,n2,n3;
  cin>>n1>>n2>>n3;
  while(n1!=0 || n2!=0)
  {
    if(((n2-n1)==(n3-n2)) && (n3-n1)==2*(n2-n1))
      cout<<"AP "<<n3+(n3-n2)<<endl;
    else
      cout<<"GP "<<n3*(float(n3)/n2)<<endl;
    cin>>n1>>n2>>n3;
  }
  return 0;
}

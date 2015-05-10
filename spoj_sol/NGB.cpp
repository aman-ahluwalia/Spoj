#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if((n%20)%10 != 0)
    cout<<1<<endl<<n%20%10<<endl;
  else
    cout<<2<<endl;
  return 0;
}

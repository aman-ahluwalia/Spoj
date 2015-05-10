#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if((n & n-1)!=0)
    cout<<"NIE"<<endl;
  else
    cout<<"TAK"<<endl;
  return 0;
}

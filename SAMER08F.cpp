#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n!=0)
  {
    int count = 0;
    for(;n>0;n--)
      count = count + (n*n);
    cout<<count<<endl;
    cin>>n;
  }
  return 0;
}

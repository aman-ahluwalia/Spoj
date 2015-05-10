#include<iostream>
using namespace std;
int main()
{
  long long int n,num,j;
  cin>>n;
  while(n!=-1)
  {
    num = 1;
    j = 1;
    while(num < n)
      num += ((j++)*6);
    if(num==n)
      cout<<"Y"<<endl;
    else
      cout<<"N"<<endl;
    cin>>n;
  }
  return 0;
}

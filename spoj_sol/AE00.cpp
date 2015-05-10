#include<iostream>
using namespace std;
int main()
{
  int n,count=0,i,j,lim;
  cin>>n;
  if(n%2==0)
    lim = n/2;
  else
    lim = n/2+1;
  for(i=1;i<=lim;i++)
  {
    j=i;
    while(j*i<=n)
    {
      count++;
      j++;
    }
  }
  cout<<count<<endl;
  return 0;
}

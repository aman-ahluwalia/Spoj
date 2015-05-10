#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    if(b==0)
    {
       cout<<1<<endl;
       continue;
    }
    int l=a%10;
    if(l==0 || l==1 || l==5 || l==6)
      cout<<l<<endl;
    else if(l==4 || l==9)
    {
      int temp=b%2;
      if(temp==0)
        cout<<(l*l)%10<<endl;
      else
        cout<<l<<endl;
    }
    else
    {
      int temp=b%4;
      if(temp==0)
        cout<<(l*l*l*l)%10<<endl;
      else if(temp==1)
        cout<<l<<endl;
      else if(temp==2)
        cout<<(l*l)%10<<endl;
      else
        cout<<(l*l*l)%10<<endl;
    }
  }
  return 0;
}

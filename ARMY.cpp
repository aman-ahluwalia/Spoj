#include<iostream>
using namespace std;
int main()
{
  int i,t,ng,nm,x,y;
  cin>>t;
  while(t--)
  {
    cin>>ng>>nm;
    int lar1=0,lar2=0;
    for(i=0;i<ng;i++)
    {
      cin>>x;
      if(x>lar1)
        lar1=x;
    }
    for(i=0;i<nm;i++)
    {
      cin>>x;
      if(x>lar2)
        lar2=x;
    }
    if(lar1>=lar2)
      cout<<"Godzilla"<<endl;
    else
      cout<<"MechaGodzilla"<<endl;
  }
  return 0;
}

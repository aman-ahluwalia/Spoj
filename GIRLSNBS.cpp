#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int g,b;
  cin>>g>>b;
  while(g!=-1)
  {
    if(g==0)
      cout<<b<<endl;
    else if(b==0)
      cout<<g<<endl;
    else if(g==b)
      cout<<1<<endl;
    else if(g>b)
      cout<<ceil((float)g/(b+1))<<endl;
    else if(g<b)
      cout<<ceil((float)b/(g+1))<<endl;
    cin>>g>>b;
  }
  return 0;
}

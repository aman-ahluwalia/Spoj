#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string aman(int n);
int main()
{
  int i,n[] = {137,1315,73,136,255,1384,16385};
  for(i=0;i<7;i++)
  {
    string str = aman(n[i]);
    cout<<n[i]<<"="<<str<<endl;
  }
  return 0;
}
string aman(int n)
{
  if(n==1)
    return "2(0)";
  if(n==2)
    return "2";
  if(n==3)
    return "2+2(0)";
  int j=1;
  string str="";
  bool t=false;
  while(true)
  {
    if(pow(2,j)==n)
    {
      str = str + "2(" + aman(j) + ")";
      break;
    }
    if(pow(2,j)>n)
    {
        str = str + "2(" + aman(j-1) + ")";
        n = n - pow(2,j-1);
        str = str + "+" + aman(n);
        break;
    }
    j++;
  }
  return str;
}

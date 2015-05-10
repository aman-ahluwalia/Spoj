#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int term,n=0,i=1,pos;
    cin>>term;
    while(n<term)
    {
      n=n+i;
      i++;
    }
    i--;
    if(i%2==0)
      pos = term - (n-i);
    else
      pos = n - term + 1;
    cout<<"TERM "<<term<<" IS "<<pos<<"/"<<i-pos+1<<endl;
  }
  return 0;
}

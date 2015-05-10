#include<iostream>
using namespace std;
int main()
{
  string n;
  cin>>n;
  while(n!="0")
  {
    long long int len,i=0,j=2,num[5010],count[5010];
    len = n.length();
    for(;i<len;i++)
      num[len-i-1] = n[i] - '0'; 
    count[0] = 1;
    count[1] = 1;
    for(i=i-2;i>=0;i--)
    {
      long long int temp = 0;
      if(num[i]!=0)
        temp += count[j-1];
      if(num[i+1]*10+num[i]<=26 && num[i+1]!=0)
        temp += count[j-2];
      count[j++] = temp;
    }
    cout<<count[j-1]<<endl;
    cin>>n;
  }
  return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t=10;
  while(t--)
  {
    char a[110];
    scanf("%s",a);
    int i,tot[110],dif[110],len1,len2,temp=0;
    len1=strlen(a);
    for(i=0;i<len1;i++)
      tot[len1-i-1] = a[i] - '0';
    scanf("%s",a);
    len2=strlen(a);
    for(i=0;i<len2;i++)
      dif[len2-i-1] = a[i] - '0';
    if(len1==len2)
    {
      for(i=0;i<len2;i++)
        if(tot[i]!=dif[i])
          break;
      if(i==len2)
      {
        for(i=len1-1;i>=0;i--)
          cout<<tot[i];
        cout<<endl<<0<<endl;
        continue;
      }
    }
    for(i=0;i<len2;i++)
    {
      temp = tot[i]+dif[i]+temp;
      tot[i] = temp%10;
      temp /= 10;
    }
    while(temp!=0 && i<len1)
    {
      temp = tot[i]+temp;
      tot[i] = temp%10;
      temp /= 10;
      i++;
    }
    if(temp != 0)
      tot[(++len1)-1] = temp;
    for(i=len1-1;i>=0;i--)
    {
      temp = tot[i]%2;
      if(temp!=0)
        tot[i-1] += 10;
      tot[i] /= 2;
    }
    i = len1-1;
    while(tot[i]==0){i--;}
    for(;i>=0;i--)
      cout<<tot[i];
    cout<<endl;
    for(i=0;i<len2;i++)
    {
      temp = tot[i] - dif[i];
      if(temp < 0)
      {
        int j = i+1;
        if(tot[j]!=0)
          tot[i+1] -= 1;
        else
        {
          while(tot[j]==0)
            tot[j++] = 9;
          tot[j]--;
        }     
        tot[i] += 10;
      }
      tot[i] = tot[i] - dif[i];
    }
    i = len1-1;
    while(tot[i]==0){i--;}
    for(;i>=0;i--)
      cout<<tot[i];
    cout<<endl;
  }
  return 0;
}

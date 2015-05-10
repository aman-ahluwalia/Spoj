#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    char s1[1000000],s2[1000000],s3[1000000],s4[2],s5[2];
    scanf("%s",s1);
    scanf("%s",s4);
    scanf("%s",s2);
    scanf("%s",s5);
    scanf("%s",s3);
    int i=0,a,b,c;
    while(s1[i]!='\0')
      if(s1[i++]=='m')
        break;
    if (s1[i] != '\0')
    {
      b=atoi(s2);
      c=atoi(s3);
      a=c-b;
      cout<<a<<" + "<<b<<" = "<<c<<endl;
      continue;
    } 
    i=0;
    while(s2[i]!='\0')
      if(s2[i++]=='m')
        break;
    if(s2[i] != '\0')
    {
      a=atoi(s1);
      c=atoi(s3);
      b=c-a;
      cout<<a<<" + "<<b<<" = "<<c<<endl;
      continue;
    }
    cout<<s1<<" + "<<s2<<" = "<<atoi(s1)+atoi(s2)<<endl;
  }
  return 0;
}

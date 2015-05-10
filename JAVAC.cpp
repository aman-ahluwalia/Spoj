#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
  string s;
  while(getline(cin, s))
  {
    string res="";
    int i,j=0,c=0,len = s.length();
    if(s[0]=='_' || (s[0]>='A' && s[0]<='Z') || s[len-1]=='_')
    {
      cout<<"Error!"<<endl;
      continue;
    }
    for(i=0;i<len;i++)
    { 
     
      if(s[i]=='_')
      { 
        c=1;
        if(j==0)
        {
          if(s[i+1]=='_')
          {
            res="Error!";
            break;
          }
          if((s[i+1]>'Z'|| s[i+1]<'A'))
            res += (s[++i]-32);
        }
      }
      else if(s[i]>='A' && s[i]<='Z')
      {
        j=1;
        if(c==0)
        {
          res += '_';
          res += (s[i] + 32);
        } 
      }
      else
        res += s[i];
      if(c!=0 && j!=0)
      {
        res = "Error!";
        break;
      } 
    }
    cout<<res<<endl;
  }
  return 0;
}


#include<iostream>
using namespace std;
int main()
{
  int col;
  cin>>col;
  while(col!=0)
  {
    string s;
    cin>>s;
    string ans = "";
    int i,j,len=s.length();
    int row = len/col;
    for(i=0;i<col;i++)
    {
      for(j=0;j<row;j++)
      {
        if(j%2==0)
          ans += s[j*col+i];
        else
         ans += s[(j*col)+(col-i-1)];
      }
    }
    cout<<ans<<endl;
    cin>>col;
  }
  return 0;
}

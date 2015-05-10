#include<iostream>
#include<vector>
#include<string>
using namespace std;
int aman(string str1, string str2)
{
  size_t found = str1.find(str2);
  int c=0;
  while(found != string::npos)
  {
    c++;
    found = str1.find(str2, found+1);
  }
  cout<<" "<<c;
  return 0;
}
int main()
{
  int p,n;
  cin>>p;
  while(p--)
  {
    cin>>n;
    string str;
    cin>>str;
    cout<<n;
    aman(str,"TTT");
    aman(str,"TTH");
    aman(str,"THT");
    aman(str,"THH"); 
    aman(str,"HTT");
    aman(str,"HTH");
    aman(str,"HHT");
    aman(str,"HHH");
    cout<<endl;
  }
  return 0;
}

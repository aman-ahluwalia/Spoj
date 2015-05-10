#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n1,n2;
    cin>>n1>>n2;
    if((n1-n2==0) || (n1-n2==2))
    {
      if (n1%2==0 && n2%2==0)
        cout << n1+n2 << endl;
      else if (n1%2!=0 && n2%2!=0)
        cout << n1+n2-1 << endl;
      else
        cout << "No Number" << endl;
    }
    else
      cout << "No Number" << endl;
  }
  return 0;
}

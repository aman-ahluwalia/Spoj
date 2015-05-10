#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  long double x = 1.000000000000000000000000;
  int t=30;
  while(t--)
  {
    x = (x + (2/x))/2;
  }
  cout<<setprecision(300)<<x<<endl;
}

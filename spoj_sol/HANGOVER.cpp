#include<iostream>
using namespace std;
int main()
{
  float n;
  cin>>n;
  while(n!=0.00)
  {
    float temp = 0.00;
    int c=2;
    while(n>temp)
      temp += (1.0/c++);
    cout<<c-2<<" card(s)"<<endl;
    cin>>n;
  }
  return 0;
}

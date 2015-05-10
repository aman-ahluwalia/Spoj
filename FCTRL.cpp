#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int i=1,count=0;
    while(true)
    {
      int temp = (n/pow(5,i));
      if(temp>=1)
        count += temp;
      else
        break;
      i++;
    }
    cout<<count<<endl;
  }
  return 0;
}

#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n!=0)
  {
    float ans = (n*n)/(M_PI*2);
    printf("%.2f\n",ans); 
    cin>>n;
  }
  return 0;
}

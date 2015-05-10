#include<iostream>
#include<algorithm>
typedef unsigned long long ull;
using namespace std;
int main()
{
  int n,i,j,k;
  ull count;
  n=1001;
  ull *T = (ull*)malloc(n*sizeof(ull));
  *(T+0) = 1;
  for(i=1;i<n;i++)
  {
    k = i-1;
    count = 0;
    for(j=0;j<=k;j++)
    {
      count += (*(T+j) * *(T+(k-j)));
    }
    *(T+i) = count%1000000;
  }
  cin>>n;
  while(n!=0)
  {
    cout<<*(T+n)<<endl;
    cin>>n;
  }
  return 0;
}

#include<iostream>
#include<algorithm>
typedef unsigned long long ull;
using namespace std;
int main()
{
  int n,i,j,k;
  ull count;
  cout<<"Enter the number of catalan numbers u want: ";
  cin>>n;
  ull *T = (ull*)malloc(n*sizeof(ull));
  *(T+0) = 1;
  cout<<"1"<<endl;
  for(i=1;i<n;i++)
  {
    k = i-1;
    count = 0;
    for(j=0;j<=k;j++)
    {
      count += (*(T+j) * *(T+(k-j)));
    }
    *(T+i) = count;
    cout<<count<<endl;
  }
  return 0;
}

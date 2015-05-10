#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maximum_separation(vector<int> barn, int c);
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int i,n,c;
    cin>>n>>c;
    vector<int> barn(n);
    for(i=0;i<n;i++)
      cin>>barn[i];
    n = maximum_separation(barn, c);
    cout<<n<<endl;
  }
  return 0;
}
int maximum_separation(vector<int> barn, int c)
{
  sort(barn.begin(), barn.end());
  int n = barn.size();
  int lo=0,hi=barn[n-1]-barn[0]+1;
  while((hi-lo)>1)
  {
    int x=lo+(hi-lo)/2;
    int i,cows=1,placed = barn[0];
    for(i=1;i<n;i++)
    {
      if(barn[i]-placed >= x)
      {
        placed = barn[i];
        if(++cows==c)
          break;
      }
    }
 //   cout<<lo<<x<<hi<<c<<endl;
    if(cows>=c)
      lo = x;
    else
      hi = x;
  }
  return lo;
}

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int t,mor,n,i,j=0,arr[1010];
  cin>>t;
  while(j<t)
  {
    cin>>mor>>n;
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=n-1;i>=0;i--)
    {
      if(mor<=0)
        break;
      else
        mor -= arr[i];
    }
    cout<<"Scenario #"<<j+1<<":"<<endl;
    if(i<0 && mor>0)
      cout<<"impossible";
    else
    cout<<n-i-1;
    cout<<endl<<endl;
    j++;
  }
  return 0; 
}

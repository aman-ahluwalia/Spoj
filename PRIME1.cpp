#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int start,end;
    cin>>start>>end;
    if(start<2)
      start=2;
    int arr[31623];
    int sq_root,i,j;
    sq_root = sqrt(end)+1;
    for(i=0;i<sq_root;i++)
      arr[i] = 1;
    for(i=2;i<=sq_root;i++)
    {
      if(arr[i] == 0)
        continue;
      for(j=2;j*i<=sq_root;j++)
        arr[j*i] = 0;
    }
    j = 0;
    for(i=2;i<=sq_root;i++)
    {
      if(arr[i]==1)
        arr[j++] = i;
    }
    arr[j] = -1;
    for(i=start;i<=end;i++)
    {
      j = 0;
      while(arr[j]!=-1)
      {
        if(arr[j] == i)
        {
          cout<<i<<endl;
          break;
        }
        if(i%arr[j]==0)
          break;
        j++;
      }
      if(arr[j] == -1)
        cout<<i<<endl;
    }
    cout<<endl;
  }
  return 0;
}

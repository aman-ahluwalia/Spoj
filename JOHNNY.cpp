#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  long long int n,i,temp;
  vector<long long int> list;
  cin>>n; 
  for(i=0;i<n;i++)
  {
    cin>>temp;
    list.push_back(temp);
  }
  sort(list.begin(),list.end(),list);
  vector<long long int>::iterator it;
  for(it = list.begin(); it != list.end() ; i++)
    cout<<*it<<" ";
  return 0;
}

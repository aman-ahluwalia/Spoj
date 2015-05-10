#include<iostream>
#include<algorithm>
using namespace std;
int levenshteinDistance(string s, int len_s, string t, int len_t);
int main()
{
  string s,t;
  int len_s,len_t,count,n;
  cin>>n;
  while(n--)
  {  
    cin>>s>>t;
    len_s = s.length();
    len_t = t.length();
    count = levenshteinDistance(s,len_s,t,len_t);
    cout<<count<<endl;
  }
  return 0;
}
int levenshteinDistance(string s, int len_s, string t, int len_t)
{
  int cost=0,j,i,m=len_s+1,n=len_t+1;
  int *T = (int*)malloc(m*n*sizeof(int));
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      *(T + i*n + j) = -1;
  for(i=0;i<m;i++)
    *(T + i*n) = i;
  for(j=0;j<n;j++)
    *(T + j) = j;
  for(i=1;i<m;i++)
  {
    for(j=1;j<n;j++)
    {
      int a,tmp = 1;
      if(s[i-1] == t[j-1])
        tmp=0;
      a = min(*(T + i*n + j-1)+1 , *(T + (i-1)*n + j)+1);
      *(T + i*n + j) = min(a , *(T + (i-1)*n + (j-1))+tmp);
    }
  }
  cost = *(T + m*n -1);
  free(T);
  return cost; 
}

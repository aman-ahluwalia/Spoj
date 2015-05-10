#include<iostream>
#include<algorithm>
using namespace std;

int levenshteinDistance(string s, int len_s, string t, int len_t);

int main()
{
  string s,t;
  int len_s,len_t,count;
  cout<<"Enter the two words:"<<endl;
  cin>>s>>t;
  len_s = s.length();
  len_t = t.length();
  count = levenshteinDistance(s,len_s,t,len_t);
  cout<<count<<endl;
  return 0;
}

int levenshteinDistance(string s, int len_s, string t, int len_t)
{
  if(s==t)
    return len_s;
  if(len_s==0)
    return len_t;
  if(len_t==0)
    return len_s;
  int cost=1;
  if(s[len_s-1]==t[len_t-1])
    cost=0;
  int a= min(levenshteinDistance(s, len_s-1, t, len_t)+1,
             levenshteinDistance(s, len_s, t, len_t-1)+1);
  return min(a,levenshteinDistance(s, len_s-1, t, len_t-1)+cost);
}

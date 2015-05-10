#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <stdarg.h>
 
using namespace std;

#define gc getchar_unlocked
#define black ios_base::sync_with_stdio(0);cin.tie(0);

void a_scan(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

int main()
{
  black
  int n,k,x,count=0;
  a_scan(n);
  a_scan(k);
  while(n>0)
  {
    a_scan(x);
    if(x%k==0)
      count++;
    n--;
  }
  cout<<count<<endl;
  return 0;
}

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
  int n,i,stack[1010],m,temp,sm;
  a_scan(n);
  while(n!=0)
  {
    m=0;sm=1;
    for(i=0;i<n;i++)
    {
      a_scan(temp);
      if(temp!=sm)
        stack[m++] = temp;
      else
      {
        sm++;
        while(m>0 && stack[m-1]==sm)
        { 
          m--;
          sm++;
        }
      }
    }
    while(m-->0)
    {
      if(stack[m]==sm)
        sm++;
      else
        break;
    }
    if(m<0)
      cout<<"yes"<<endl;
    else
      cout<<"no"<<endl;
    a_scan(n);
  }
  return 0;
}

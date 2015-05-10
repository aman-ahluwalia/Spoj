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
#define pc(x) putchar_unlocked(x);
//#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

void a_scan(long long int &x)
{
    register long long int c = gc();
    x = 0;
    long long int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}


inline void a_print (long long int n)
{
    long long int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); pc('\n'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
	while (count--) pc('0');
}
int main()
{	
  long long int t,n,m,i,count;
  a_scan(t);
  while(t--)
  {
    a_scan(n);
    count = 1;
    m=n/2;
    for(i=2;i<=m;i++)
    {
      
      if(n%i==0)
        count += i;
    }
    a_print(count);
    printf("\n");
  }      
  return 0;
}


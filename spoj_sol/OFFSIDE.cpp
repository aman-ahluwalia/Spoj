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


inline void a_print (int n)
{
    int N = n, rev, count = 0;
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
  int n1,n2,i;
  a_scan(n1);a_scan(n2);
  while(n1!=0 || n2!=0)
  {
    int temp,j=0,sm = 1000000;
    for(i=0;i<n1;i++)
    { 
      a_scan(temp);
      if(temp<sm)
        sm=temp;
    }
    for(i=0;i<n2;i++)
    {
      a_scan(temp);
      if(temp <= sm)
        j++;
    }
    if(j>=2)
      cout<<"N"<<endl;
    else
      cout<<"Y"<<endl;
    a_scan(n1);a_scan(n2);
  }	
  return 0;
}


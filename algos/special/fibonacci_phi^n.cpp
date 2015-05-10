#include<iostream>
#include<map>
using namespace std;

unsigned long long int fibo(int n);

int main()
{
  int n;
  unsigned long long int res;
  cout<<"Enter digit of the fibonacci sequence you are interested in: ";
  cin>>n;
  res=fibo(n);
  cout<<res<<endl;
  return 0;
}

unsigned long long int fibo(int n)
{
  static map<int, unsigned long long int> memo;
  if(n==0)
    return 0;
  if(n==1)
    return 1;
  if(memo.count(n) > 0)
    return memo[n];
  long long int tmp = fibo(n-1)+fibo(n-2);
  memo[n] = tmp;
  return tmp;
}

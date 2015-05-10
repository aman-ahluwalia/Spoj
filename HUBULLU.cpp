#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int process(list<int> aman);
int main()
{
  int t,n,i;
  cin>>t;
  while(t--)
  {
  cin>>n;
  list<int> aman;
  for(i=0;i<n;i++)
    aman.push_back(i+1);
  cin>>i;
  n = process(aman);
  if(n%2==0)
  {
    if(i==0)
      cout<<"Pagfloyd wins."<<endl;
    else
      cout<<"Airborne wins."<<endl;
  }
  else
  {
    if(i==0)
      cout<<"Airborne wins."<<endl;
    else
      cout<<"Pagfloyd wins."<<endl;
  }
  aman.clear();
  }
  return 0;
}
int process(list<int> aman)
{
  int i,j,anshi=0,count,lar=0,last_count=0;
  int n = aman.size();
  while(n > 0)
  {
    anshi++;
    last_count=0;
    list<int>::iterator it1 = aman.begin();
    for(i=0;i<n;i++)
    { 
      list<int>::iterator it2 = aman.begin();
      count=0;
      if(*it1 != -1)
      {
        for(j=0;j<n;j++)
        {
          if(*it2!=-1  && i!=j)
          {
            if(*it1 % *it2 == 0)
              count++;
          } 
          it2++;
        }
        if(count>last_count)
        {
          lar = i;
          last_count = count;
        }
      }
      it1++;
    }
    if(last_count==0)
    {
      anshi += (n-1);
      break;
    }
    list<int>::iterator t = aman.begin();
    advance(t,lar);
    lar = *t;
    list<int>::iterator it = aman.begin(); 
    for(i=0;i<n;i++)
    {
      if(lar % *it==0)
      {
        *it = -1;
      }
      it++;
    }
    n = aman.size();
  }
  return anshi;
}

#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
  int pack;
  cin>>pack;
  while(pack!=-1)
  {
    int i,candy[10010],tot=0;
    for(i=0;i<pack;i++)
    {
      cin>>candy[i];
      tot += candy[i];
    }
    if(tot%pack != 0)
    	cout<<-1<<endl;
    else
    {
    	int avg = tot/pack;
    	tot = 0;
    	for(i=0;i<pack;i++)
    	{
    		tot += abs(candy[i]-avg);
    	}
    	cout<<tot/2<<endl;
    }
  	cin>>pack;
  }  
  return 0;
}
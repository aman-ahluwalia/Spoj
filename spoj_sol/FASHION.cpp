#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t>0)
	{
		int n;
		cin>>n;
		int i,men_rat[1010],fem_rat[1010];
		for(i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			men_rat[i] = temp;
		}
		for(i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			fem_rat[i] = temp;
		}
		sort(men_rat,men_rat+n);
		sort(fem_rat,fem_rat+n);
		int hot = 0;
		for(i=0;i<n;i++)
			hot += (men_rat[i]*fem_rat[i]);
		cout<<hot<<endl;
		t = t-1;
	}
	return 0;
}
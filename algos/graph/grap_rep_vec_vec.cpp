#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int construct(vector< vector<int> >& adjacency);
int display(vector< vector<int> >& adjacency);

int main()
{
  int n;
  cout<<"Enter number of vertices: ";
  cin>>n;
  vector< vector<int> > adjacency(n);
  construct(adjacency);
  display(adjacency);
  return 0;
}

int construct(vector< vector<int> >& adjacency)
{
  vector< vector<int> >::size_type i;
  for(i=0; i < adjacency.size(); i++)
  {
    int temp;
    cout<<"Enter "<< i+1<< " vertex: ";
    cin>>temp;
    adjacency[i].push_back(temp);
    cout<<"Enter adjacent vertices to vertex "<< adjacency[i][0]<< endl;
    cin>>temp;
    while(temp!=-1)
    {
      adjacency[i].push_back(temp);
      cin>>temp;
    }
  }
  return 0;
}

int display(vector< vector<int> >& adjacency)
{
  cout<<"Desired Adjacency list is"<<endl;
  vector< vector<int> >::size_type i;
  for(i=0; i<adjacency.size(); i++)
  {
    vector<int>::size_type j;
    for(j=0; j<adjacency[i].size(); j++)
      cout<< adjacency[i][j] <<" ";
    cout<<endl;
  }
  return 0;
}



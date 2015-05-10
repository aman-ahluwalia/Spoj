#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int construct(vector< vector<int> >& adjacency);
int dfs(vector< vector<int> >& adjacency);
int dfs_visit(vector< vector<int> >& adjacency, vector<int>& parent, int s);

int main()
{
  int n;
  cout<<"Enter number of vertices: ";
  cin>>n;
  vector< vector<int> > adjacency(n);
  construct(adjacency);
  dfs(adjacency);
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

int dfs(vector< vector<int> >& adjacency)
{
  int i,len = adjacency.size();
  vector<int> parent(len);
  for(i=0;i<len;i++)
  {
    if(find(parent.begin(), parent.end(), adjacency[i][0]) == parent.end())
    {
      dfs_visit(adjacency, parent, i);
      cout<<endl;
    }
  }
  return 0;
}

int dfs_visit(vector< vector<int> >& adjacency, vector<int>& parent, int s)
{
  int i,j, len=adjacency[s].size(),len_m=adjacency.size();
  for(i=0;i<len;i++)
  {
    if(find(parent.begin(),parent.end(),adjacency[s][i]) == parent.end())
    {
      cout<<adjacency[s][i]<<" ";
      parent.push_back(adjacency[s][i]);
      for(j=0;j<len_m;j++)
        if(adjacency[s][i] == adjacency[j][0])
        {
          dfs_visit(adjacency, parent,j);
          break;
        } 
    }
  } 
  return 0;
}

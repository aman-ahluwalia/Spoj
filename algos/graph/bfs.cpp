#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int construct(vector< vector<int> >& adjacency);
int bfs(vector< vector<int> >& adjacency, int s);
int display(vector< vector<int> >& adjacency);

int main()
{
  int n,s;
  cout<<"Enter number of vertices: ";
  cin>>n;
  vector< vector<int> > adjacency(n);
  construct(adjacency);
  cout<<"Start vertex: ";
  cin>>s;
  bfs(adjacency, s);
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

int bfs(vector< vector<int> >& adjacency, int s)
{
  vector<int> frontier,traverse;
  frontier.push_back(s);
  vector< vector<int> >::size_type i;
  int c=1;
  traverse.push_back(s);
  cout<<"Level 0: "<<s; 
  while(frontier.size()>0)
  {
    for(i=0; i<adjacency.size(); i++)
    {
      if(adjacency[i][0] == frontier[0])
        break;
    }
    frontier.erase(frontier.begin());
    vector<int>::size_type j;
    bool aman=true;
    for(j=0; j<adjacency[i].size(); j++)
    {
      if(find(traverse.begin(),traverse.end(),adjacency[i][j]) == traverse.end())
      {
        if(aman)
          cout<<endl<<"Level "<<c++<<": ";
        aman = false;
        cout<<adjacency[i][j]<<" ";
        traverse.push_back(adjacency[i][j]);
        frontier.push_back(adjacency[i][j]);
      }
    }   
  }
  cout<<endl;
  return 0;
}



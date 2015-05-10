#include<iostream>
using namespace std;
int calc(vector< vector<int> > matrix, int n);
int main()
{
  int n;
  cout<<"Enter number: ";
  cin>>n;
  vector< vector<int> > matrix(2);
  matrix[0].push_back(1);
  matrix[0].push_back(1);
  matrix[1].push_back(1);
  matrix[1].push_back(0);
  n = calc(matrix, n);
  cout<<n<<endl;
  return 0;
}
int calc(vector< vactor<int> > matrix, int n)
{
  if(n==1)
    return 
}

#include<iostream>
#include<algorithm>
using namespace std;

struct node
{
  int val;
  struct node* next;
};
typedef struct node node;

node* graph(int n);
int adjacent(node* T, int i);
int display(node* T, int n);

int main()
{
  int n;
  cout<<"Enter number of nodes: ";
  cin>>n;
  node* T = graph(n);
  display(T,n);
  return 0;
}

node* graph(int n)
{
  node *T = (node*)malloc(n*sizeof(node));
  int i;
  for(i=0;i<n;i++)
    adjacent(T,i);
  return T;
}

int adjacent(node* T, int i)
{
  cout<<"Enter "<<i+1<<" vertex: ";
  cin>>(T+i)->val;
  cout<<"Enter vertices adjacent to vertex "<<i+1<<" and -1 if no more vertices adjacent to given vertex."<<endl;
  int temp = 0;
  node* head=T+i;
  cin>>temp;
  while(temp!=-1)
  {
    node *el = (node*)malloc(1*sizeof(node));
    el->val = temp;
    head->next = el;
    head = el;
    cin>>temp;
  }
  head->next = NULL;
  return 0;
}

int display(node* T, int n)
{
  int i;
  node* head;
  for(i=0;i<n;i++)
  {
    head = T+i;
    cout<<head->val;
    head = head->next;
    while(head!=NULL)
    {
      cout<<" => "<<head->val;
      head = head->next;
    }
    cout<<endl;
  }
  return 0;
}

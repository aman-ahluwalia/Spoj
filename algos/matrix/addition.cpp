#include<iostream>
#include<array>
using namespace std;
int input(array< array<int col>, row >& matrix, row, col);
int main()
{
  int row,col,i,j;
  cout<<"Number of rows: ";
  cin>>row;
  cout<<"Number of columns: ";
  cin>>col;
  array< array<int col>, row > matrix1,matrix2,matrix3;
  cout<<"Enter elements of first matrix"<<endl;
  input(matrix1, row, col);
  cout<<"Enter elements of second matrix"<<endl;
  input(matri2, row, col);
  add(matrix3,matrix1, matrix2, row, col);
  print(matrix3, row, col);
  return 0;
}

#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{
  int t;
  double a,b,c,R,med_st,med_rit,med_lef,area,orth_cent;
  cin>>t;
  while(t--)
  {
    cin>>a>>med_st>>med_rit>>med_lef;
    area = (3.0*((1/2.0) * a * med_st));
    printf("%.3lf ",area);
    if(med_st==med_lef && med_lef==med_rit)
    {
      printf("0.000\n");
      continue;
    }
    b = (2.0*area)/(med_rit*3.0);
    c = (2.0*area)/(med_lef*3.0);
    R = (a*b*c)/(4.0*area);
    orth_cent = (2.0/3.0) * sqrt((9.0*R*R) - (pow(a,2)+pow(b,2)+pow(c,2)));
    printf("%.3lf\n",orth_cent);
  }
  return 0;
}

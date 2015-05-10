#include<iostream>
#include<math.h>

using namespace std;

int seiveOfErastosthenes(int n);
int markNonPrimes(int arr[], int i, int n);

int main()
{
    int n;
    cin>>n;
    seiveOfErastosthenes(n);
    return 0;
}

int seiveOfErastosthenes(int n)
{
    int arr[1000000],i,s;
    for(i=2; i<=n; i++)
        arr[i] = true;
    s = sqrt(n);
    for(i=2; i<=n; i++)
    {
        if(arr[i] == true)
        { 
             cout<<i<<endl;
             if(i<=s)
                 markNonPrimes(arr, i, n);
        }
    }
    return 0;
}

int markNonPrimes(int arr[], int i, int n)
{
    int j=2,p;
    p = j*i;
    for(; p<=n; j++,p=j*i)
    {
        arr[p] = false;
    }
    return 0;
}


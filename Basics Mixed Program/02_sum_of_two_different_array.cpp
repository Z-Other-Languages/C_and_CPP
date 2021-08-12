// sum of two different array
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int ar1[n], ar2[n];
    int sum[n]; 

    for (int i=0; i<n; i++)
    {
        cin>> ar1[i];
    }
    for (int i=0; i<n; i++)
    {
        cin>> ar2[i];

        sum[i] =0;
    }

    for (int i=0; i<n; i++)
    {
        sum[i] = ar1[i] + ar2[i];

        cout<< sum[i] << " " ;
    }

    


}
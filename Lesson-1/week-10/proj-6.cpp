#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n=0, m=0,l=0;
    cin >> n >> m;
    int a[100];
    for (int j=0; j<n; j++)
    {
        cin >> a[j];
    }
    int temp1=a[0], temp2=0;
    for (int i=0;i<n;i++)
    {
        l += m;
        if (l>n-1)
        {
            l = l-n;
        }
        temp2 = a[l];
        a[l] = temp1;
        temp1 = temp2;
    }
    for (int k=0; k<n; k++)
    {
        cout << a[k] << ' ';
    }
    return 0;
}
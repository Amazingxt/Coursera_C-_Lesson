#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n=0, k=0, temp=0;
    int a[1000];
    cin >> n >> k;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for (int i=0;i<n-1;i++)
    {
        for (int j=1;j<n;j++)
        {
            if ((a[i]+a[j])==k)
            {
                cout << "yes" << endl;
                temp = 1;
                break;
            } 
        }
        if (temp==1)
        break;
    }
    if (temp==0)
    cout << "no" << endl;
    return 0;
}
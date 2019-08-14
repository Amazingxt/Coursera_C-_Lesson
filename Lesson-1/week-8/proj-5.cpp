#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n=0, a[100];
    cin >> n;
    for (int i=10; i<=n;i++)
    {
        if (i%(i/10 + (i-i/10*10))==0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    while (true)
    {
        int n=0, result=0;
        cin >> n;
        int a[15000];
        if (n==0)
        break;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for (int j=0; j<n-1; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                int temp=0; 
                if (a[j-1]>a[j])
                {
                    temp = a[j-1];
                    a[j-1] = a[j];
                    a[j] = temp;
                }
            }
        }
        if (n%2!=0)
        result = a[n/2];
        else
        result = (a[n/2-1]+a[n/2])/2;

        cout << result << endl;
    }
    return 0;
}

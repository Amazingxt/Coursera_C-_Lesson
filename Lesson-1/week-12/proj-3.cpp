#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double a[100][2], dis=0;
    for (int i=0; i<n; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }
    for (int j=0; j<n-1; j++)
    {
        for (int k=j+1; k<n; k++)
        {
            if (dis<sqrt(pow(a[j][0]-a[k][0],2) + pow(a[j][1]-a[k][1],2)))
            {
                dis = sqrt(pow(a[j][0]-a[k][0],2) + pow(a[j][1]-a[k][1],2));
            }
        }
    }
    cout << fixed << setprecision(4) << dis << endl;
    return 0;
}
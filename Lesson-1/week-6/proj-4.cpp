#include <iostream>
using namespace std;

int main()
{
    int a[6];
    for (int i=0;i<6;i++)
    {
        cin >> a[i];
    }
    int max=1, min=100;
    for (int i=0;i<6;i++)
    {
        if ((a[i]%2==0) && (a[i]<min))
        min = a[i];
        else if ((a[i]%2==1) && (a[i]>max))
        max = a[i];
    }
    int result;
    if (max > min)
    result = max - min;
    else
    result = min - max;
    cout << result << endl;
    return 0;
}
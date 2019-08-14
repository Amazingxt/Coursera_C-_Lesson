#include <iostream>
using namespace std;

int main()
{
    int a[6], sum=0;
    cin >> a[0];
    for (int i=1; i<6;i++)
    {
        cin >> a[i];
        if (a[i]<a[0])
        {
            sum += a[i];
        }
    }
    cout << sum << endl;
    return 0;
}
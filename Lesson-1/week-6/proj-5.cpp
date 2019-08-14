#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[3];
    cin >> n;
    for (int i=0;i<3;i++)
    {
        a[0] = n/100;
        a[1] = n%100/10;
        a[2] = n%100%10;
    }
    for (int i=0;i<3;i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
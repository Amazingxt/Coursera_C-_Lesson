#include <iostream>
using namespace std;

int main()
{
    int n, a[100];
    cin >> n;
    int flag=0;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        if (a[i]==i)
        {
            flag=1;
            cout << a[i] << endl;
            break;
        }
    }
    if (flag==0)
    {
        cout << 'N' << endl;
    }
    return 0;
}
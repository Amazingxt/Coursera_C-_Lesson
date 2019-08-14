#include <iostream>
using namespace std;

int main()
{
    int n, k, a[100];
    cin >> n >> k;

    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for (int i=0; i<n-1; i++)
    {
        for (int j=1; j<n-i; j++)
        {
            int temp;
            if (a[j-1]<a[j])
            {
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << a[k-1] << endl;
    return 0;

}
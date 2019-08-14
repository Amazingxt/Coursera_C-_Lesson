#include <iostream>
using namespace std;

int a[100];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (n--)
    {
        cout << a[n];
        {
            cout << " ";
            // 如果不是最后一个数那么就要用空格分隔开
        }
    }
    return 0;
}
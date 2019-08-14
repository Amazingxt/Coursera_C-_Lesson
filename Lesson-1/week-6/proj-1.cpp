#include <iostream>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int result;
    if (y%x == 0)
    result = n - (y / x);
    else
    result = n - (y / x + 1);
    if (result < 0)
    result = 0;
    cout << result << endl;
    return 0;
}
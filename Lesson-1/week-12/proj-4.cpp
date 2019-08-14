#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int m=0, n=0, result=0;
    char symble;
    cin >> m >> n >> symble;
    switch (symble)
    {
        case '+':
        result = m+n;
        break;
        case '-':
        result = m-n;
        break;
        case '*':
        result = m*n;
        break;
        case '/':
        {
            if (n==0)
            {
                cout << "Divided by zero!" << endl;
                return 0;
            }
            else
            result = m/n;
        }
        break;
        default:
        {
            cout << "Invalid operator!" << endl;
            return 0;
        }
    }
    cout << result << endl;
    return 0;

}

#include <iostream>
using namespace std;

int main()
{
    int k, flag=0;
    int m=0;
    cin >> m >> k;
    int number=m;
    while (m!=0)
    {
        if (m%10==3)
        flag++;
        m = m/10;
    }
    if (flag==k && number%19==0)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
    return 0;


}
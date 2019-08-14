#include <iostream>
using namespace std;

void F(int x)
{
    if (x==1)
    {
        cout << "End" << endl;
    }

    else if (x%2!=0)
    {
        cout << x << "*3" << "+1=" << (x*3+1) << endl;
        F(x*3+1);
    }
    else if (x%2==0)
    {
        cout << x << "/2=" << (x/2) << endl;
        F(x/2);
    }
}


int main()
{
    int x;
    cin >> x;
    F(x);
    return 0;
}
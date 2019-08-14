#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n=0, k=0;
    while (cin >> n >> k)
    {   
        int year=0, judge=0;
        for (float i=1;i<=20;i++)
        {
            if ((n*i)>=(200*pow((1+k*0.01),(i-1))))
            {
                year = i;
                judge++;
                break;
            }
        }
        if (judge==0)
        {
            cout << "Impossible" << endl;
        }
        else
        {
            cout << year << endl;
        }

    }
}
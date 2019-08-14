#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    float y1=0, y19=0, y36=0,y60=0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i]>0) && (a[i]<19))
        {
            y1++;
        }
        else if ((a[i]>18) && (a[i]<36))
        {
            y19++;
        }
        else if ((a[i]>35) && (a[i]<61))
        {
            y36++;
        }
        else if (a[i]>60)
        {
            y60++;
        }
    }

    cout << "1-18: " << fixed << setprecision(2) << y1/n*100 << "%" << endl;
    cout << "19-35: " << fixed << setprecision(2) << y19/n*100 << "%" << endl;
    cout << "36-60: " << fixed << setprecision(2) << y36/n*100 << "%" << endl;
    cout << "60-: " << fixed << setprecision(2) << y60/n*100 << "%" << endl;
    return 0;
}
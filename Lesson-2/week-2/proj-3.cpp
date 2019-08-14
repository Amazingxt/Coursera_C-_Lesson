#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a1, a2;
    float A=0, B=0, C=0;
    float one=0, two=0, three=0;
    float a[1000] = {0};
    char c[1000] = {'\0'};
    for (int j=0; j<3; j++)
    {
        cin >> a1;
        cin >> a2;
        for (int i=0; i<a2; i++)
        {
            
            cin >> c[i] >> a[i];
            if (a1==1)
            one += a[i];
            if (a1==2)
            two += a[i];
            if (a1==3)
            three += a[i];
            if (c[i]=='A')
            A += a[i];
            if (c[i]=='B')
            B += a[i];
            if (c[i]=='C')
            C += a[i];
        }

    }
    cout << fixed << setprecision(2);
    cout << "1 " << one << endl;
    cout << "2 " << two << endl;
    cout << "3 " << three << endl;
    cout << "A " << A << endl;
    cout << "B " << B << endl;
    cout << "C " << C << endl;

    return 0;    

}
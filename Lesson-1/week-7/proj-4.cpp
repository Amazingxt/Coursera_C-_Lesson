#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int y100=0, y50=0, y20=0, y10=0, y5=0, y1=0;
    y100 = n/100;
    y50 = (n-y100*100) / 50;
    y20 = (n-y100*100-y50*50) / 20;
    y10 = (n-y100*100-y50*50-y20*20) / 10;
    y5 = (n-y100*100-y50*50-y20*20-y10*10) / 5;
    y1 = (n-y100*100-y50*50-y20*20-y10*10-y5*5) / 1;
    cout << y100 << endl;
    cout << y50 << endl;
    cout << y20 << endl;
    cout << y10 << endl;
    cout << y5 << endl;
    cout << y1 << endl;
    return 0;
}
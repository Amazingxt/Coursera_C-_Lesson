#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    char str[5][5];
    for (int i=0; i<5;i++)
    {
        for (int j=0; j<5;j++)
        {
            cin >> str[i][j];
        }
    }

    int m=0,n=0; 
    cin >> n >> m;
    if ((n>4)||(m>4)||(m<0)||(n<0))
    {
        cout << "error" << endl;
    }
    else 
    {
        char a[5];
        for (int k=0;k<5;k++)
        {
            a[k] = str[n][k];
            str[n][k] = str[m][k];
            str[m][k] = a[k];
        }

        for (int h=0; h<5; h++)
        {
            for (int l=0; l<5; l++)
            {
                cout << setw(4) << str[h][l];
            }
            cout << endl;
        }

    }

    return 0;
}
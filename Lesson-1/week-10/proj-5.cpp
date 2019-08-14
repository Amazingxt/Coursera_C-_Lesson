#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int str[100][100];
    int flag=0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin >> str[i][j];
        }
    }
    for (int k=1; k<n-1; k++)
    {
        for (int l=1; l<n-1; l++)
        {
            if ((str[k-1][l]-str[k][l]>=50)&&(str[k+1][l]-str[k][l]>=50)&&\
            (str[k][l-1]-str[k][l]>=50)&&(str[k][l+1]-str[k][l]>=50))
            {
                flag++;
            }
        }
    }
    cout << flag << endl;
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m=0, n=0;
    int grand[30][30]={0};
    cin >> m >> n;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin >> grand[i][j];
        }
    }

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            int flag1=0, flag2=0, flag3=0, flag4=0;
            
            if ((i>0 && grand[i][j]>=grand[i-1][j])||(i==0))
            flag1=1;
            if ((i<(m-1) && grand[i][j]>=grand[i+1][j])||(i==m-1)) 
            flag2=1;
            if ((j>0 && grand[i][j]>=grand[i][j-1])||(j==0)) 
            flag3=1;
            if ((j<(n-1) && grand[i][j]>=grand[i][j+1])||(j==n-1)) 
            flag4=1;
            
            if (flag1&&flag2&&flag3&&flag4)
            {
                cout << i << ' ' << j << endl;
            }
        }
    }

    return 0;
    
}
#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int sum[100]={0};
    int str[100][100]={0};
    for (int i=0; i<k; i++)
    {
        int m=0, n=0; 
        cin >> m >> n;
        for (int j=0; j<m; j++)
        {
            for (int l=0; l<n; l++)
            {
                cin >> str[j][l];
                if (j==0 || j==m-1 || l==0 || l==n-1)
                {
                    sum[i] += str[j][l];
                }
            }
        }
    }
    for (int p=0; p<k; p++)
    {
        cout << sum[p] << endl;
    }
    return 0;
}
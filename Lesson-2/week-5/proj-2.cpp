#include <iostream>
using namespace std;

int main()
{
    int m=0, n=0;
    int array[100][100]={0};
    cin >> m >> n;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int o=0; o<n; o++)
    {
        int k=0;
        int l=o;
        
        while(l>=0 && k<m)
        {
            cout << array[k][l] << endl;
            k++;
            l--;
        }
    }

    for (int p=1; p<m; p++)
    {
        int k=p;
        int l=n-1;
        
        while(l>=0 && k<m)
        {
            cout << array[k][l] << endl;
            k++;
            l--;
        }
    }

    return 0;

    
}
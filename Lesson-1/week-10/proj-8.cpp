#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int l=0, m=0, tree=0;
    cin >> l >> m;
    int a[10000] = {0};
    for (int i=0; i<m; i++)
    {
        int start=0, end=0;
        cin >> start >> end;
        for (int j=start; j<=end; j++)
        {
            a[j] = 1;
        }
    }
    for (int i=0; i<=l; i++)
    {
        if (a[i] == 0) 
        tree++;
    }
    cout << tree << endl;
    return 0;
}
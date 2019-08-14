#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n=0, number=0;
    cin >> n;
    int x[100]={0};
    int y[100]={0};
    int j=0, k=0;

    for (int i=0; i<n*2; i++)
    {
        cin >> number;
        if (i%2==0)
        {
            x[j] = number;
            j++;
        }
        else
        {
            y[k] = number;
            k++;
        }
    }
    int flag[100] = {0};
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i!=j && x[i]<=x[j] && y[i]<=y[j])
            flag[i] = 1;
        }
    }

    int X[100] = {0};
    int Y[100] = {0};
    int i=0, o=0;
    int m=0;
    for (int k=0; k<n; k++)
    {
        if (flag[k]==0)
        {
            X[i] = x[k];
            Y[o] = y[k];
            m++;
            i++;
            o++;
        }
    }

    for (int l=0; l<n-m; l++)
    {
        for (int p=1; p<n-m+1; p++)
        {
            int tempX=0, tempY=0; 
            if (X[p]<X[p-1])
            {
                tempX = X[p];
                X[p] = X[p-1];
                X[p-1] = tempX;

                tempY = Y[p];
                Y[p] = Y[p-1];
                Y[p-1] = tempY;
            }
        }
    }

    for (int t=0; t<n-m; t++)
    {
        cout << '(' << X[t] << ',' << Y[t] << "),";
    }
    cout << '(' << X[n-m] << ',' << Y[n-m] << ')' << endl;;
    return 0;
}
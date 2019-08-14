#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n=0;
    cin >> n;
    char exchar[10];
    cin.getline(exchar,10);
    char str[101][101]={'\0'};
    char str2[101][101]={'\0'};
    for (int i=0; i<n; i++)
    {
            cin.getline(str[i],10,'\n');
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            str2[i][j]=str[i][j];
        }
    }

    int m=0; 
    cin >> m;
    for (int k=1; k<m; k++)
    {
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (str[i][j]=='@')
                {
                    if ((j-1)>=0 && str[i][j-1]!='#')
                    str2[i][j-1]='@';
                    if ((j+1)<n && str[i][j+1]!='#')
                    str2[i][j+1]='@';
                    if ((i-1)>=0 && str[i-1][j]!='#')
                    str2[i-1][j]='@';
                    if ((i+1)<n && str[i+1][j]!='#')
                    str2[i+1][j]='@';
                }
            }
        }

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                str[i][j]=str2[i][j];
            }
        }

    }

    int number=0; 
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (str2[i][j]=='@')
            number++;
        }
    }
    cout << number << endl;

    return 0;
}
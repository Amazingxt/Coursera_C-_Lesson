#include <iostream>
using namespace std;


void inverse(char str2[])
{
    char sstr[100]={'\0'};
    
    if (str2[0]!='\0')
    {
        for (int i=1; str2[i]!='\0'; i++)
        {
            sstr[i-1]=str2[i];
        }
        inverse(sstr);
        cout << str2[0];
    }
}

int main()
{
    char str[501]={'\0'};
    char str2[100]={'\0'};
    int j=0;
    cin.getline(str, 500);
    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]!=' ')
        {
            str2[j] = str[i];
            j++;
        }
        else
        {
            inverse(str2);
            j=0;
            cout << ' ';
        }
    }
    inverse(str2);
    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    char s[500];
    int x[100];
    int y[100];
    cin.getline(s,500);
    int len=0;
    int c=-1;
    int lastlen;
    for(int i=0;i<500;i++)
    {
        if(s[i]!=' '&&s[i]!='.')
        {
            len++;
            lastlen=i;
        }
        else
        {
            c++;
            x[c]=len;
            y[c]=lastlen;
            len=0;
        }
        if(s[i]=='.')
        {
            break;
        }
    }
    for(int i=1;i<=c;i++)
    {
        if(x[0]<x[i])
        {
            x[0]=x[i];
            y[0]=y[i];
        }
    }
    for(int i=y[0]-x[0]+1;i<=y[0];i++)
    {
        cout<<s[i];
    }
    return 0;
}
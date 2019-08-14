#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[501]={'\0'};
    char letter[30]={'\0'};
    int number[30]={0};
    cin >> str;
    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]>=65 && str[i]<=90)
        str[i] += 32;
        else if (str[i]>=97 && str[i]<=122)
        ;
        else
        {
            continue;
        }
        
        for (int j=0; j<30; j++)
        {
            if (str[i]==letter[j])
            {
                number[j]++;
                break;
            }
            else if (letter[j]=='\0')
            {
                letter[j]=str[i];
                number[j]=1;
                break;
            }
            else 
            {
                continue;
            }
        }
    }
    for (int l=1; l<3; l++)
    {
        for (int k=l; number[k]!=0; k++)
        {
            if (number[k]>number[k-1])
            {
                int m = number[k];
                number[k] = number[k-1];
                number[k-1] = m;

                char s = letter[k];
                letter[k] = letter[k-1];
                letter[k-1] = s;
            }
        }
    }
    int flag=0;
    for (int p=1; number[p]!=0; p++)
    {
        if (number[p]!=number[0])
        {
            flag = p;
            break;
        }
    }
    cout << char(letter[flag]-32) << '+' << letter[flag] << ':' << number[flag] << endl;

    return 0;
}
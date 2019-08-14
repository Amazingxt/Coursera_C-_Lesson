#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char str1[80], str2[80];
    cin.getline(str1, 80);
    cin.getline(str2, 80);
    for (int i=0; i<80; i++)
    {
        if ((str1[i]=='\0')&&(str2[i]!='\0'))
        {
            cout << '<' << endl;
            break;
        }
        else if ((str1[i]!='\0')&&(str2[i]=='\0'))
        {
            cout << '>' << endl;
            break;
        }
        else if ((str1[i]=='\0')&&(str2[i]=='\0'))
        {
            cout << '=' << endl;
            break;
        }

        if (str1[i]<97)
        {
            str1[i] += 32;
        }
        if (str2[i]<97)
        {
            str2[i] += 32;
        }
        if (str1[i]>str2[i])
        {
            cout << '>' << endl;
            break;
        }
        else if (str1[i]<str2[i])
        {
            cout << '<' << endl;
            break;
        }
        else if (str1[i]==str2[i])
        {
            continue;
        }
    }
    return 0;
}
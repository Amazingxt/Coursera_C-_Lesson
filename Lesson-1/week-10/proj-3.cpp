#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    char str[501] = {'\0'};
    char world[100], maxworld[100];
    cin.getline(str, 500);
    int max=0, length=0;
    for (int i=0; str[i]!='\0';i++)
    {
        if (str[i]!=' ' && str[i]!='.')
        {
            world[length] = str[i];
            length++;
        }
        else if (str[i]==' ' || str[i]=='.')
        {
            if (length-1>max)
            {
                max = length-1;
                world[length] = '\0';
                for (int j=0; world[j]!='\0';j++)
                {
                    maxworld[j] = world[j];
                }
                maxworld[length] = '\0';
            }
            length = 0;
        }
    }
    cout << maxworld;
    return 0;
}
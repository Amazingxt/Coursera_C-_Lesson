#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    char strs[20], str2[20];

    while (cin.getline(strs, 20))
    {
        int max=0, flag=0, start=0, end=0;
        for (int i=0; strs[i]!=' '; i++)
        {
            if (strs[i]>max)
            {
                max = strs[i];
                flag = i;
                start = i;
            }
            end = i;
        }
        flag++;
        start++;
        end++;
        for (int j=0; j<flag; j++)
        {
            str2[j] = strs[j];
        }
        for (int k=end+1; strs[k]!='\0'; k++)
        {
            str2[flag] = strs[k];
            flag++;
        }
        for (int l=start; strs[l]!=' '; l++)
        {
            str2[flag] = strs[l];
            flag++;
        }
        str2[flag] = '\0';
        cout << str2 << endl;
    }
    return 0;
}
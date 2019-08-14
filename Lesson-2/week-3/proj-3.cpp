#include <iostream>
using namespace std;

void brackets(char Str[], int Index[])
{
    int j=0;
    int index2[101]={0};
    for (int i=0; Index[i]!=-1; i++)
    {
        int ind=Index[i];
        if (Str[ind]!=Str[ind+1])
        {
            cout << ind << ' ' << (ind+1) << endl;
            i++;
        }
        else 
        {
            index2[j] = ind;
            j++;
        }
    }
    // brackets(Str, index2);
}


int main()
{
    char str[101]={'\0'};
    cin.getline(str,100);
    int index[101]={-1};
    for (int i=0; str[i]!='\0'; i++)
    {
        index[i] = i;
    }
    brackets(str, index);
    return 0;
}
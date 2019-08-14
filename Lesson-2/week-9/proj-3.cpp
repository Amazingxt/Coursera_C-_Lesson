#include <iostream>
using namespace std;


int atoi(char str[])
{
    int sum=0;
    for (int i=0; str[i]!='\0'; i++)
    {
        sum = sum*10 + str[i]-48;
    }
    return sum;
}


int main()
{
    char str[10]={'\0'};
    cin >> str;
    char sstr[5]={'\0'};
    int number[10]={0}, j=0, k=0;
    for (int i=0; str[i]!='\0'; i++)
    {

        if (str[i]!=',')
        {
            sstr[j] = str[i];
            j++;
        }
        else
        {
            number[k] = atoi(sstr);
            j=0;
            k++;
            for (int k=0; sstr[k]!='\0'; k++)
            {
                sstr[k]='\0';
            }
        }
    number[k] = atoi(sstr);
    }
    if (number[0]+number[1]==number[2])
    cout << '+' << endl;
    else if (number[0]-number[1]==number[2])
    cout << '-' << endl;
    else if (number[0]*number[1]==number[2])
    cout << '*' << endl;
    else if (number[0]/number[1]==number[2])
    cout << '/' << endl;
    else if (number[0]%number[1]==number[2])
    cout << '%' << endl;
    else 
    cout << "error" << endl;
    return 0; 
}
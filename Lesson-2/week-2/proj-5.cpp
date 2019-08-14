#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n=0;
    cin >> n;
    float InitNumber[100] = {0}, FinalNumber[100] = {0};
    char exstr[100]={'\0'};
    cin.getline(exstr,10);
    for (int i=0; i<n; i++)
    {
        char str[100]={'\0'};
        cin.getline(str,100,'\n');
        char initNumber[100]={'\0'};
        char finalNumber[100]={'\0'};
        int flag=0;
        int init=0, final=0;
        for (int j=0; str[j]!='\0'; j++)
        {
            if (str[j]==' ')
            {
                flag++;
                continue;
            }
            else
            {
                if (flag==1)
                {
                    initNumber[init] = str[j];
                    init++;
                }
                if (flag==2)
                {
                    finalNumber[final] = str[j];
                    final++;
                }

            }
        }
        InitNumber[i] = atoi(initNumber);
        FinalNumber[i] = atoi(finalNumber);
    }

    float ratio[100] = {0};
    for (int k=0; k<n; k++)
    {
        ratio[k] = FinalNumber[k]/InitNumber[k];
    }

    int a[100]={0}, b[100]={0};
    int A=1, B=0;
    a[0] = 1;
    for (int k=1; k<n; k++)
    {
        if ((ratio[k]/ratio[0])>5 || (ratio[0]/ratio[k]>5))
        {
            b[B] = k+1;
            B++;
        }
        else
        {
            a[A]=k+1;
            A++;
        }
    }

    cout << A << endl;;
    for (int i=0; i<A-1; i++)
    {
        for (int j=i+1; j<A; j++)
        {
            int temp=0; 
            int temp2=0;
            if (ratio[j-1]>ratio[j])
            {
                temp2 = ratio[j-1];
                ratio[j-1] = ratio[j];
                ratio[j] = temp2;
                
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }

    }
    for (int i=0; i<A; i++)
    {
        cout << a[i] << endl;
    }

    cout << B << endl;
    for (int i=A; i<A+B-1; i++)
    {
        for (int j=i+1; j<A+B; j++)
        {
            int temp=0; 
            int temp2=0;
            if (ratio[j-1]>ratio[j])
            {
                temp2 = ratio[j];
                ratio[j] = ratio[j-1];
                ratio[j-1] = temp2;
                
                temp = b[j-1-A];
                b[j-1-A] = b[j-A];
                b[j-A] = temp;
            }
        }

    }
    for (int i=0; i<B; i++)
    {
        cout << b[i] << endl;
    }

    return 0;
}
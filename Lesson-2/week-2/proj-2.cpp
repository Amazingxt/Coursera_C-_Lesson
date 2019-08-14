#include <iostream>
using namespace std;

void sort (int a[])
{
    if ((a[1]==1)+(a[3]==4)+(a[0]==3)==1 &&
    (a[3]==1)+(a[1]==4)+(a[0]==2)+(a[2]==3)==1 &&
    (a[3]==4)+(a[1]==3)==1 &&
    (a[0]==1)+(a[2]==4)+(a[3]==2)+(a[1]==3)==1)
    {
        for (int i=0; i<4; i++)
        {
            cout << a[i] << endl;
        }
    }
}

int main()
{
    int a[4] = {0};
    for (int i=1; i<5; i++)
    {
        a[0] = i;
        for (int j=1; j<5; j++)
        {
            if (j!=a[0])
            {
                a[1] = j;
                for (int k=1; k<5; k++)
                {
                    if (k!=a[0] && k!=a[1])
                    {
                        a[2] = k;
                        for (int l=1; l<5; l++)
                        {
                            if (l!=a[0] && l!=a[1] && l!=a[2])
                            {
                                a[3] = l;
                                sort(a);
                            }

                        }
                    }
                }
            }
        }
    }
    return 0;
}
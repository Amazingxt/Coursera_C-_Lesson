#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n=0; 
    float threhood=0;
    cin >> n >> threhood;
    char str[51][3]={'\0'};
    float value[51]={0};
    int flag=0;
    for (int i=0; i<n; i++)
    {
        cin >> str[i] >> value[i]; 
    }

    for (int i=0; i<n-1; i++)
    {
  
        for (int j=i+1; j<n; j++)
        {
            float temp=0;
            char tempc;
            if (value[i]<value[j])
            {
                temp = value[i];
                value[i] = value[j];
                value[j] = temp;

                tempc = str[i][0];
                str[i][0] = str[j][0];
                str[j][0] = tempc;

                tempc = str[i][1];
                str[i][1] = str[j][1];
                str[j][1] = tempc;

                tempc = str[i][2];
                str[i][2] = str[j][2];
                str[j][2] = tempc;

            }
        }
        if (value[i]>threhood)
        {
            flag++;
            cout << str[i][0] << str[i][1] << str[i][2] << ' ';
            cout << fixed << setprecision(1) << value[i] << endl;
        }
    }

    if (value[n-1]>threhood)
    {
        cout << str[n-1][0] << str[n-1][1] << str[n-1][2] << ' ';
        cout << fixed << setprecision(1) << value[n-1] << endl;
    }

    if (flag==0)
    {
        cout << "None." << endl;
    }

    return 0;
}
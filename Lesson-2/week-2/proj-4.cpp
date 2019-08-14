#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdlib.h>
using namespace std;


void getDate(char y[], char m[], char d[])
{
    int year=0, mouth=0, day=0; 
    int carryD=0, carryM=0;
    year = 1000 * ((int)y[0]-48) + 100 * ((int)y[1]-48) + 10 * ((int)y[2]-48) + ((int)y[3]-48);
    mouth = 10 * ((int)m[0]-48) + ((int)m[1]-48);
    day = 10 * ((int)d[0]-48) + ((int)d[1]-48);
    if ((year%4==0 && year%100!=0)||(year%400==0))
    {
        if (mouth==2)
        {
            day = day+1;
            if (day>29)
            {
                carryD=1;
                day = day-29;
            }
        }
        else if (mouth==1 || mouth==3 || mouth==5 || mouth==7 || \
        mouth==8 || mouth==10 || mouth==12)
        {
            day = day+1;
            if (day>31)
            {
                carryD=1;
                day = day-31;
            }
        }
        else 
        {
            day = day+1;
            if (day>30)
            {
                carryD=1;
                day = day-30;
            }
        }

        if (carryD==1)
        {
            mouth = mouth+1;
            if (mouth>12)
            {
                mouth = mouth - 12;
                carryM = 1;
            }
        }

        if (carryM==1)
        {
            year += 1;
        }
    }
    else
    {
        if (mouth==2)
        {
            day = day+1;
            if (day>28)
            {
                carryD=1;
                day = day-28;
            }
        }
        else if (mouth==1 || mouth==3 || mouth==5 || mouth==7 || \
        mouth==8 || mouth==10 || mouth==12)
        {
            day = day+1;
            if (day>31)
            {
                carryD=1;
                day = day-31;
            }
        }
        else 
        {
            day = day+1;
            if (day>30)
            {
                carryD=1;
                day = day-30;
            }
        }

        if (carryD==1)
        {
            mouth = mouth+1;
            if (mouth>12)
            {
                mouth = mouth - 12;
                carryM = 1;
            }
        }

        if (carryM==1)
        {
            year += 1;
        }
    }
    cout << year; 
    cout << '-';
    cout << setw(2) << setfill('0') << mouth;
    cout << '-';
    cout << setw(2) << setfill('0') << day << endl;
}

int main()
{
    char c[100]={'\0'};
    char y[4],m[2],d[2];
    int y1=0, m1=0, d1=0;
    int flag=0;
    cin.getline(c, 100);
    for (int i=0; c[i]!='\0'; i++)
    {
        if (c[i]=='-')
        {
            flag++;
            continue;
        }
        if (flag==0)
        {
            y[y1] = c[i];
            y1++;
        }
        if (flag==1)
        {
            m[m1] = c[i];
            m1++;
        }
        if (flag==2)
        {
            d[d1] = c[i];
            d1++;
        }

    }

    getDate(y, m, d);

    return 0;
}
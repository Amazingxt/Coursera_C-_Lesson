#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main()
{
    int a = 2;
    cout << setw(2) << setfill('0') << a << endl;
    return 0;
}
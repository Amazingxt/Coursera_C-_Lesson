#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int h, r;
    cin >> h >> r;
    float V, result;
    V = 3.14159 * r * r * h;
    result = 20000 / V ;
    result = ceil(result);
    cout << result << endl;

    return 0;
}
#include <iostream>
using namespace std;

// Minimum of two integers
inline int minVal(int a, int b)
{
    return (a < b) ? a : b;
}

// Minimum of three integers
inline int minVal(int a, int b, int c)
{
    return minVal(minVal(a, b), c);
}

int main()
{
    cout << "Minimum of 10 and 20 = " << minVal(10, 20) << endl;
    cout << "Minimum of 15, 8 and 12 = " << minVal(15, 8, 12) << endl;

    return 0;
}
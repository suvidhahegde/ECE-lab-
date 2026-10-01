#include <iostream>
using namespace std;

int volume(int side)
{
    return side * side * side;
}

// Volume of cuboid
int volume(int l, int b, int h)
{
    return l * b * h;
}

float volume(float r, float h)
{
    return 3.14 * r * r * h;
}

int main()
{
    cout << "Volume of Cube = " << volume(5) << endl;
    cout << "Volume of Cuboid = " << volume(4, 5, 6) << endl;
    cout << "Volume of Cylinder = " << volume(3.0f, 5.0f) << endl;

    return 0;
}
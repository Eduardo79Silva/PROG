#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float x;
    float y;

    cout << "Enter constants a, b, c:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "Enter constants d, e, f" << endl;
    cin >> d;
    cin >> e;
    cin >> f;

    if ((a * e - b * d) != 0)
    {
        x = (c * e - b * f) / (a * e - b * d);
        y = (a * f - c * d) / (a * e - b * d);

        cout << x << endl;
        cout << y << endl;
    }


    return 0;

}
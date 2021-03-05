#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float sphereMass;
    float materialMass;
    float radius;
    float pi = 3.1416;
    cout << "Enter the material's mass:" << endl;
    cin >> materialMass;
    cout << "Enter the sphere's radius";
    cin >> radius;

    sphereMass = 4 / (3 * materialMass * (pow(radius, 3)));
    cout << sphereMass;


    return 0;

}
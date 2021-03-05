#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;
    int C;
    float mean;
    float a_mean;
    float b_mean;
    float c_mean;

    cout << "Enter 3 numbers\n" << endl;
    cin >> A;
    cin >> B;
    cin >> C;

    mean = (float(A + B + C)) / 3;
    a_mean = A - mean;
    b_mean = B - mean;
    c_mean = C - mean;

    cout << mean << endl;
    cout << a_mean << endl;
    cout << b_mean << endl;
    cout << c_mean;

    return 0;
    
}
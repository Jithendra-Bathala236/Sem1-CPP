#include <iostream>

using namespace std;

double power(double b, int pow)
{
    double result = 1.0;

    for (int i = 0; i < abs(pow); ++i)
    {
        result *= b;
    }

    if (pow < 0)
    {
        result = 1.0 / result;
    }

    return result;
}

int main()
{
    double base;
    int pow;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> pow;

    double result = power(base, pow);

    cout << "Result: " << result << endl;

    return 0;
}

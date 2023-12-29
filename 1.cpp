#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double d, a, b, c;

    cout << endl
         << "Quadratic equation looks like (ax² + bx + c = 0)" << endl;
    cout << endl
         << "Enter the value of 'a': ";
    cin >> a;

    cout << endl
         << "Enter the value of 'b': ";
    cin >> b;

    cout << endl
         << "Enter the value of 'c': ";

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << endl
                     << "Infinite solutions (Identity equation)" << endl;
            }
            else
            {
                cout << endl
                     << "No Solution (Contradiction)" << endl;
            }
        }
        else
        {
            double x = -c / b;
            cout << endl
                 << "(Linear Equation) One root at 'x' = " << x << endl;
        }
    }
    else
    {
        d = (b * b) - 4 * a * c;
        cout << endl
             << "Discriminant is: " << d << endl;

        if (b == 0)
        {
            if (c == 0)
            {
                cout << endl
                     << "No solution (Contradiction)" << endl;
            }
            else
            {
                double x = -c / a;
                cout << endl
                     << "(Linear Equation) One root at x = " << x << endl;
            }
        }
        else if (c == 0)
        {
            cout << endl
                 << "x = 0 " << endl;
            cout << endl
                 << "Another root at x = " << (-b / a) << endl;
        }
        else if (d > 0)
        {
            double x1 = (-b + sqrt(d)) / (2 * a);
            double x2 = (-b - sqrt(d)) / (2 * a);
            cout << endl
                 << "Distinct Real Roots: " << endl
                 << "Root 1 = " << x1 << endl
                 << "Root 2 = " << x2 << endl;
        }
        else if (d == 0)
        {
            double x = -b / (2 * a);
            cout << endl
                 << "Repeated Real Root: x = " << x << endl;
        }
        else
        {
            double real = -b / (2 * a);
            double imaginary = sqrt(-(d)) / (2 * a);
            cout << endl
                 << "Complex Roots: " << endl
                 << "Root 1 = " << real << " + " << imaginary << "i" << endl
                 << "Root 2 = " << real << " - " << imaginary << "i" << endl;
        }
    }

    return 0;
}

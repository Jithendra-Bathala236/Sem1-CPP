#include <iostream>
using namespace std;
int main()
{
    int n, digit, sum;

    cout << "Enter number : ";
    cin >> n;
recheck:
    sum = 0;
    while (n > 0)
    {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    if (sum > 10)
    {
        n = sum;
        goto recheck;
    }

    cout << sum;
    return 0;
}

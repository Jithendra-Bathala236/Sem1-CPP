// Write a C++ program to display the following pattern:
/*
1
232
34543
4567654
34543
232
1
*/
#include <iostream>
using namespace std;

int main()
{
    int n, displayNum = 0, range = 0;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i < 2 * n; i++)
    {
        range = i > n ? 2 * n - i : i;
        displayNum = range;

        for (int j = 0; j < 2 * range - 1; j++)
        {
            cout << displayNum;
            displayNum = range > j + 1 ? displayNum + 1 : displayNum - 1;
        }
        cout << endl;
    }
}
#include <iostream>

using namespace std;

void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

void generatePermutations(char str[], int start, int end)
{
    if (start == end)
    {
        cout << str << endl;
    }
    else
    {
        for (int i = start; i <= end; ++i)
        {
            swap(str[start], str[i]);
            generatePermutations(str, start + 1, end);
            swap(str[start], str[i]);
        }
    }
}

int main()
{
    string inputString;

    cout << "Enter a string: ";
    cin >> inputString;

    char charArray[inputString.size() + 1];
    strcpy(charArray, inputString.c_str());

    cout << "All permutations of the string:" << endl;
    generatePermutations(charArray, 0, inputString.size() - 1);

    return 0;
}

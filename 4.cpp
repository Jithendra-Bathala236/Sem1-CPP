// Implement a C++ program that simulates a simple ATM machine, allowing users to check their balance, deposit, or withdraw money using a switch statement.
#include <iostream>
using namespace std;

int main()
{
    float balance = 10000000.00;
    int choice;
    float amount;

    while (true)
    {
        cout << "Welcome to the ATM Machine" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Your balance is: $" << balance << endl;
            break;
        case 2:
            cout << "Enter the amount you want to deposit: $";
            cin >> amount;
            balance += amount;
            cout << "Deposit successful. Your new balance is: $" << balance << endl;
            break;
        case 3:
            cout << "Enter the amount you want to withdraw: $";
            cin >> amount;
            if (amount > balance)
            {
                cout << "Insufficient funds!" << endl;
            }
            else
            {
                balance -= amount;
                cout << "Withdrawal successful. Your new balance is: $" << balance << endl;
            }
            break;
        case 4:
            cout << "Thank you for using the ATM!." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }
    return 0;
}
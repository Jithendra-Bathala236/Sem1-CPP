#include <iostream>

using namespace std;

int main()
{
    // Get marks for 5 subjects
    double subject1, subject2, subject3, subject4, subject5;

    cout << "Enter marks for Subject 1: ";
    cin >> subject1;

    cout << "Enter marks for Subject 2: ";
    cin >> subject2;

    cout << "Enter marks for Subject 3: ";
    cin >> subject3;

    cout << "Enter marks for Subject 4: ";
    cin >> subject4;

    cout << "Enter marks for Subject 5: ";
    cin >> subject5;

    // Calculate average marks
    double average = (subject1 + subject2 + subject3 + subject4 + subject5) / 5;

    // Determine the grade based on average marks
    char grade;

    if (average >= 90)
    {
        grade = 'A';
    }
    else if (average >= 80)
    {
        grade = 'B';
    }
    else if (average >= 70)
    {
        grade = 'C';
    }
    else if (average >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    // Display the result
    cout << "Average Marks: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

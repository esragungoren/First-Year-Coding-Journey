#include <iostream>
#include <string>
#include <cmath>

using namespace std; // Allows using cout/cin without std:: prefix

int main()
{
    // cout (see-out) for output, cin (see-in) for input
    cout << "Hello C++!" << endl;

    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Sum: " << (x + y) << endl;

    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;

    cout << "Full Name: " << fullName << endl;
    cout << "Length: " << fullName.length() << " characters" << endl;
    cout << "First character: " << fullName.at(0) << endl;

    string completeName;
    cout << "Enter your full name: ";
    cin.ignore();               // Clear the buffer
    getline(cin, completeName); // Reads spaces unlike 'cin >>'
    cout << "Logged as: " << completeName << endl;

    // 4. Logical Operators
    bool isStudent = true;
    bool isProgrammer = true;

    if (isStudent && isProgrammer)
    { // AND operator
        cout << "Keep learning!" << endl;
    }

    // 5. Constants & Immutability
    const int MINUTES_PER_HOUR = 60;
    // MINUTES_PER_HOUR = 61; // This would cause a compiler error

    return 0;
}
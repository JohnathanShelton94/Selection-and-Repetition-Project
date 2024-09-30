//This program is part 2 of the calculator project switched nested if statements

#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    char op;

            // Take input for the first number, operator, and second number
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

            // Using nested structure
    if (op == '+') {
        cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    }
    else if (op == '-') {
        cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    }
    else if (op == '*') {
        cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
    }
    else if (op == '/') {
        if (num2 == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        else {
            cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
        }
    }
    else {
        cout << "Error: Unsupported operator." << endl;
    }

    return 0;
}

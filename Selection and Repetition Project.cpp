// This program will take as input two integers and the operation to be performed. Then it will output the numbers, the operator, and the result.

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

         // Perform calculation based on the operator
    switch (op) {
    case '+':
        cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        else {
            cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
        }
        break;
    default:
        cout << "Error: Unsupported operator." << endl;
    }

    return 0;
}

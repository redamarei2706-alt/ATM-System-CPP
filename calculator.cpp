#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "========================\n";
    cout << "     SIMPLE CALCULATOR   \n";
    cout << "========================\n";
    cout << "|  7  |  8  |  9  |  /  |\n";
    cout << "|  4  |  5  |  6  |  *  |\n";
    cout << "|  1  |  2  |  3  |  -  |\n";
    cout << "|  0  |  .  |  =  |  +  |\n";
    cout << "========================\n\n";

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+ - * /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\n------------------------\n";

    switch(op) {
        case '+':
            cout << "Result = " << a + b;
            break;
        case '-':
            cout << "Result = " << a - b;
            break;
        case '*':
            cout << "Result = " << a * b;
            break;
        case '/':
            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Error: Division by zero";
            break;
        default:
            cout << "Invalid operator";
    }

    cout << "\n------------------------\n";
    return 0;
}
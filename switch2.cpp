#include <iostream>
using namespace std;
int main()
{
    char op;
    double num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch(op)
    {
        case '+':
            cout << "The result is: " << num1 + num2;
            break;
            
        case '-':
            cout << "The result is: " << num1 - num2;
            break;
            
        case '*':
            cout << "The result is: " << num1 * num2;
            break;
            
        case '/':
            if(num2 != 0)
            {
                cout << "The result is: " << num1 / num2;
            }
            else
            {
                cout << "Division by zero is not allowed.";
            }
            break;

        default:
            cout << "Invalid operator";
            break;
    }
}
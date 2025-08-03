#include <iostream>
using namespace std;

int main() {
    char op;
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    cout << "Enter the operation you want to perform: ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "a + b = " << a + b;
            break;
        case '-':
            cout << "a - b = " << a - b;
            break;
        case '*':
            cout << "a * b = " << a * b;
            break;
        case '/':
            cout << "a / b = " << a / b;
            break;
        default:
            cout << "Invalid operation!";
    }
    return 0;
}

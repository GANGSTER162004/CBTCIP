#include <iostream>
using namespace std;

int main() {
    double result, num;
    char op;

    cout << "Enter an initial number: ";
    cin >> result;

    while (true) {
        cout << "Enter operator (+, -, *, /) or 'q' to quit: ";
        cin >> op;

        if (op == 'q') {
            break;
        }

        cout << "Enter the next number: ";
        cin >> num;

        switch (op) {
            case '+':
                result += num;
                break;
            case '-':
                result -= num;
                break;
            case '*':
                result *= num;
                break;
            case '/':
                if (num != 0) {
                    result /= num;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Error: Invalid operator." << endl;
                break;
        }

        cout << "Current result: " << result << endl;
    }

    cout << "Final result: " << result << endl;

    return 0;
}

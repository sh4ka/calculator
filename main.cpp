#include <iostream>

using namespace std;

int main() {
    double x, y;
    char operation;
    cout << "Hello, input an arithmetic operation in the form x + y" << endl;
    cin >> x >> operation >> y;
    cout << x << " " << operation << " " << y << " = ";

    switch (operation) {
        case '+':
            cout << x + y << endl;
            break;
        case '-':
            cout << x - y << endl;
            break;
        case '*':
            cout << x * y << endl;
            break;
        case '/':
            if (y != 0) {
                cout << x / y << endl;
            } else {
                cout << "Infinite";
            }
            break;
    }

    return 0;
}

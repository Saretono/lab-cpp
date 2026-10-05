#include <iostream>

using namespace std;

int main() {
    float a;
    float b;
    char c;

    cout<<"Enter num1: ";
    cin >> a;

    cout << "Enter num2: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    if (c == '+'){
        cout << a+b << endl;
    }

    else if (c == '-'){
        cout << a-b << endl;
    }

    else if (c == '*'){
        cout << a*b << endl;
    }

    else if (c == '/'){
        cout << a/b << endl;
    }

    return main();
}
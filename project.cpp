#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number < 2) {
        return false;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
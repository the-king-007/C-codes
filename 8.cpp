#include <iostream>
using namespace std;

void printButterfly(int n) {
    // Upper Half
    for (int i = 1; i <= n; i++) {
        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower Half
    for (int i = n; i >= 1; i--) {
        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printButterfly(n);
    return 0;
}
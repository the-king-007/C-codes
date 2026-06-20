#include <iostream>
using namespace std;

void printHollowDiamond(int n) {
    // Top Half
    for (int i = 0; i < n; i++) {
        // Outer Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // First Star
        cout << "*";
        
        // Inner Spaces and Second Star
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Bottom Half
    for (int i = n - 2; i >= 0; i--) {
        // Outer Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // First Star
        cout << "*";
        
        // Inner Spaces and Second Star
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printHollowDiamond(n);
    return 0;
}
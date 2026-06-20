#include <iostream>
using namespace std;

double  SumN (int n) {
    double sum = 0;

    for (int i = 1; i<=n; i++) {
        sum += i;
    }
    return sum;

}

int main () {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Sum = " << SumN(n) << endl;

    return 0;
}
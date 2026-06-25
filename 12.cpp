#include <iostream>
using namespace std;

int linearSearch (int arr[], int sz, int target) {
    for (int i =0; i < sz; i++) {
        if (arr [i] == target) {
            return i;
        }
    }

    return -1;
}

int main () {
    int arr[] = {1, 11, 324, 342, 365, 796, 54, 9, 976, 235, 234};
    int sz = 11;
    int target = 365;

    cout << linearSearch(arr, sz, target) << endl;
    return 0;
}
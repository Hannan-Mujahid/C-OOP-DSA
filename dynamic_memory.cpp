#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n; // user se size lo

    // Dynamic memory allocation
    int *arr = new int[n];  

    cout << "Enter " << n << " numbers:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Free memory
    delete[] arr;

    return 0;
}

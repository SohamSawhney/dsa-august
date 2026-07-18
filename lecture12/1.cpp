



#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += (max_val - arr[i]);
    }

    cout << total;
    return 0;
}

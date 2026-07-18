#include <iostream>
using namespace std;

int main() {
    char n;
    int maxcount1 = 0, maxcount0 = 0;
    int count1 = 0, count0 = 0;

    while (cin.get(n) && n != '\n') {  
        if (n == '1') {
            count1++;
            count0 = 0;
            maxcount1 = max(maxcount1, count1);
            if (maxcount1 >= 7) {
                cout << "YES";
                return 0;
            }
        } else if (n == '0') {
            count0++;
            count1 = 0;
            maxcount0 = max(maxcount0, count0);
            if (maxcount0 >= 7) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
    return 0;
}

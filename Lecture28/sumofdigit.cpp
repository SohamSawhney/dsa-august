// #include<iostream>
// using namespace std;
// string f(string n){
//  if(n=="0"){

//  }



// }

// int main(){
//     string n;
//     cin.getline(n);
//     f(n);

  
// }





#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    // If it's already a single digit, no operations needed
    if (n.size() == 1) {
        cout << 0 << endl;
        return 0;
    }

    int steps = 0;

    // Repeat until n becomes a single-digit number
    while (n.size() > 1) {
        long long sum = 0;
        for (char c : n) {
            sum += (c - '0');  // add digit value
        }

        // Convert sum back to string
        n = to_string(sum);
        steps++;
    }

    cout << steps << endl;
    return 0;
}

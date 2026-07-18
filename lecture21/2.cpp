
#include <bits/stdc++.h>
using namespace std;

int main() {
 

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        sort(s.begin(), s.end());  
        int pairs = 0;

    
        int i = 0;
        while (i + 1 < n) {
            if (s[i] == s[i + 1]) {
                pairs++;
                i += 2;
            } else {
                i++;
            }
        }

        int m = n - k;
        int need_pairs = m / 2;

        cout << (pairs >= need_pairs ? "YES\n" : "NO\n");
    }
}


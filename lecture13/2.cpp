#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; 
    if(!(cin >> n)) return 0;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());

    int max_idx = -1; // first occurrence of max
    for(int i=0;i<n;i++) if(a[i]==mx) { max_idx = i; break; }

    int min_idx = -1; // last occurrence of min
    for(int i=n-1;i>=0;i--) if(a[i]==mn) { min_idx = i; break; }

    int moves = max_idx + (n - 1 - min_idx);
    if(max_idx > min_idx) moves--;

    cout << moves << "\n";
    return 0;
}

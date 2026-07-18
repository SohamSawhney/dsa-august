

#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int>b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++){

     cin >> b[j];
    }

    sort(a.begin(), a.end());

    for (int j = 0; j < m; j++) {
        int  x = b[j];
        
        int count = upper_bound(a.begin(), a.end(), x) - a.begin();
        cout << count << " ";
    }
}

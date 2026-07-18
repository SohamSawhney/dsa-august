
#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int t;
    cin >> t;
    int pairs;
    int needpairs;
    int m;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        sort(s.begin(), s.end());  
        pairs = 0;

        
        int i = 0;
        while (i + 1 < n) {
            if (s[i] == s[i + 1]) {
                pairs++;
                i += 2;
            } else {
                i++;
            }
        }

        m = n - k;
        needpairs = m / 2;
        

        
      
 
    }
    if(pairs>=needpairs){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
 
}

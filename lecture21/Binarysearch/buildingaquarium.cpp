// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// bool canpass(ll h,vector<ll>&a,ll x){
//     ll sum=0;
//     for(auto i:a){
//         if(h>=i) sum+=(h-i);
//     }
//     return sum<=x;

// }
// int main(){
//     int t;
//    cin>>t;
//     while(t--){
//         int n;
//         ll x;
//         cin>>n>>x;
//         vector<ll>a(n);
//         for(auto &i:a) cin>>i;
//         ll ans=1;
//         ll l=1,h=3e9;
//         while(l<=h){
//             ll mid=l+(h-l)/2;
//             if(canpass(mid,a,x)){
//                 ans=mid;
//                 l=mid+1;
//             }
//             else{
//                 h=mid-1;
//             }
//         }
//         cout<<ans;
     
//     }
//     return 0;
// }









#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool canpass(ll h, vector<ll>& a, ll x) {
    ll sum = 0;
    for (auto i : a) {
        if (h >= i) {
            sum += (h - i);
            if (sum > x) return false; // ✅ early exit
        }
    }
    return sum <= x;
}

int main() {
 

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll x;
        cin >> n >> x;

        vector<ll> a(n);
        for (auto &i : a) cin >> i;

        ll ans = 1;
        ll l = 1;
        ll h = *max_element(a.begin(),a.end())+x; // ✅ tighter bound

        while (l <= h) {
            ll mid = l + (h - l) / 2;
            if (canpass(mid, a, x)) {
                ans = mid;
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }

        cout << ans << '\n'; // ✅ newline per test case
    }
    return 0;
}

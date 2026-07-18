#include<iostream>
#define ll long long
using namespace std;
string s;
int n_b,n_s,n_c;   // to store the inventory of 'B','S' and 'C'
int p_b,p_s,p_c;    // to store the price of 'B','S' and 'C'
int c_b,c_s,c_c;     // to store the frequency of B S and C 
ll r;   
            // to store the money polycarpus has 
bool canpolycarpus(ll m){
    // check if Polycarpus can cook 'm' hamburgers ?

    // to cook 'm' hamburgers, Polycarpus needs m.c_b bread, m.c_s sausage & m.c_c cheese slices
    // in the inventory, Polycarpus already has n_b bread, n_s sausage & n_c cheese slices

    ll e_b = max(0ll, m * c_b - n_b); // to store extra bread   slices required to cook 'm' hamburgers
    ll e_s = max(0ll, m * c_s - n_s); // to store extra sausage slices required to cook 'm' hamburgers
    ll e_c = max(0ll, m * c_c - n_c); // to store extra cheese  slices required to cook 'm' hamburgers

    ll e_r = e_b * p_b + e_s * p_s + e_c * p_c; // to store the money Polycarpus needs to purchase extra ingredients

    return e_r <= r;

}
int main(){
    cin>>s;
    cin>>n_b>>n_s>>n_c;
        
              cin >> p_b >> p_s >> p_c;
    cin >> r;

    for (char c : s) {
        if (c == 'B') c_b++;
        else if (c == 'S') c_s++;
        else if (c == 'C') c_c++;
    }
     ll lo=0;
     ll hi=1e12+100;
     ll ans=0;
     while(lo<=hi){
        ll m=lo+(hi-lo)/2;
        if(canpolycarpus(m)){
                        // Polycarpus can cook 'm' hamburgers therefore move right
            // so the search space reduces from [lo, hi] to [m+1, hi].
            ans = m;
            lo  = m + 1;

        }
        else{
            lo=m-1;
        }
     }
    cout<<ans<<endl;
}


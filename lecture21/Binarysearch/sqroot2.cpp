#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    double s=0;
    double e=n;
    double moe=1e-6;
    double ans=0;
    while(e-s>moe){
     
        double m=s+(e-s)/2.0;
        if(m*m<=n){
            ans=m;
            s=m+moe;
        }
        else{
            e=m-moe;
        }
    }
   
    cout<<setprecision(3)<<fixed << ans << endl;

    return 0;
}
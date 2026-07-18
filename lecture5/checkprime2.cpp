// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=2;
//     while(i<=n-1){
//         if(n%i==0){
//             cout<<"Not prime";
//             break;
//         }
//         i=i+1;
//     }
//     if(i==n){
//         cout<<"prime";
//     }

// }



#include<iostream>
using namespace std;
int main(){
         int n;
    cin>>n;
    int i=2;
    while(i*i<=n){
        if(n%i==0){
            cout<<"";
            break;
        }
        i=i+1;
    }
    if(i*i>n){
        cout<<"prime";
    }
}
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count1=0;
    for(int i=0;i<=ceil(log2(n+1));i++){
        if(n&(1<<i)){
            count1++;
        }
    }
    cout<<count1<<endl;

}
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count1=0;

// }
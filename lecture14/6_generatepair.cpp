#include<iostream>
#include<vector>
using namespace std;
 void generatepair(vector<int>a,int n){
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
          cout<<a[i]<<a[j]<<" ";
        }
        cout<<endl;
    }

}
using namespace std;
int main(){
    vector<int>a={10,20,30,40,50};
    generatepair(a,a.size());
}
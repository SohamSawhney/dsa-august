#include<iostream>
#include<vector>
using namespace std;
 void generatepair(vector<int>a,int n,int t){
    int cnt=0;
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
       int pairsum=a[i]+a[j];
       if(pairsum==t){
          cnt++;
       }

        }
        cout<<endl;
    }

}
using namespace std;
int main(){
    vector<int>a={10,20,30,40,50};
    int t=60;
    generatepair(a,a.size(),t);
}
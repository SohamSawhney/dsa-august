#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={1,2,3,5,7};
    // reverse(v.begin()+1,v.end()+4);
    reverse(v.begin(),v.end());
      for(int i=0;i<v.size();i++){
        cout<<v[i];
      }
    cout<<endl;



    sort(v.rbegin(),v.rend());        //   sort in   decreasing order
     for(int i=0;i<v.size();i++){
        cout<<v[i];
      }

      sort(v.begin(),v.end(),greater<int>());


}
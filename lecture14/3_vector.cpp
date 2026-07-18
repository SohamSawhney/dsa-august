#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   vector<int>vis(5,0);
   for (int i = 0; i < v.size(); i++) {
		cout << vis[i] << " ";
	}

   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
}
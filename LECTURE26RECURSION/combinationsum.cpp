#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(int index,int target,vector<int>& candidates,vector<int>&temp,vector<vector<int>>&ans){
  if(target==0){
    ans.push_back(temp);
    return;
  }
    for(int i=index;i<candidates.size();i++){
        if(candidates[i]>target) break;

        temp.push_back(candidates[i]);
        solve(i,target-candidates[i],candidates,temp,ans);
        temp.pop_back();
    }
}
int main(){
    vector<int>candidates={2,3,6,7};
    vector<vector<int>> ans;
    vector<int>temp;
    int target=7;
    sort(candidates.begin(),candidates.end());
    solve(0,target,candidates,temp,ans);
     for (auto &vec : ans) {
        cout << "[ ";
        for (int x : vec) cout << x << " ";
        cout << "]\n";
    }
}
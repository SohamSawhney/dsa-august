#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:

    int trap(vector<int>&height){
        int n=height.size();
        int ans=0;
        for(int i=0;i<n;i++){

            int li=height[i];
            for(int j=i-1;j>=0;j--){
                li=max(li,height[i]);
            }

            int ri=height[i];
            for(int j=i+1;j<n;j++){
                ri=max(ri,height[j]);
            }
            int wi=min(li,ri)-height[i];
            ans+=wi;



        }
        return ans;
    }
};

int main(){
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

	Solution s;
	cout << s.trap(height) << endl;

	return 0;
}
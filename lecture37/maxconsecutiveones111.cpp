#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int longestOnes(vector<int>&nums,int k){
        int left=0;
        int zerocount=0;
        int maxlen=0;


        int right=0;
        int n=nums.size();

        while(right<n){
            if(nums[right]==0){
                zerocount++;
            }

             while(zerocount>k){
                if(nums[left]==0){
                    zerocount--;
                }
                left++;
             }
             maxlen=max(maxlen,right-left+1);
             right++;
        }
        return maxlen;
    }

};
int main(){
    solution sol;
    vector<int>nums={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;

    // Output the result
    cout << sol.longestOnes(nums, k) << endl;
    return 0;

}
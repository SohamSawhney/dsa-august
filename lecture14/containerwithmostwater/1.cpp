#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int>& height){
int maxsofar=0;

int n=height.size();
for(int i=0;i<=n-2;i++){
    for(int j=i+1;j<=n-1;j++){
        int w=j-i;
        int h=min(height[i],height[j]);
        int a=w*h;
        maxsofar=max(maxsofar,a);
    }
}
return maxsofar;

}
int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
   
   cout<<maxArea(height)<<endl;
}
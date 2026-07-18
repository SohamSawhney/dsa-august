#include<iostream>
#include<vector>
#include<string>

using namespace std;
string findLargest(vector<string>& arr){
    if(arr.empty()) return "";
    string largest=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    vector<string>arr={"abc","ae","xyz","zz"};
    cout<<"lexicographically largest string  "<<findLargest(arr)<<endl;
}

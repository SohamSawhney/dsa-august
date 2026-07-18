#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&a,vector<int>&b){
    int n=a.size();
    int m=b.size();
    vector<int>c(n+m);
    int i=0;
    int j=0;
    int k=0;
    while(i<n and j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n){
        c[k]=a[i];
        i++;
    }
    while(j<m){
        c[k]=b[j];
        j++;
    }
for(int x:c){
    cout<<x;
}
}
int main(){

    vector<int>a={10,12,13,14};
    vector<int>b={15,16,17,18};
    merge(a,b);
}
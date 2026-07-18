#include<iostream>
using namespace std;
int main(){
 int m=3;
 int n=4;
    int mat[][4]={
        {11,12,13,14},
        {22,23,24,25},
        {21,26,25,16}
    };

    int sr=0;
    int er=m-1;
    int sc=0;
    int ec=n-1;
    while(sr<=er and sc<=ec){
        for(int i=sc;i<=ec;i++){
            cout<<mat[sr][i]<<" ";
        }
        sr++;
        for(int j=sr;j<=er;j++){
            cout<<mat[j][ec]<<" ";
        }
        ec--;
        if(sr<=er){
            for(int j=ec;j>=sc;j--){
                cout<<mat[er][j]<<" ";
            }
        }
        if(sc<=ec){
            for(int i=er;i>=sr;i--){
                cout<<mat[i][sc]<<" ";
            }
            sc++;
        }
    }
}
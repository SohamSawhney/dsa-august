#include<iostream>
using namespace std;
void waveprint(int mat[][10],int m,int n){
for(int j=0;j<n;j++){
    if(j%2==0){
        //we are in even column
        for(int i=0;i<m;i++){
            cout<<mat[i][j]<<" ";
        }
    }
    else{
        // we are in odd column
        for(int i=m-1;i>=0;i--){
            cout<<mat[i][j]<<" ";
        }
    
    }
    cout<<endl;
}
}
int main(){
     int n;
    cin>>n;
    int m;
    cin>>m;
    int mat[10][10];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
        cout<<endl;

    }
    waveprint(mat,n,m);

}
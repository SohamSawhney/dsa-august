#include<iostream>
using namespace std;
void printDiagonal(int mat[][10],int m,int n,int i,int j){
    int dlen=min(m-i,n-j);
    for(int k=0;k<dlen;k++){
        cout<<mat[i+k][j+k]<<" ";
    }
    cout<<endl;
}
void printDiagonalTraversal(int mat[][10],int m,int n){
    for(int j=0;j<n;j++){
         printDiagonal(mat,m,n,0,j);
    }
    for(int i=1;i<m;i++){
        printDiagonal(mat,m,n,i,0);
    }
}
int main(){
    int m;
    int n;
    cin>>m;
    cin>>n;
    int mat[10][10];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
        cout<<endl;
    }

for(int i=0;i<m;i++){
 for(int j=0;j<n;j++){
    cout<<mat[i][j];
 }
 cout<<endl;
}
printDiagonalTraversal(mat,m,n);



}
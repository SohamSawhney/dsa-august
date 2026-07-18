#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortDiagonal(int mat[][10],int m,int n,int i,int j){
    int dlen=min(m-i,n-j);
  vector<int>diagonal(dlen);
for(int k=0;k<dlen;k++){
    diagonal[k]=mat[i+k][j+k];
}
sort(diagonal.begin(),diagonal.end());
for(int k=0;k<dlen;k++){
    mat[i+k][j+k]=diagonal[k];
}
}
//how many diagonal in size of matrix m*n
// (m+n)(x+x;ogx+x)
void SortMatrixDiagonally(int mat[][10],int m,int n){
    for(int j=0;j<n;j++){
         sortDiagonal(mat,m,n,0,j);
    }
    for(int i=1;i<m;i++){
        sortDiagonal(mat,m,n,i,0);
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
SortMatrixDiagonally(mat,m,n);



}
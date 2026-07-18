#include<iostream>
using namespace std;
bool f(char maze[][10],int m,int n,int i,int j){
    //base case
    if(maze[i][j]=='X'){
        return false;
    }
    if(i==m-1 and j==n-1){
        return true;
    }

// recursive case

	// f(i, j) = check if there exists a path from the (i, j)th
	// cell to the (m-1, n-1)th cell

    if(i==m-1){
        // move  right and ask your friend to check if there exists a path from (i,j)th
        //a path from   i,j+1     to m-1,n-1
        return f(maze,m,n,i,j+1);
    }
    if(j==n-1){
        	// move down and ask your friend to check if there exists
		// a path from i+1,j to m-1, n-1
        return f(maze,m,n,i+1,j);
    }
    //i!=m-1 and j!=n-1
    // option 1 move right
    // option  2 :move left


    return f(maze,m,n,i,j+1) or f(maze,m,n,i+1,j);

}
int main(){
    char maze[][10]={
        "0000",
        "00X0",
        "X0XX",
        "0X00"
    };
    int m=4;
    int n=4;
    f(maze,m,n,0,0)?cout<<"pathFound"<<endl:cout<<"Path not found"<<endl;
    return 0;
}
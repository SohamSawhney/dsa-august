#include<iostream>
using namespace std;
bool f(char maze[][10],int m,int n,int i,int j){
    //base case 
    if(i==m or j==n){   //you have gone outside maze 
        return false;
    }
    if(maze[i][j]=='X'){    // you reached    a blocked  cell 
        return false;
    }
    if(i==m-1 and j==n-1){   // you reached destination cell
        return true;

    }
    //recursive case 
    // f(i,j)     check  if there exists a path from (i,j)
    //cell to   (m-1,n-1)th cell 

    //decide next step 
    // i!=m-1 and j!=n-1

    // option 1 :move right 
    // option 2 :move down 

    return f(maze,m,n,i,j+1) or f(maze,m,n,i+1,j);

}
int main(){
    	char maze[][10] = {
		"0000",
		"00X0",
		"X00X",
		"0X00"
	};

	int m = 4;
	int n = 4;

	f(maze, m, n, 0, 0) ? cout << "path found" << endl : cout << "path not found" << endl;

	return 0;

}
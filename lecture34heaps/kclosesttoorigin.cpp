#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>kClosest(vector<vector<int>>&points,int k){
       priority_queue<pair<int,pair<int,int>>>pq;
    for(int i=0;i<points.size();i++){
      
        int x=points[i][0];
        int y=points[i][1];

        int dis=x*x+y*y;

        pq.push({dis,{x,y}});
        if(pq.size()>k){
            pq.pop();
        }
    }

    vector<vector<int>>ans;

    while(!pq.empty()){

    }
     
}



int main()
{
    vector<vector<int>> points = {
        {1, 3},
        {-2, 2},
        {5, 8},
        {0, 1}
    };

    int k = 2;

    vector<vector<int>> result = kClosest(points, k);

    cout << "K Closest Points:\n";

    for (auto point : result)
    {
        cout << "[" << point[0] << ", " << point[1] << "]\n";
    }

    return 0;
}
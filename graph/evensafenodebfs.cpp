#include<bits/stdc++.h>
using namespace std;
class solution{
    public:


    vector<int>eventualSafeNodes(int V,vector<int>adj[]){
        vector<int>adjRev[V];
        int indegree[V]={0};
        
    }
}
int main(){
 

    vector<int> adj[12] = {
    {1},        // 0 → 1
    {2},        // 1 → 2
    {3, 4},     // 2 → 3,4
    {4, 5},     // 3 → 4,5
    {6},        // 4 → 6
    {6},        // 5 → 6
    {7},        // 6 → 7
    {},         // 7 → terminal
    {1, 9},     // 8 → 1,9
    {10},       // 9 → 10
    {8},        // 10 → 8 (cycle)
    {9}         // 11 → 9
};


int V=12;
solution obj;
vector<int>safeNodes=obj.eventualSafeNodes(V,adj);

}
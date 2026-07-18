#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5,0);   //create a vector of size 5 and initialize all value by 0
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"size is "<<v.size();
    cout<<"capacity is"<<v.capacity();
    v.push_back(1);
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"size is "<<v.size()<<endl;
    cout<<"capacity is"<<v.capacity()<<endl;
    vector<int>v2=v;







    vector<int>v4={1,2,3,4,5};
    vector<int>v5(v4.begin()+2,v4.begin()+4);
    //[2,4)
    for(int i=0;i<v5.size();i++){
      cout<<v5[i];
    }
    vector<int>v6(v4.begin(),v4.begin()+5);

    for(int i=0;i<v6.size();i++){
        cout<<v6[i];
    }
}

// Vectors Part I

// 	How to create a vector ?
// 		> use empty container constructor (default constructor)
// 	How to add elements to a vector ?
// 	    > use vector::push_back to add element at back (constant time operator)
// 	How to remove elements from a vector ?
// 	    > use vector::pop_back to remove element from back (constant time operation)
// 	    > use vector::clear to remove all the elements from a vector
// 	How to check size of a vector ?
// 		> use vector::size to know number of elements in a vector
// 		> use vector::capacity to know current capacity of the vector
// 		> use vector::max_size to know maximum number of elements that can added in a vector
// 	How to check if a vector is empty ?
// 	    > use vector::empty or check if vector size is 0
// 	How to access elements in a vector at a particular index ?
// 	    > use vector::operator[]
// 	    > use vector::at
// 	How to iterate over elements in a vector ?
// 	    > use indexing like arrays
// 	    > use an iterator
// 	    > use forEach loop








#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    cout<<"size is"<<v.size()<<endl;
    cout<<"capacity is "<<v.capacity()<<endl;
v.push_back(12);
    cout<<"new size is"<<v.size()<<endl;
    cout<<"new ncapacity is"<<v.capacity()<<endl;
    v.push_back(60);
    cout<<"new size is"<<v.size()<<endl;
    cout<<"new ncapacity is"<<v.capacity()<<endl;
    v.push_back(19);
    cout<<"new size is"<<v.size();
    cout<<"new ncapacity is"<<v.capacity()<<endl;
    v.push_back(80);
    cout<<"new size is"<<v.size()<<endl;
    cout<<"new ncapacity is"<<v.capacity()<<endl;


    cout<<v[v.size()-1]<<endl;
    cout<<"last element is "<<v.back()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int it:v){
        cout<<it;
    }
    cout<<endl;
      for(auto it:v){
        cout<<it;
    }
    cout<<endl;
    cout<<endl;
      for(int &it:v){         // it is  like a reference avoid copy  
        cout<<it;
    }
    cout<<endl;
    v.empty()?cout<<"true vector is empty":cout<<"false vector vector is  not empty()";
    v.clear();
    cout<<v.size(); 

    
    return 0;

}
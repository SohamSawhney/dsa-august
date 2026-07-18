#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);
      s.insert(4);
        s.insert(3);
      s.insert(2);
      s.insert(2);   // ignored(duplicates)
      
      cout<<"size is :"<<s.size()<<endl;
      s.erase(5);
      cout<<"size:"<<s.size()<<endl;

      for(auto it=s.begin(),end=s.end();it!=end;it++){
        cout<<*it<<" ";
      }
      cout<<endl;
     for(auto x:s){
        cout<<x<<endl;
     }

      auto it=s.begin();
      it++;
      s.erase(it);

      cout<<"size="<<s.size()<<endl;


      for(auto x:s){
        cout<<x<<" ";
      }

      cout<<endl;


      if(s.find(3)!=s.end()){
        cout<<"3 is present"<<endl;

      }
      else{
        cout<<"3 is absent"<<endl;
      }
     


      if(s.find(4)!=s.end()){
        cout<<"4 is present"<<endl;
      }
      else{
        cout<<"4 is absent"<<endl;
      }



      s.erase(s.find(4));


      if(s.find(4)!=s.end()){
        cout<<"4 is present"<<endl;
      }
      else{
        cout<<"4 is absent"<<endl;
      }



      if(s.count(5)){
        cout<<"5 is present"<<endl;
      }
      else{
        cout<<"5 is absent"<<endl;
      }


      s.clear();
      s.empty()?cout<<"set<> is empty":cout<<"not empty";




      // multiset<int>s;      show all element no uniqueness 
}










// set is a container in C++ STL (Standard Template Library) that:

// Stores unique elements only (no duplicates)

// Automatically stores elements in sorted (ascending) order

// Uses Balanced Binary Search Tree (Red-Black Tree) internally

// Allows fast search, insert, delete (Time Complexity: O(log n))




set<int, greater<int>> s;









// Common Operations
// Operation	Code Example	Description
// Insert	s.insert(10);	adds element
// Erase	s.erase(3);	removes element
// Find	auto it = s.find(5);	return iterator
// Count	s.count(5)	1 if exists else 0
// Size	s.size()	no. of elements
// Empty	s.empty()	check empty
// Clear	s.clear()	remove all
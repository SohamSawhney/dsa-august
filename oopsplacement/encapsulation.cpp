#include<iostream>
using namespace std;
class Student{
 private:
    int age;
public:
void setAge(int a){
    if(a>=18){
        age=a;
    }
    else{
        cout<<"Invalid  age"<<endl;
    }
}
int getAge(){
    return age;
}

};

int main(){
    Student s;

    s.setAge(20);
    cout<<s.getAge();

}








// Answer:

// Encapsulation is the process of combining data
// and methods into a single class and restricting direct access 
//to the data using private members while providing controlled access 
//through public methods.
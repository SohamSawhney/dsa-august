#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int age;
    char gender;
    double credits;
    customer(){
        cout<<"\n inside the default constructor of the customer class"<<endl;

    }
    customer(string name,int age,char gender,double credits){
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->credits=credits;

    }
    void print(){
        cout<<"name="<<name<<endl;
        cout<<"age="<<age<<endl;
        cout<<"gender="<<gender<<endl;
        cout<<"credits="<<credits<<endl;


    }
    

};

int main(){
    customer c("Ramanujan",32,'M',1729);
    c.print();

}


// ❌ Problems

// Name Shadowing (variable hiding)
// Inside the constructor, parameters have the same names as the class members.
// So when you write:

// name = name;


// it just assigns the parameter name to itself, not the class’s name member.
// The class member never gets initialized.


// this points to the object that invoked the member function.

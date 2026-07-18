#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound(){
        cout<<"Animal sound"<<endl;

    }

};
class Dog:public Animal{
    public:
    void sound() override{
        cout<<"Dog barks"<<endl;
    }
};

int main(){
    Animal *a;
    Dog d;
    a=&d;
    a->sound();
}




//  virtual function enables dynamic binding 

// pointer->Animal*
//object->Dog        so it calls Dog::sound()
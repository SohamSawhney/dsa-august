#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound()=0;
};
class Dog:public Animal{
    public:
    void sound() override{
          cout<<"Bark"<<endl;
    }
};

class cat:public Animal{
    public:
    void sound() override{
        cout<<"Meow"<<endl;
    }
};

int main(){
    Dog d;
    cat c;
    d.sound();
    c.sound();
}
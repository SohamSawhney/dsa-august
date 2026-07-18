#include<iostream>
using namespace std;
class Employee{
    public:
    virtual void bonus(){
        cout<<"General Bonus"<<endl;
    }
};
class Manager:public Employee{
    public:
    void bonus() override{
        cout<<"Bonus=50000"<<endl;
    }
};
class Developer:public Employee{
    public:
       void bonus() override{
        cout<<"Bonus=50000"<<endl;
       }
};
int main(){
    Employee *e;
    Manager m;
    Developer  d;

    e=&m;
    e->bonus();
    e=&d;
    e->bonus();
}
#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int age;
    char gender;
    double credits;
    customer(){
        cout<<"\n I am inside default constructor of the customer class\n";

    }
    void print(){
        cout<<"name="<<name<<endl;
        cout<<"age="<<age<<endl;
        cout<<"gender="<<gender<<endl;
        cout<<"age="<<age;

    }
};
int main(){
    customer c1;
    customer c2;
    return 0;
}



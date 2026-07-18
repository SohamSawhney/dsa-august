#include<iostream>
using namespace std;
class customer{
    public:
    string* nameptr;
    int age;
    char gender;
    double credits;

    customer(string n,int a,char g,double c){
        cout<<"\n inside the parameterized constructor of the customer class\n"<<endl;
        nameptr=new string;
        *nameptr=n;
        age=a;
        gender=g;
        credits=c;

    }
    void print(){
        cout<<"name="<<*nameptr<<endl;
        cout<<"age="<<age<<endl;
        cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl << endl;

    }

};

int main(){
    customer c("Ramanujan",32,'M',1729);
    c.print();

    return 0;
}
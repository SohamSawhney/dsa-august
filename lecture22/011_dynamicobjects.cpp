#include<iostream>
using namespace std;
class customer{
   public:
   string name;
   int age;
   char gender;
   double credits;
   customer(){
    cout<<"inside the default constructor of the customer class"<<endl;

   }
   customer(string n,int a,char g,double c){
    cout<<"\n inside the parameterized constructor of the customer class"<<endl;
    name=n;
    age=a;
    gender=g;
    credits=c;
   }
   void print(){
    cout<<"name="<<name<<endl;
    cout<<"age="<<age<<endl;
    cout<<"gender="<<gender<<endl;
    cout<<"credits="<<credits<<endl;
   }
};
int main(){
    customer* cptr1=new customer;
    cin>>cptr1->name>>cptr1->age>>cptr1->gender>>cptr1->credits;
    cptr1->print();
    customer* cptr2=new customer("Ramanujan",32,'M',1729);
    cptr2->print();

    return 0;
}
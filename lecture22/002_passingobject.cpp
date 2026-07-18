#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int age;
    char gender;
    double credits;

};
void print(customer c){
    cout<<"name="<<c.name<<endl;
    	cout << "age = " << c.age << endl;
	cout << "gender = " << c.gender << endl;
	cout << "credits = " << c.credits << endl << endl;
    c.age++;     //changes will not be done as it is passed by value
}
int main(){
    customer c1;
    c1.name="akash";
    c1.age=20;
    c1.gender='M';
    c1.credits=600;
    print(c1);
    cout<<c1.age;
   
    customer c2;
    cin>>c2.name>>c2.age>>c2.gender>>c2.credits;
   print(c2);
   cout<<c2.age;

	return 0;

}
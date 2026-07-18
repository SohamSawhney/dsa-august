#include<iostream>
using namespace std;
class Student{
public:
 string name;
 int age;
 Student(string n,int a){
    name=n;
    age=a;

 }
 Student(const Student &obj){
    name=obj.name;
    age=obj.age;
 }
 void display(){
    cout<<name<<" "<<age<<endl;
 }
 
};

int main(){
    Student s1("soham",21);
    Student s2=s1;
    s2.display();
    return 0;

}
#include<iostream>
using namespace std;
void greet(){
    cout<<"namaste"<<endl;

}
int  add(int a,int b){
    return a+b;
}
bool ascending(int a,int b){
    return a>b;
}
int main(){

    // printing address of function in memory
    cout<<(void*)&greet<<endl;
    cout<<(void*)&add<<endl;
    cout<<(void*)&ascending;
    greet();


    void (*gptr)() = &greet;
int (*aptr)(int, int) = &add;
bool (*ascptr)(int, int) = &ascending;


cout << (void*)gptr << endl;
cout << (void*)aptr << endl;
cout << (void*)ascptr << endl;

greet();
(*gptr)();
gptr();

cout << add(1, 2) << endl;
cout << (*aptr)(1, 2) << endl;
cout << aptr(1, 2) << endl;
cout << (*add)(1, 2) << endl;


cout << ascending(3, 4) << endl;     // false (0)
cout << (*ascptr)(3, 4) << endl;     // false (0)
cout << ascptr(3, 4) << endl;        // false (0)
cout << (*ascending)(3, 4) << endl;  // false (0)


  
}
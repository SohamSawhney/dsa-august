#include<iostream>
using namespace std;
int main(){
    char grade;
    cin>>grade;
    if(grade=='A'){
        cout<<"very good";
    }
    else if(grade=='B'){
        cout<<"good";
    }
      else if(grade=='C'){
        cout<<"average";
    }
      else if(grade=='D'){
        cout<<"poor";
    }

    switch(grade){
        case 'A':cout<<"very good"<<endl;break;
        case 'B':cout<<"good"<<endl;break;
        case 'C':cout<<"average"<<endl;break;
        case 'D':cout<<"bad"<<endl;break;
        default:cout<<"poor"<<endl;
    }
    return 0;
    
}
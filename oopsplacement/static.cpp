
#include <bits/stdc++.h>
using namespace std;

class Student {
public:
 static int count;   // Declaration
};

// Definition
int Student::count=0;


int main() {

    Student s1;
    Student s2;

    s1.count++;
    s2.count++;

    cout << Student::count;

    return 0;
}






// A static variable is shared by all objects.

// So only one copy should exist.

// If it were created inside every object, it wouldn't be shared.

// Therefore, C++ requires you to define it once outside the class.
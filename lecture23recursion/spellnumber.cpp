#include<iostream>
using namespace std;
string words[] = {
    "zero", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine"
};
void spellNumber(int n) {
    // base case
    if (n == 0) return;

    // recursive call for remaining digits
    spellNumber(n / 10);

    // print last digit
    cout << words[n % 10] << " ";
}

int main(){
    int n=123;
    spellNumber(n);
    return 0;
}
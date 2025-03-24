#include<iostream>
using namespace std;

int main(){
    int a=10;
    // Preincrement -> first increment then use
    // Postincrement -> first use then increment.

    cout << ++a << endl; // a=11 then print a;
    cout << a++ << endl; // first print 11 then a=12;
    cout << a << endl; // print a=12;
}
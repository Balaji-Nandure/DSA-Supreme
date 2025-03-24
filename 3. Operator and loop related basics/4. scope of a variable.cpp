#include<iostream>
using namespace std;

int global = 105;
int main(){
    int a; // variable declaration
    int b=3; // variable initialisation

    b=8; // this is updation

    // int b=5; This line wont work because of redefination

    if (true){
        int b = 10;
        cout << "Inside if condition b:" << b << endl; // socpe inside if statement only
    }

    cout << "Outside if condition b: " << b << endl;
    cout << "Gobal variable " << global ;
    return 0; // because main functino is supposed to return int value
}
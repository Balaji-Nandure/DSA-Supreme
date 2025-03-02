#include<iostream>
using namespace std;

int main (){
    int a = 5;
    char ch = 'a';
    char ch1 = 256; //Might through error here


    // cout << "Size of int: " << sizeof(a) << endl;
    cout << "Size of char: " << sizeof(ch) << endl;
    cout << "Size of char with ASCII value 256: " << sizeof(ch1) << endl;

    cout << ch1 << endl;
}
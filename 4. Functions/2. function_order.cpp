#include<iostream>
using namespace std;

int add(int a, int b); //function declaration

int main(){
    cout << add(5,1);  // function calling
    return 0;
}

// Function defination
int add(int a, int b){
    return a+b;
}


#include<iostream>
using namespace std;

int main(){
    int val;
    cin >> val;

    switch (val){
        // Remove break statments and play with the code see how it responds. try moving default condition to top and see waht happens
        case 1 : cout << "1";  break;
        case 2 : cout << "2";  break;
        case 3 : cout << "3";  break;
        case 4 : cout << "4";  break;
        default: cout << "default"; break;
    }
}
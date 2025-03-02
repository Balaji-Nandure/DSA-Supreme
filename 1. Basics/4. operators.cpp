#include<iostream>
using namespace std;

int main (){
    int a = 5;
    int b = 3;

    cout << a << " " << b << endl;
    cout << a+b<< endl;
    cout << a-b<< endl;
    cout << a*b<< endl;
    cout << a/b<< endl;
    cout << a%b<< endl;
    // cout << a>b << endl; If you dont give brackets then it will throw erorr. be careful.
    cout << (a>b) << endl;
    cout << (a<b) << endl;
    cout << (a>=b) << endl;
    cout << (a<=b) << endl;
    cout << (a==b) << endl;
    cout << (a!=b) << endl;


    // Assignmentt operator
    int c = 14;
    // Logical operator
    cout << (0&&0)<< endl;
    cout << (0||0)<< endl;
    cout << (!(0&&0))<< endl;
    cout << (!(0||0))<< endl;
}
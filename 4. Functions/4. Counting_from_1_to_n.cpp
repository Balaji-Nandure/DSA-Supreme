#include<iostream>
using namespace std;

void printCounting(int a){
    for(int i=1; i<=a; i++){
        cout << i << " ";
    }
}

int main(){
    int n=10;
    printCounting(n);
    return 0;
}
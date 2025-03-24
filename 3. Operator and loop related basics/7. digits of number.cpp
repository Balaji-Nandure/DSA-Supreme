#include<iostream>
using namespace std;

int main(){
    int n = 123 ;
    int numberOfDigits = 0;
    while(n>0){
        int digit = n%10;
        cout << digit << " ";
        n/=10;
        numberOfDigits++;
    }

    cout << "Total number of digits: " << numberOfDigits ;
}
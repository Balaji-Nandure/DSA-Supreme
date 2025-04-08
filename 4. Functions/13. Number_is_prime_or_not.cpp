#include<iostream>
using namespace std;

bool checkPrime(int num){
    bool isPrime = true;
    if(num<2){
        return false;
    }

    for(int i=2; i<num; i++){
        if (num%i == 0){
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

int main(){
    int num = 710;

    if(checkPrime(num)){
        cout << "Prime";
    }else {
        cout << "Not Prime";
    }
    return 0;
}
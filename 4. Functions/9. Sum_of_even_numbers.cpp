#include<iostream>
using namespace std;

int printEvenSum(int n){
    int sum = 0;
    // Here we are unnecessarily wasting cpu cycles
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            sum += i;
        }
    }
    
    return sum;
}

int printEvenSum1(int n){
    int sum = 0;
    // Efficient solution
    for(int i=2; i<=n; i+=2){
        sum += i;
    }

    return sum;
}


int main(){
    int n = 10;
    cout << printEvenSum(n) << endl;
    cout << printEvenSum1(n) << endl;

    return 0;
}
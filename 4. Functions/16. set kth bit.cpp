#include<iostream>
using namespace std;

setKthBit(int n, int k){
    int mask = 1 << k;
    return n | mask;
}

int main(){
    int n = 10;
    int k = 2;

    cout << setKthBit(n, k);


    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int count = 0;

    // why not n>=0? because n can also be a negative number
    while(n!=0){
        if ((n&1) == 1){
            count ++;
        }
        n = n>>1;
    }

    cout << " The total set bits in this number is : " << count ;
}
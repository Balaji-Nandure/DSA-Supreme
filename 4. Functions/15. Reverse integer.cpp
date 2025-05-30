#include<iostream>
using namespace std;

int reverse(int x) {
    int ans=0, reminder=0;
    bool isNegative = x<0 ;

    if(x <= INT_MIN){
        return 0;
    }

    if(isNegative){
        x = -x;
    }
    
    while(x>0){
        if(ans > INT_MAX/10) {
            return 0;
        }   
        int digit = x%10;
        ans = ans*10+digit;
        x=x/10;
    }

    return isNegative? -ans : ans;
}

int main(){

    cout << reverse(123456);

    return 0;
}
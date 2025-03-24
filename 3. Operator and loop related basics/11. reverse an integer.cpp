#include<iostream>
using namespace std;

int main(){
    int num = -537;
    int temp = num;

    int ans =0;
    num=abs(num);
    while(num>0){
        int digit = num%10;
        ans = ans*10 + digit;
        num=num/10;
    }

    if(temp<0){
        ans = -ans;
    }


    cout << "reversed number is : " << ans;
}
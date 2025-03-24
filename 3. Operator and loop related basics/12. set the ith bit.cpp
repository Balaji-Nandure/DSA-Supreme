#include<iostream>
using namespace std;

void setIthBit(int n, int i){
    int ans = 1 << i;
    ans = ans | n;
    cout << "After setting ith bit n is : " << ans;
}

int main(){
    int n = 3;
    setIthBit(n, 3);
}
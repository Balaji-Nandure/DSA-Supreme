#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int main(){
    int ans = sum(10,6);
    cout << "Sum is : " << ans;
    return 0;
}
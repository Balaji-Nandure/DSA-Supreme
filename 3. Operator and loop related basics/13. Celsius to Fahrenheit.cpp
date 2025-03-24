#include<iostream>
using namespace std;

void convertToF(float temp){
    // Nothing just a simple formula 9/5 + 32
    float F = (9*temp)/5 +32;
    cout << "Temprature in fahrenheit is : "<< F ;
}

int main(){
    float temp = 79.62;
    convertToF(temp);
    return 0;
}
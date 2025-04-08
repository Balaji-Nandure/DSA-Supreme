#include<iostream>
using namespace std;

int maximum(int p, int q, int r){
    if(p>q && p>r){
        return p;
    } 
    else if (q>r){
        return q;
    }
    else {
        return r;
    }
}

int main(){
    int a=12, b=5, c=40;
    cout << maximum(a,b,c);
    return 0;
}
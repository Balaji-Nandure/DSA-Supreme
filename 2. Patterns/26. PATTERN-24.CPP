#include<iostream>
using namespace std;

int main(){
    int n=4;
    // cin>>n;

    int c=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << c;
            c++;

            if(j!=i){
                cout << "*";
            }
        }
        cout << endl;
    }
    // print out c value ot just understand whats happenign to c at the end
    // cout << c << endl; // for n=4, c is 11


    int start = c-n;
    for(int i=0; i<n; i++){
        int k = start;
        for(int j=0; j<n-i; j++){
            cout << k;
            k++;

            if(j<n-i-1){
                cout << "*";
            }
        }
        start = start - (n-i-1);
        cout << endl;
    }
}
#include<iostream>
using namespace std;

int main(){
    int n=4;
    
    for (int i=0; i<2*n; i++){
        int condition = i<n ? i : 2*n-i-1;
        int space_count = i<n ? 2*(n-condition-1) : 2*(i-n);
        for(int j=0; j<2*n; j++){
            if (j<=condition){
                cout << "* ";
            } else if( space_count >0){
                cout << "  ";
                space_count--;
            } else{
                cout << "* ";
            }
        }
        cout << endl;
    }
}
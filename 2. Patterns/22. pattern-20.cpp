#include<iostream>
using namespace std;

int main (){
    //  Inverted hollow number pyramid
    // 1 2 3 4 5
    // 1     4
    // 1   3
    // 1 2
    // 1 
    int n = 5; 
    // cin>>n;

    for(int i=0; i<n; i++){
        for (int j=0; j<(n-i); j++){
            if (i==0 || j==0 || (i+j)==(n-1)){
                // Check printing both the couts. both will give different paatterns but there is something to learn also.
                // cout << j+1 << " ";
                cout << i+j+1 << " ";
            } else {
                cout << "  ";
            }
        }

        cout << endl;
    }
}
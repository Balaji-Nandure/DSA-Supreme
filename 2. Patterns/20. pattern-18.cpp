#include<iostream>
using namespace std;

int main (){
    // Numeric hollow pyramid;
    //      1
    //     1 2
    //    1   3
    //   1     4
    //  1-2-3-4-5
    int n = 5;

    for (int i=0; i<n; i++){
        //Spaces
        for (int j=0; j<n-i-1; j++){
            cout << " ";
        }

        // Numbers with spaces in betweenn
        int start = 1;
        for (int j=0; j<2*i+1; j++){
            // first row or last row

            if( i==0 || i==n-1){
                if( j%2==0 ){
                    cout << start;
                    start++;
                }else {
                    cout << "-";
                }
            } else {
                // if first column
                if(j==0){
                    cout << 1;
                } else if(j == 2*i){
                    cout << i+1;
                } else {
                    cout << " ";
                }

            }
        }

        cout << endl;
    }
}
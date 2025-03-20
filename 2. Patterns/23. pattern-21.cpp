#include<iostream>
using namespace std;

int main (){
    // Numeric palindrome equilateral pyramid
    //         1 
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1
    int n = 5; 

    for(int i=0; i<n; i++){
        // print spaces
        for (int j=0; i+j+1<n; j++){
           cout << "  ";
        }

        // Print first half of pyramid
        for (int j=0; j<=i; j++){
            cout << j+1 << " ";
        }

        int num;
        // Print 2nd half of pyramid
        for (int j=0; j<i; j++){
            if (j==0){
                num = i+j-1;
            }
            cout << num+1 << " ";
            num--;
        }

        cout << endl;
    }
}
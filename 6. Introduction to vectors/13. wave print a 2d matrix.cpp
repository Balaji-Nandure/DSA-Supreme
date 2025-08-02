#include<iostream>
#include<vector>
using namespace std;

void wavePrint(vector<vector<int>> &v){
    int rows = v.size();
    int cols = v[0].size();

    // this also works, but for practice lets solve below code.
    // for(int j=0; j<cols; j++){
    //     if(j%2 == 0){ //even
    //         for(int i=rows-1; i>=0; i--){
    //             cout << v[i][j] << " ";
    //         }
    //     }else{ // odd
    //         for(int i  =0; i<rows; i++){
    //             cout << v[i][j]<< " ";
    //         }
    //     }
    // }

    // wavepriinting 2 .

    // for(int j=cols-1; j>=0; j--){
    //     if(j%2 == 0){ //even
    //         for(int i=rows-1; i>=0; i--){
    //             cout << v[i][j] << " ";
    //         }
    //     }else{ // odd
    //         for(int i  =0; i<rows; i++){
    //             cout << v[i][j]<< " ";
    //         }
    //     }
    // }

    // // wavepriinting 3 by keeping row maving slowly.

    // for(int i=0; i<rows; i++){
    //     if(i%2 == 0){
    //         for(int j=0; j<cols; j++){
    //             cout << v[i][j] << " ";
    //         }
    //     }else{
    //         for(int j=cols-1; j>=0; j--){
    //             cout << v[i][j] << " ";
    //         }
    //     }
    // }

    // wavepriinting 4.

    for(int i=rows-1; i>=0; i--){
        if(i%2 == 0){
            for(int j=cols-1; j>=0; j--){
                cout<< v[i][j] << " ";
            } 
        } else {
            for(int j=0; j<cols; j++){
                cout<< v[i][j] << " ";
            }
        }
    }


    
}

int main(){
    vector<vector<int>> v = {
        {1,2,3}, 
        {4,5,6}, 
        {7,8,9} 
    };

    wavePrint(v);
}
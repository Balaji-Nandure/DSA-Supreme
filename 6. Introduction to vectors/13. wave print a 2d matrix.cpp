#include<iostream>
#include<vector>
using namespace std;

void wavePrint(vector<vector<int>> &v){
    int rows = v.size();
    int cols = v[0].size();

    // this also works, but for practice lets solve below code.
    for(int col=0; col<cols; col++){
        if(col%2 == 0){ //even
            for(int row=rows-1; row>=0; row--){
                cout << v[row][col] << " ";
            }
        }else{ // odd
            for(int row  =0; row<rows; row++){
                cout << v[row][col]<< " ";
            }
        }
    }


    // Great this approach wont work for all the inputs 
    // always use above approach.
    // for(int i=0; i<rows; i++){
    //     if(i%2 == 1){
    //         for(int j=0; j<cols; j++){
    //             cout << v[j][i] << " ";
    //         }
    //     }
    //     else{
    //         for(int j=cols-1; j>=0; j--){
    //             cout << v[j][i] << " ";
    //         }
    //     }
    // }
}

int main(){
    vector<vector<int>> v = {
        {1,2,3,4}, 
        {5,6,7,8}, 
        {9,10,11,12} 
    };

    wavePrint(v);
}
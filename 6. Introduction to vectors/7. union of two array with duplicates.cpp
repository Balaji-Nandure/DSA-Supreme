#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a[] = {1,2,3,9,10,5};
    int sizea = 6;
    int b[] = {2,3,4,5,6,7,8};
    int sizeb = 7;

    bool flag = false;
    vector<int> output;

    // first push all the elements of array a in output vector
    for(int i=0; i<sizea; i++){
        output.push_back(a[i]);
    }

    // now loop over array b and before pushing element in output array check if element is already present in output or not.
    for(int i=0; i<sizeb; i++){
        bool flag = false;
        for(int j=0; j<output.size(); j++){
            if(output[j] == b[i]){
                flag = true;
                break;
            }
        }
        if(!flag){
            output.push_back(b[i]);
        }
    }

    // Print output array
    for(int i=0; i<output.size(); i++){
        cout << output[i] << " ";
    }
    return 0;
}
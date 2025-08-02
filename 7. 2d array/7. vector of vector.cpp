#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr;
    vector<int> a = {7,4,1};
    vector<int> b = {8,5,2};
    vector<int> c = {9,6,3};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(int i=0; i< arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++ ){
            cout << arr[j][i] << " ";
        }

        cout << endl;
    }

    return 0;
}
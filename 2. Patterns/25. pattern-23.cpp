#include<iostream>
using namespace std;

int main(){
    // It is just a fancy pattern but ull learn so many things here.
    // n can go upto 9 max
    int n = 5;

    for(int i=0; i<n; i++){
        int start_num_index = 8-i;
        int num = i+1;
        int count_num = num;

        for (int j=0; j<17; j++){
            if (j == start_num_index && count_num > 0){
                cout << num;
                start_num_index += 2;
                count_num--;
            }else {
                cout<<"*";
            }
        }
        cout<<endl;
    }



    return 0;
}
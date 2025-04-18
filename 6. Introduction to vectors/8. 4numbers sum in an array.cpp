#include<iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 16;
    int size = 10;

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            for(int k= j+1; k<size; k++){
                for(int l=k+1; l<size; l++){
                    if((a[i]+a[j]+a[k]+a[l]) == sum ){
                        cout << a[i] << ", "<< a[j] << ", "<< a[k] << ", "<< a[l] << endl;
                    }
                }
            }
        }
    }

    return 0;
}
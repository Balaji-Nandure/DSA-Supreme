// N size fo array form 1 to N

#include<iostream>
using namespace std;

int findMissing(int a[], int n){
    for (int i=0; i<n; i++){
        int index = abs(a[i]);
        if(a[index -1 ] > 0){
            a[index -1 ] = -a[index -1];
        }
    }
    
    for(int i=0; i<n; i++){
        if(a[i] > 0){
            return i+1;
        }
    }

    return n+1;
}

int main(){
    int n;
    int a[] = {1,3,5,3,4};

    n = sizeof(a)/sizeof(a[0]);

    int ans =  findMissing(a, n);
    cout << ans << endl;

    return 0;
}
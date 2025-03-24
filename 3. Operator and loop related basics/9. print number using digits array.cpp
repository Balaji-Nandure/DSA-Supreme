#include<iostream>
using namespace std;

int main(){
    int digit[4] = {3,9,6,8};
    int ans = 0;
    for(int i=0; i<4; i++){
        ans = ans *10 + digit[i]; // Just multiply the previous answer by 10 and add the unit digit to it.
    }

    cout << "Final digit is : " << ans;
    return 0;
}
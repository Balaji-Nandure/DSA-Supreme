#include<iostream>;
using namespace std;

int main(){
    for(int i=0; i<10; i++){
        if(i==4 || i==8){
            continue; // this will terminate the current iteration only not the whole loop;
        }

        cout << i << endl ;
    }
}
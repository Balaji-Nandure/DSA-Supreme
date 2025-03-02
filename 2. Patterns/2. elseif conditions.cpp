#include<iostream>
using namespace std;

int main (){
    int score;
    cout << "Enter your score: ";
    cin >> score;

    if(score <= 40 ) {
        cout << "You did not pass the exam.";
    } else if(score <= 80){
        cout << "You passed the exam. but try to score more next time.";
    } else if(score <= 100){
        cout << "Congratulations! very good!";
    } else {
        cout << "Invalid score. Please enter a number between 0 and 100.";
    }
}
#include <iostream>

using namespace std;
int main (){

    int score;

    cout << "Enter Your Score : ";
    cin >> score;

    if (score >=50){
        cout << "You are Passed" <<endl;
    }
    else {
        cout << "You are Failed" <<endl;
    }
    return 0;
}
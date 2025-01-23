#include<iostream>
using namespace std;

void checkEvenOdd (int n){
    //can be done using bitwise like this
    //if ((n & 1) == 0) cout << "Even Number";
    if ((n % 2) == 0){
        cout << "Even Number";
    }
    else
        cout << "Odd Number";
}

int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n ;
    checkEvenOdd(n);
    return 0;
}
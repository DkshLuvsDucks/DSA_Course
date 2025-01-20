#include<iostream>
using namespace std;

void sumToN (int n){
    int sum = 0;
    for( int i = 0; i <= n; i++){
        sum += i;
    }
    cout << "Sum to N numbers is " << sum << endl;
}

void sumEvenNum (int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++){
        if((i % 2) == 0){
            sum += i;
        }
    }
    cout << "Sum of even numbers to N is " << sum << endl;
}

int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n;
    sumToN(n);
    sumEvenNum(n);
    return 0;
}
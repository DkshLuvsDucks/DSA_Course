#include<iostream>
using namespace std;

void digitsOfNum (int num){
    while(num){
        cout << "Digit: " << num % 10 << endl;
        num /= 10;
    }
}

int main(){
    int num;
    cout << "Enter Number :";
    cin >> num;
    digitsOfNum(num);
    return 0;
}
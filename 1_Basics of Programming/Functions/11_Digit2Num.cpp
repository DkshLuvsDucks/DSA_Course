#include<iostream>
using namespace std;

int digits2Num (int numDigits){
    int num = 0;
    for(int i = 0; i < numDigits; i++){
        int tempNum;
        cout << "Enter a Digit: ";
        cin >> tempNum;
        num = 10 * num + tempNum;
    }
    return num;
}

int main(){
    int numDigits;
    cout << "Enter Number of digits you wish to enter: ";
    cin >> numDigits;
    cout << "Final Number is : " << digits2Num(numDigits); 
    return 0;
}
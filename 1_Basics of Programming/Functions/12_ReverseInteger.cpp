#include<iostream>
#include<limits.h>

using namespace std;

int reverseInteger (int num){
    int ans = 0, remainder = 0;
    if(num <= INT_MIN)
        return 0;
    
    bool ifNegative = false;
    if(num < 0){
        ifNegative = true;
        num *= -1;
    }
    while (num > 0){
        if (ans > INT_MAX / 10) 
            return 0;
        int digit = num % 10;
        ans = ans * 10 + digit;
        num /= 10;
    }
    if(ifNegative) return -1 * ans;
    else return ans;
}

int main(){
    int num;
    cout << "Enter Number : ";
    cin >> num;
    cout << "Reverse Number is : " << reverseInteger(num);
    return 0;
}
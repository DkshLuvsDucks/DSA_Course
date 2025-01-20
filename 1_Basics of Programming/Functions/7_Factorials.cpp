#include<iostream>
using namespace std;

int fact (int num){
    if(num < 0){
        cout << "Factorial not defined for negative numbers...";
        exit(1);
    }
    if ((num == 0) or (num == 1))
        return 1;
    else
        return num * fact(num - 1);
}

int main(){
    int num;
    cout << "Enter Number : ";
    cin >> num;
    cout << "Factorial of given number is : " << fact(num);
    return 0;
}
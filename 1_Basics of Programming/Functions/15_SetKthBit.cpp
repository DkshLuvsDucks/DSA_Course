#include<iostream>
using namespace std;

int setKthBit (int num, int k){
    return num | (1 << k);  
}

int main(){
    int num, k;
    cout << "Enter Number : ";
    cin >> num;
    cout << "Enter the bit u want to set : ";
    cin >> k;
    cout << "Final number after setting bit : " << setKthBit(num,k);
    return 0;
}
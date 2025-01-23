#include<iostream>
using namespace std;

int countSetBit (int num){
    int count = 0;
//     while (num > 0){
//         int bit = num % 2;
//         if (bit == 1) count ++;
//         num /= 2;
//     }
    while (num){
        int bit = (num & 1);
        if (bit) 
            count ++;
        num >>= 1;
    }
    return count;
}

int main(){
    int num;
    cout << "Enter Number to check number of set bits : ";
    cin >> num;
    cout << "Number of Set Bits are  : " << countSetBit(num);
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std ;

int decimal2BinaryMethod1 (int n){
    //  Division Method
    int binaryNum = 0 , i = 0 ;
    while (n>0){
        int bit = n % 2 ;
        binaryNum += bit * pow(10,i++) ;
        n = n/2 ;
    }
    return binaryNum ;
}

int decimal2BinaryMethod2 (int n){
    //  Bitwise Method
    // Bitwise operations are faster
    int binaryNum = 0 , i = 0 ;
    while (n>0){
        int bit = n & 1 ;
        binaryNum += bit * pow(10,i++) ;
        n = n >>1 ;
    }
    return binaryNum ;
}

int binary2Decimal (int n) {
    int ans = 0 ,i= 0;
    while(n>0){
        int num = n % 10 ;
        ans += num*pow(2,i++);
        n /= 10;
    }
    return ans ;
}

int main () {
    int num ;
    cout << "Enter the decimal number to convert : " ; cin >> num ;
    
    int m1 = decimal2BinaryMethod1(num);
    int m2 = decimal2BinaryMethod2(num);
    
    cout << "Number after conversion : "<< endl << "Method 1 : " << m1 << endl << "Method 2 : " << m2 << endl ;
    
    int bnum;
    cout << "Enter the binary number to convert : " ; cin >> bnum ;
    int ans = binary2Decimal(bnum);
    cout << "Number after conversion : " << ans << endl;

    return 0 ;
}
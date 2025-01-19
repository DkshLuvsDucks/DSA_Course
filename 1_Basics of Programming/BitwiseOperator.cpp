#include <iostream>
using namespace std ;

int main(){
    /*
    # BITWISE OPERATORS
    & - AND
    | - OR
    ~ - NOT
    ^ - XOR (same value = 0 ; different = 1)

    << - left shift
    >> - right shift

    */
    
    int a = 2;
    int b = 3;

    cout << "AND (BITWISE) : " << (a & b) << endl ;
    cout << "OR (BITWISE) : " << (a | b) << endl ;
    cout << "NOT (BITWISE) : "<< ~a << " "<< ~(a) << endl;
    cout << "XOR (BITWISE) : " << (a ^ b) << endl ;
    b = 2;
    cout << "XOR (BITWISE) : " << (a ^ b) << endl <<endl;
    
    //Using left and right shift
    int num1 = 5 ;
    cout << "Left Shift : " << (num1<<1) << endl ; // multiplying by 2^n usually (NOT ALWAYS TRUE)
    cout << "Right Shift : " << (num1>>1) << endl ;// dividing by 2^n usually (NOT ALWAYS TRUE)
    cout << "Some cases where shifting might cause a problem : " << endl ;
    num1 = -100 ;
    cout << "Right Shift : " << (num1>>1) << endl ; // Compiler might handle this because the default int is signed
    unsigned int num2 = -5 ;
    cout << "Right Shift : " << (num2>>1) << endl ; // This will give a large positive number
    num1 = 10 ;
    cout << "Left Shift : " << (num1<<-1) << endl ; // This will generate a garbage value
    
    
    // Find unique element (USING XOR to find a unique element in an array containing duplicate items)
    int arr[5] = {1,1,2,2,3};
    int ans = 0 ;
    for (int i = 0 ; i < 5 ; i++)
    {
        ans ^= arr[i] ;
    }
    cout <<endl<< "Unique Element : " << ans ;

    return 0;
}
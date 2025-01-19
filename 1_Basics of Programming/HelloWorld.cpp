#include<iostream>
using namespace std ;

int main(){
    
    cout << "Hello World!"<< endl ; //new line character
    cout << "HELLO" << endl << "WORLD" << "\n" ;

    //int-> size = 4 bytes
    int num = 666 ; 
    cout << "My fav number is " << num << endl ;
    cout << "num variable takes " << sizeof(num) << " bytes of space" << endl ;    
    
    return 0;

}
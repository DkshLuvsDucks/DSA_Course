// Simple if-else statements
#include <iostream>
using namespace std ;

int main() {
    
    int sides ;
    
    cout << "Enter number of sides : " ; cin >> sides ;

    if (sides==3)
    {
        cout << "Triangle" <<endl ;
    }
    else if (sides==4)
    {
        cout << "Rectangle" << endl ;
    }
    else if (sides==5)
    {
        cout << "Pentagon" << endl;
    }
    else{
        cout << "polygon is not defined in this code with "<<sides<<" side(s)..."<<endl ;
    }
}
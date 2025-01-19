#include <iostream>
using namespace std ;

int main(){
    //printing first 10 natural numbers using a for loop
    cout << "\nprinting first 10 natural numbers using a for loop..." << endl ;
    for (int i = 1 ; i<=10 ; i++)
    {
        cout << i << " " ;
    }

    //printing first 10 natural numbers using a while loop
    cout << endl << "\nprinting first 10 natural numbers using a while loop..." << endl ;
    int i=1;
    while (i<=10){
        cout << i++ << " " ;
    }

    //using nested loops
    cout << endl << "\nusing nested loops..."<< endl ;
    for (int i = 1 ; i <= 2 ; i++ )
    {
        cout << "Outer Loop (" << i << ")" << endl ;
        for(int j = 1 ; j<=3 ; j++)
        {
            cout << "Inner Loop (" << j << ")" << endl ;
        }
    }

    //using do-while loop
    cout << endl << "Using do-while loop ..." << endl ;
    i = 1;
    do
    {
        cout << "Inside the loop .... "<< endl;
        i++;
    } while (i<0);
    
    cout << endl;

    //using break / continue statements
    cout << endl << "Using break and continue statements ..." << endl ;
    for (int i = 0 ; i < 10 ; i++ )
    {
        if(i == 4)
        {
            continue;
        }
        if (i==6)
        {
            break;
        }
        cout << i << " ";
    }

    return 0;
}
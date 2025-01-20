#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime (int n){
    if (n == 1) return 0;
    if ((n == 2) || (n == 3)) return 1;
    if ((n % 2 == 0)) return 0;
    int lim = sqrt(n);
    for(int i = 3; i <= lim; i += 2){
        if((n % i) == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    cout << "Enter Number to Check : ";
    int n;
    cin >> n;
    if(checkPrime(n)){
        cout << "Prime Number";
    }
    else
        cout << "Not a Prime Number";
    return 0;
}
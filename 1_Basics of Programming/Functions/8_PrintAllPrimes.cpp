#include<iostream>
#include<cmath>
using namespace std;

bool checkPrime(int n){
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
    int num;
    cout << "Enter Number : ";
    cin >> num;
    cout << "All Primes to N are :\n";
    for(int i = 1; i < num; i++ ){
        if(checkPrime(i)){
            cout << i << " ";
        }
    }
    return 0;
}
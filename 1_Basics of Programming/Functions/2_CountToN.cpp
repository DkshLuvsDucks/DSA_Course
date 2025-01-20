#include<iostream>
using namespace std;

void countToN (int n){
    for( int i = 0; i <= n; i++){
        cout << i << endl;
    }
}

int main(){
    cout << "Enter Number to count to : ";
    int n;
    cin >> n;
    countToN (n);
    return 0;
}
#include<iostream>
using namespace std;

void NumericHollowPyramid(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if((j == 1) || (j == i) || (i == n)){
                cout << j << " ";
            }
            else{
                cout << " " << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    NumericHollowPyramid(n);
    return 0;
}
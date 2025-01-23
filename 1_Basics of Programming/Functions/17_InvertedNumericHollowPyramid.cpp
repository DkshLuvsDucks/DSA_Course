#include<iostream>
using namespace std;

void InvertedNumericHollowPyramid(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if((j==i)||(j==n)||(i==1)){
                cout << j << " ";
            }
            else
                cout << " " << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    InvertedNumericHollowPyramid(n);
    return 0;
}
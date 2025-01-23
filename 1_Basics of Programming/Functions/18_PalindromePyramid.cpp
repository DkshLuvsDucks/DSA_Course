#include<iostream>
using namespace std;

void PalindromePyramid(int n){
    int k=n;
    for(int i=0; i<n;i++){
        int c=1;
        for(int j=0;j<k;j++){
            if(j<n-i-1){
                cout << " " << " ";
            }
            else if (j<=n-1){
                cout << c++ << " ";
            }
            else if (j==n){
                c-=2;
                cout << c-- << " ";
            }
            else
                cout << c-- << " ";
        }
        k++;
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    PalindromePyramid(n);
    return 0;
}
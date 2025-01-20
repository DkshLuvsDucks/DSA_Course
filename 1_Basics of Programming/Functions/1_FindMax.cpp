#include<iostream>
using namespace std;

// int findMax (int a, int b, int c){
//     if( (a >= b) && (a >= c)){
//         return a;
//     }
//     else if ((b >= a) && (b >= c)){
//         return b;
//     }
//     else{
//         return c;
//     }
// }

int findMax (int a, int b, int c){
    return max((max(a,b)),c);
}

int main(){
    int a, b, c;
    cout << "Enter 3 Numbers: ";
    cin >> a >> b >> c;
    cout << "Max Number is " << findMax(a,b,c);
    return 0;
}
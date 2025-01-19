#include<iostream>

using namespace std;

int main(){
    float a, b;
    cout << "Enter Two Numbers: ";
    cin >> a >> b;
    int op;
    cout << "List of Operations :\n";
    cout << "0 : +\n1 : -\n2 : *\n3 : / \n";
    cout << "Enter Operation to perform : ";
    cin >> op;
    float ans;
    // if (op == 0){
    //     ans = a + b;
    // }
    // else if (op == 1){
    //     ans = a - b;
    // }
    // else if (op == 2){
    //     ans = a * b;
    // }
    // else if (op == 3){
    //     ans = a / b;
    // }
    // else{
    //     cout << "Invalid Parameter... Terminating Program!";
    //     return 0;
    // }

    //Using Switch Case

    switch (op)
    {
        case 0:
            ans = a + b;
            break;

        case 1:
            ans = a - b;
            break;

        case 2:
            ans = a * b;
            break;

        case 3:
            ans = a / b;
            break;
            
        default:
            cout << "Invalid Parameter... Terminating Program!";
            return 0;
    }

    cout << "Answer : " << ans;
    return 0;
}
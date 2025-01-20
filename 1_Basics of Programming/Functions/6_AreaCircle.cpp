#include<iostream>
using namespace std;

#define PI 3.14159265359

float findAreaCircle (float radius){
    return PI*radius*radius;
}

int main(){
    float radius;
    cout << "Enter Radius of Circle : ";
    cin >> radius;
    cout << "Area of Circle is : " << findAreaCircle(radius);
    return 0;
}
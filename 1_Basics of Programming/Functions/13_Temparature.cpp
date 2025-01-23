#include<iostream>
using namespace std;

float celsius2Kelvin (float temp){
    return temp + 273.15;
}

float celsius2Fahrenheit (float temp){
    return temp * 1.80 + 32;
}

int main(){
    float temp;
    cout << "Enter Temparature (In Celsius) : ";
    cin >> temp;
    cout << "Temparature in Kelvin : " << celsius2Kelvin(temp) << endl;
    cout << "Temparature in Fahrenheit : " << celsius2Fahrenheit(temp) << endl;
    return 0;
}
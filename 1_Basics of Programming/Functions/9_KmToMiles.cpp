#include<iostream>
using namespace std;

#define milesPerKm 0.621371

float kmToMiles (float dist){
    return dist*milesPerKm;
}

int main(){
    float dist;
    cout << "Enter Distance : ";
    cin >> dist;
    cout << "Distance in Miles : " << kmToMiles(dist);
    return 0;
}
#include<iostream>

using namespace std;

int main(){
     float temp[7];

    for(int i = 0; i < 7; i++){
      cout << "\nTemperature for day #" << i+1 << ": "; cin >> temp[i]; 
    }
    for(int i = 0; i < 7; i++){
      cout << "Temperature (Fahrenheit) for day#" << i+ 1 << ": " << (temp[i] * 1.8 + 32) << endl;
    }
    return 0;
}

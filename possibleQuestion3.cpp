#include <iostream>

using namespace std;

int main(){
	int number, min, hour;
	
	cout << "Enter number to convert into hours and minutes: "; cin >> number;	
	hour = number / 60;
	
	if (number >=60){
		do{
			number = number - 60;
		} while (number >= 60);
	
		min = number;
	}	
	else{
		hour = 0;
		min = number;
	}
	
	cout << "\nH:M\t" << hour << ":" << min;
	return 0;
}

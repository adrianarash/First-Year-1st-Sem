#include <iostream>
using namespace std;


int main() {

    int i =1, highest, lowest, num;

    i = 1;
	
	for(int n=0; n<20; n++)
	    cout << "Enter a number: ";
	    cin >> num;
	    highest =  num;
	    lowest = num;
	
	        while ( i < 20 ){
	
	        if (num > highest ) {
	        highest = num;
	        }
	
	        if (num < lowest ) {
	        lowest = num;
	         }
	
	        cout << "Enter a number: ";
	        cin >> num;
	        i++;
	    }
	        if (num > highest ) {
	        highest = num;
	        }

    cout << "The program has ended" << endl;
    cout << "The highest number from the series of numbers is: " << highest << endl;
    cout << "The lowest number from the series of numbers is: " << lowest;

}

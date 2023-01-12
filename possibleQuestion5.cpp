#include <iostream>
using namespace std;

int main() {
    int number, tempNum, remainder, sum = 0;

    cout << "\n\nEnter an integer in the range of 100 and 999: "; cin >> number;

    tempNum = number;

    while (tempNum != 0){

        // extracting and evaluating last digit of tempNum  
        remainder = tempNum % 10;
        
        // getting the sum of each digit of tempNum
        sum += remainder * remainder * remainder;
        
        // removing last digit of the tempNum
        tempNum = tempNum / 10;
    }

    // checking whether the sum is equal to intial input number
    if (number == sum)
        cout << number << " is an Armstrong Number\n";
    else
        cout << number << " is not an Armstrong Number\n";

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int n = 0, rev;
	cout<<"Enter a value: "; cin>>n;
	cout<<"Reverse value: ";
	do{
		rev = n % 10; //to get the modula value
		n = (n / 10); //to reduce the number	
		cout<<rev; //display the modula value
	} while (n != 0);
		
	return 0;
}

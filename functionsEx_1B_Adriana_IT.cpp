#include <iostream>
using namespace std;

void multiply(int num)
{
	int result = num * 10;
	cout<<"Result: "<<result<<endl;
	
}

int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	multiply(num);
	
	return 0;
}

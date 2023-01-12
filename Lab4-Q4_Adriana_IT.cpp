#include <iostream>
using namespace std;

int main()
{
	int a = 1, d = 3, n, sum, arithmetic;
	
	for(n = 1; n <= 100; n++)
	{
		arithmetic = a + ((n-1)*d);
		if (arithmetic > 1) {
			cout<<a<<" + "<<arithmetic;
			sum += arithmetic;
		}
	}
	cout<<" = "<<sum<<endl;	//to display the sum of it all
	return 0;
}

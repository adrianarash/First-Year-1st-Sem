#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int x, n, factorial = 1, fact_series = 0;
	
	cout<<"Enter value of x: "; cin>>x;
	cout<<"Enter value of n: "; cin>>n;
	
	//factorial value of n
	for(int i = 1; i <= n; ++i) 
	{
            factorial *= i;
	}
	
	//calculation pakai formula
	for (int m = 1; m <= x; m++)
	{
		fact_series = (pow(x, n) / factorial);
	}

	cout<<"Ni factorial-ed number je tau: "<<factorial<<endl;
	cout<<"Sum of series: "<<1 + x + fact_series<<endl;
	
	return 0;
}

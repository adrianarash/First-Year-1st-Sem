#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double hypotenuse(double x, double y)
{
	double result = sqrt(pow(x,2) + pow(y,2));
	return result;
} 

int main()
{
	//declaring the array and variable for average calculation
	int num[] = {1,2,3};
	double total = 0.0;
	double avg =0.0;
	
	for(int i=0; i<3; i++){
		double side1, side2;
		
		//input triangle side given
		cout<<"\nEnter a side 1: "; cin>>side1;
		cout<<"Enter a side 2: "; cin>>side2;
		
		//display hypotenuse of each triangle
		double hyp_result = hypotenuse(side1,side2);
		cout<<fixed<<setprecision(1)<<
		"Hypotenuse "<<num[i]<<" : "<<hyp_result<<"\n";

		//calculating average 
		total = total + hyp_result;
	}
	
	//displaying average
	avg = total / 3;
	cout<<"\nAverage of the hypotenuse: "<<avg<<endl;
	
	return 0;
}


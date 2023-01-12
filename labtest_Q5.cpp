#include <iostream>
#include <cmath>
using namespace std;

float calcArea(float r)
{
	float area = 3.142*pow(r,2);
	return area;
}


int main()
{
	float radius[5] = {0};
	float area[6] = {0};
	int index;
	
	for (int i = 0 ; i < 5 ; i++)
	{
		cout << "Enter radius of circle: ";
		cin >> radius[i];
		
		area[i+1] = calcArea(radius[i]);
		cout << endl;
	}
	
	for(int j = 1 ; j < 6 ; j++) 
	{
    if(area[0] < area[j])
      {
      	area[0] = area[j];
      	index = j-1;
	  } 
	}
	
	cout << "The highest area of all circles is the one with radius of " << radius[index] << " with area of " << area[0];
	return 0;
}

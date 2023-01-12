#include <iostream>
using namespace std;

int main()
{
	string name;
	cout<<"Enter name: "<<endl;
	cin>>name;
	int hours;
	cout<<"Working hours: "<<endl;
	cin>>hours;
	float wage;
	
	if (hours>60)
	{
		wage = (5*40) + (8*20) + ((hours - 60)*10);
		// wage = (first 40 hours) + (next 20 hours) + (the extra hours exceeding 60)
	}
	
	else if ((hours>40) && (hours<20))
	{
		wage = (5*40) + ((hours-40)*8);
		// wage = (first 40 hours) + (next 20 hours)
	}
	
	else if (hours<= 40)
	{
		wage = 5*40; //for all worked hours 
	}
	
	/*deduction */
	float wage_deducted = wage - (wage*(0.01));
	 
	/*displaying output*/
	cout<<"Name: "<<name<<endl;
	cout<<"Total wage: "<<wage<<endl;
	cout<<"Deducted for Sosco: "<<wage_deducted<<endl;

	return 0;
}

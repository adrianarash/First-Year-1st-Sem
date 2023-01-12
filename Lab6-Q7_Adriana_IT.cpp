#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	//declare variables for city names and cases input
	string city[14] = {"Selangor", "Kuala Lumpur", "Negeri Sembilan", "Pahang ", "Perak", "Perlis", "Kedah", "Terengganu", "Penang", "Kelantan", "Melaka","Johor","Sabah","Sarawak"};
	int cases, range1 = 0, range2 = 0, range3 = 0, range4 = 0, range5 = 0, range6 = 0;
	
	for (int i=0; i<14; i++){

		cout<<"Enter number of COVID cases in "<<city[i]<<": ";
		cin>>cases;
		
		if (cases >= 500){
			range6 += 1;
		}
		else if ((cases >= 400) && (cases <=499)){
			range5 += 1;
		}
		else if ((cases >= 300) && (cases <=399)){
			range4 += 1;
		}
		else if ((cases >= 200) && (cases <=299)){
			range3 += 1;
		}
		else if ((cases >= 100) && (cases <=199)){
			range2 += 1;
		}
		else 
			range1 += 1;
	}
	
	cout<<endl;
	cout<<"------------ FREQUENCY DISTRIBUTION -------------\n";
	cout<<"Range 0 - 99: "<<range1<<endl;
	cout<<"Range 100 - 199: "<<range2<<endl;
	cout<<"Range 200 - 299: "<<range3<<endl;
	cout<<"Range 300 - 399: "<<range4<<endl;
	cout<<"Range 400 - 499: "<<range5<<endl;
	cout<<"Range 500 and above: "<<range6<<endl;
	return 0;
	
}

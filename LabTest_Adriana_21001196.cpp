#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	//the menu
	cout<<"------- SPEED DATA ANALYSIS -------\n";
	cout<<"1. Calculation of speed.\n"
	<<"2. Display average of speed.\n"<<"3. Display highest speed.\n" <<"4. Display lowest speed.\n" 
	<<"5. Display range speed.\n\n";

	//declaring variables
	int option, quit = 1, i, n, highest, lowest, range;
	float distance = 0.0, hour = 0.0, speed[2], sum= 0.0, avg;
	
	//enter number of drivers
	cout<<"\nEnter number of drivers: "; cin>>n;
	
	while (quit == 1){
		cout<<"\nEnter option: "; cin>>option;
	
		//option 1
		if (option == 1){
			for(i=1; i<=n; i++){
				cout<<"\nEnter distance (km) travelled by driver "<<i<<": "; cin>>distance;
				cout<<"Enter hours travelled by driver "<<i<<": "; cin>>hour;
				
				speed[i]= distance / hour;
			}
			cout<<"\n--------------------------------------";
			cout<<"\nDriver\t"<<"Speed"<<endl;
			for (int i=1; i<=n; i++){
				cout<<" "<<i<<"\t"<<fixed<<setw(5)<<setprecision(2)<<speed[i]<<" km/h"<<endl;
			}
			cout<<"---------------------------------------"<<endl;
		}
		//option 2
		else if (option ==2){
			for (i=1; i<=n; i++){
				sum += speed[i];
				avg = sum / n;
			}
			cout<<"--------------------------------------\n";
			cout<<"Average: "<<fixed<<setprecision(2)<<avg<<"km/h"<<endl;
			cout<<"--------------------------------------\n";
		}
		//option 3 : display highest speed
		else if (option == 3){
			for (i=1; i<=n; i++){
				if (speed[0] < speed[i])
					speed[0] = speed[i];
					highest = speed[0];	
			}
			cout<<"--------------------------------------\n";
			cout<<"Highest speed: "<<fixed<<setprecision(2)<<highest<<"km/h"<<endl;
			cout<<"--------------------------------------\n";
		}
		//option 4 : display lowest speed
		else if (option == 4){
			for (i=1; i<=n; i++){
				if (speed[0] > speed[i]){
					speed[0] = speed[i];
					lowest = speed[0];
				}	
			}
			cout<<"--------------------------------------\n";
			cout<<"Lowest speed: "<<fixed<<setprecision(2)<<lowest<<"km/h"<<endl;
			cout<<"--------------------------------------\n";
		}
		//option 5 : range
		else if (option ==5){
			range = highest - lowest;
			cout<<"--------------------------------------\n";
			cout<<"Range of speed: "<<range<<"km/h"<<endl;
			cout<<"--------------------------------------\n";
		}
	cout<<"\nPress 0 to quit or press 1 to continue: "; cin>>quit;
	}
	return 0;	
}


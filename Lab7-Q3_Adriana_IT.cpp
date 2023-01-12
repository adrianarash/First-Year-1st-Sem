#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string name1, name2, fullName, quit = "";
	int error = 0;
	
	cout << "Enter your surname: "; cin>>name1;
    cout << "Enter your name: "; cin>>name2;
	
	while (quit != "quit"){
		cout<<"\nType 'quit' to end: "; 
		cin>>quit;	
		while (name2 == name1){
		    cout<<"Name error. Please try again.\n"<<endl;	
		    
		    cout << "Enter your name: ";
		    cin>>name2;
		    
		    error += 1;
		}
		
		while (name2 != name1){
		    fullName = name1 + ", " + name2;
			cout<<"\nFull name: "<<fullName;
			
			break;
		}		
	}
	cout<<"\nNumber of errors: "<<error<<endl;
			
	return 0; 	
}

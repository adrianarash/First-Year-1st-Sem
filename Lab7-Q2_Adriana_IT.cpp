#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	//VARIABLES FOR THE REAL LETTERS AND SECRET LETTERS
	char real_letters[32] = 
	{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' ','.',',','?','!',';'};
	
	char secret_letters[32] = 
	{'?','Q','.','W',',','E','M','R','N','T','B','X','Y','U','V','!','I','C','O',' ','P','Z','A',';','S','D','L','F','K','G','J','H'};
	
	//VARIABLE DECLARATION
	string option, msg;
	
	//OPTION MENU
	cout<<"(e) Encoding"<<endl; cout<<"(d) Decoding\n"<<endl;
	cout<<"Option: "; cin>>option;
	
	if (option == "e"){
		cout<<"Message to encode: "; cin>>msg;
		cout<<"Encoded message: ";
		for (int i=0; i<msg.size(); i++){ //'i' refers to alphabet's index of the input message
			for (int j=0; j<32; j++){ //j refers to the real and secret letter's index
				if (real_letters[j] == msg[i]){
					cout<<secret_letters[j];
					break;
				}
			}
		}
	}
	else if (option == "d"){
		cout<<"Message to decode: "; cin>>msg;
		cout<<"Decoded message: ";
		for (int i=0; i<msg.size(); i++){ //'i' refers to alphabet's index of the input message
			for (int j=0; j<32; j++){ //j refers to the real and secret letter's index
				if (secret_letters[j] == msg[i]){
					cout<<real_letters[j];
					break;
				}
			}
		}
	}
	else 
		cout<<"Invalid option."<<endl;
	
	return 0; 
}

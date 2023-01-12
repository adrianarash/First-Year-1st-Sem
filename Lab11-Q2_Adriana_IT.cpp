#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
	ifstream infile("inputLab11_Q2.txt"); //input file
	ofstream outfile("outputLab11_Q2.txt"); //output file
	
	int n, destination, adult, children;
	float total = 0.0;
	infile>>n; 
	// ^ ni the first line, berapa kali you nak letak the input, it will loop that much
	
	outfile<<"**** ANGEL'S TRAVELLING AGENCY ****\n";
	outfile<<"---------------------------------------------\n";
	for(int i=0; i<n; i++)
	{
		infile >> destination >> adult >> children;
		total = (adult + (children - (0.25 * children))); //the 25% off
		
	
		if(destination == 1) //Tioman
		{
			total = 500 * total;
			outfile<< "\nDestination: Tioman\n";
			outfile<< "Adult : "<<adult<<endl;
			outfile<< "Children : "<<children<<endl;	
		}
		if(destination == 2) //Langkawi
		{
			total = 700 * total;
			outfile<< "\nDestination: Langkawi\n";
			outfile<< "Adult : "<<adult<<endl;
			outfile<< "Children : "<<children<<endl;
		}
		if(destination == 3) //Redang
		{
			total = 450 * total;
			outfile<< "\nDestination: Redang\n";
			outfile<< "Adult : "<<adult<<endl;
			outfile<< "Children : "<<children<<endl;
		}
		if((adult + children) > 10){
		total = total - 0.1 * total; 
		}	
	outfile<<"Total amount: RM"<<total<<endl;
	}
	outfile<<"\n---------------------------------------------\n";
	cout<<"Text file receipt has been created.";
	
	infile.close();
	outfile.close();
	return 0;
}

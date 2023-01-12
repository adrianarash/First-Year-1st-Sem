#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    //variable declaration
    double amt, total;
    int assist, payment; int count = 0;
    char ans;
    
    cout << "**** PATRICK GAS STATION ****" << endl;
    
    //this is to receive input data from text file
    ifstream inpstream;
    inpstream.open("inputLab11.txt");
    
    //opening the output stream with the outputLab11 
    ofstream outstream;
    outstream.open("outputLab11.txt");
    
    //a while loop till the input stream reaches the End of File
    //since all three values lie on the same line in input file,
    //we do it like this, read one by one like this
    while(inpstream >> amt >> assist >> payment){
        total = 0;
        
        //computing the total
        if (assist == 0)
        	total = amt; //no extra charge
        else { 
	        if (amt < 50) //if gas below RM50, extra charge 50 sen
	        	total = amt + 0.50;
	        else
	        	total = amt;
    }
    
    if (payment == 1)
    total = total + 0.05 * total; //second method kena 5% extra
	    
    //writing the total on the output file
    outstream<<total<<endl;
    }
    
    //closing the streams for both input and output files
    inpstream.close();
    outstream.close();
    
    cout<<"\nNow go check your text file, data have been saved there!";
    return 0;
}

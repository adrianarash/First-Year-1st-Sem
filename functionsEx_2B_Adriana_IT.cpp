#include <iostream>
#include <cstring>
using namespace std;

string determineGrade(double score)
{
	string grade;
	
	if(score <= 59)
		grade = "F";	
	else if ((score >= 60 ) && (score <= 69))
		grade = "D";
	else if ((score >= 70 ) && (score <= 79))
		grade = "C";
	else if ((score >= 80 ) && (score <= 89))
		grade = "B";
	else if ((score >= 90 ) && (score <= 100))
		grade = "A";
	else
		cout<<"Invalid score. Try again."<<endl;
		
	return grade;
}

int main()
{
	double score;
	
	for(int i=0; i<5; i++){
		cout<<"Enter score: "; cin>>score;
		
		cout<<"Grade: "<<determineGrade(score)<<endl; //function call
		cout<<endl;
		
	}
}

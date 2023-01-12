#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	double score;
	string grade;
	int student[] = {1,2,3,4,5};
	
	for(int i=0; i<5; i++)
	{
		cout<<"Enter score for student "<<student[i]<<": "; cin>>score;
		
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
			cout<<"Invalid score.";
			
		cout<<"Grade: "<<grade<<endl;
	}
	return 0;
}

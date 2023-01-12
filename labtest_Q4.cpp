#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    char name[40], grade[7];
    int marks[7];
    
    cout << "Enter student's name: ";
    cin >> name;
    
    for (int i=0; i<7; i++)
    {
        cout << "Enter marks for subject " << i+1 << ": ";
        cin >> marks[i];
        
        if (marks[i] >= 0 && marks[i] < 40)
        {
            grade[i] = 'F';
        }
        else if (marks[i] >= 40 && marks[i] < 45 )
        {
            grade[i] = 'E';
        }
        else if (marks[i] >= 45 && marks[i] < 50 )
        {
            grade[i] = 'D';
        }
        else if (marks[i] >= 50 && marks[i] < 65 )
        {
            grade[i] = 'C';
        }
        else if (marks[i] >= 65 && marks[i] < 80 )
        {
            grade[i] = 'B';
        }
        else 
        {
            grade[i] = 'A';
        }
    }
    
    cout<< endl;
    cout << "---------STUDENT'S REPORT---------" << endl;
    cout << left << setw(10) << "SUBJECT" << setw(10) << "MARKS" << left << setw(10) << "GRADE" << endl;
     
    for (int j=0; j<7; j++)
    {
        cout << left << setw(10) << j+1 << left << setw(10) << marks[j] << setw(10) << grade[j] << endl;
    }
   
    return 0;
}

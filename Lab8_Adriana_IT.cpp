#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
	//declaring variables
	struct employee{
		int number, empID;
		string name;
		float rate = 0;
		int hours = 0;
		float grossPay = 0;
	};

   struct employee st[200];
   float rate = 0, grossPay = 0;
   int n, hours = 0;
   cout<<"\n Enter number of employee : ";
   cin>>n;
   
    for(int i=0; i<=n-1; i++)
    {
        cout<<"\n Employee :  ";
        cin>>st[i].number;
        cout<<"\n Employee Data ";
        cout<<"\n -------------------------------------------------------";
        cout<<"\n Employee ID :  ";
        cin>>st[i].empID;
        cin.ignore(1, '\n');
        cout<<"\n Employee Name :  ";
        getline(cin, st[i].name);
        cout<<"\n Rate per hour (RM) :  ";
        cin>>st[i].rate;
        cout<<"\n Working hours  :  ";
        cin>>st[i].hours;

        cout<<"\n --------------------------------------------------------------------------------";
        
       //calculation gross pay 
    	st[i].grossPay = (st[i].rate) * (st[i].hours); 
    }
     
    cout<<"\n\n ** PAYROLL LISTING ** \n\n"<<" ";
    cout<<"\n Number"<<"\t\t\ Employee ID"<<"\t\t\t Name"<<"\t\t\tGross Pay";
    cout<<endl;
    for(int i=0; i<=n-1; i++)
    {
      cout<<"\n-----------------------------------------------------------------------------------------------";
      cout<<"\n "<<st[i].number<<"\t\t "<<st[i].empID<<"\t\t "<<setw(24)<<st[i].name<<"\t  "<<fixed<<setprecision(2)<<st[i].grossPay;

    }


	return 0; 
}

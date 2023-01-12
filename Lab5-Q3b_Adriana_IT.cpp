#include <iostream>
using namespace std;

int main()
{
	int i, j;
	//i = row, j = column
	
	for(i=1; i<=12; i++) //row
	{
		for(j=1; j<=12; j++) //column
		{
			if(i==4)
			{
				break;
			}
				if(i<=3) //for the first 3 rows
				{ 
					if(i==2)
					{ //at row 2
						if(j==1) //at the first column
							cout<<"|";
							if(j==12)
								cout<<"|"<<endl;	
							else
								cout<<" ";	
					}
				else 
				{
					if(j==1)
						cout<<"+";
						if (j==12)
							cout<<"+"<<endl;
					else if(j%2==1) //when j is odd
						cout<<"\\";
					else
						cout<<"/";	
				} 
				}
			
			else 
			{
				if((i>=6) && (i<=12)) //for the first 3 rows
				{ 
					if((i>=7) && (i<=11))
					{ //at row 2
						if(j==1) //at the first column
							cout<<"|";
							if(j==12)
							cout<<"|"<<endl;	
						else
							cout<<" ";	
					}
					else 
					{
						if(j==1)
							cout<<"+";
							if (j==12)
								cout<<"+"<<endl;
						else if(j%2==1) //when j is odd
							cout<<"\\";
						else
							cout<<"/";	
					} 
			}	}
		}
	}
	return 0;
}


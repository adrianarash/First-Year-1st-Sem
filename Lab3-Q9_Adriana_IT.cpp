#include <iostream>
using namespace std;

int main()
{
	int x,y;
    char ch;
    
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    cout<<"----- ch values : a, m, s, d, r -----"<<endl;
    cout<<"Enter the value of ch: "<<endl;
    cin>>ch;
    
    if(ch=='a')
    {
        cout<<x+y;
    }
    else if (ch=='m')
    {
        cout<<x*y;
    }
    else if(ch=='s')
    {
        cout<<x-y;
    }
    else if(ch=='d')
    {
        cout<<x/y;
    }
    else
    {
        cout<<x%y;
    }
    return 0;	
}

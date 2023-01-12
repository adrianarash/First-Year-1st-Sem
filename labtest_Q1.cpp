#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int size = 10;
	int temp;
	int random[size];
	
	for (int i = 0; i < size; i++)
	{
		random[i] = rand() % 100;
	}
	
	cout << "*UNSORTED ARRAY* \n";
	
	for (int i = 0; i < size; i++)
	{
		cout << "Element " << i + 1 << ": " << random[i] << endl;
	}
	
	//sort ascending order
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (random[j] < random[i])
			{
				temp = random[i];
				random[i] = random[j];
				random[j] = temp;
			}
		}
	}
	
	cout << endl;
	cout << "*SORTED ARRAY*" << endl;
		
	for (int i = 0; i < size; i++)
	{
		cout << random[i] << " ";
	}
	
	return 0;
}

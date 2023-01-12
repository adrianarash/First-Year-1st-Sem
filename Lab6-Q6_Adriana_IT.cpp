#include <iostream>
#include <stdio.h> //for output formatting later
using namespace std;

int main()
{
	int n = 7; //i=row, j=column, n=limit
	int array[n][n];
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<= i; j++) {
			if(j==0) { //first column will be 1
				array[i][j] = 1;
			}
			else if (i==j) { //diagonally 1
				array[i][j] = 1;
			}
			else {
				array[i][j] = array[i-1][j] + array[i-1][j-1];
			}
			printf("%4d", array[i][j]);		
		}
		cout<<endl;
	}
	return 0; 
}

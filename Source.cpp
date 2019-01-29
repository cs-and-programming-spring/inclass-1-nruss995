


/***********************************************
* Name: Takeshwari Kamal
* Email: kamalt4@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{

	float miles, kilometers;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This will convert miles to kilometers" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "How many miles should be converted ";
	cin >> miles;
	
	//Compute area to PI*radius*radius
	kilometers = miles * 1.6;
	
	//Display the area 
	cout << " The converted number = " << kilometers << "\n\n";
	cout << "Program has ended"<<endl;

	system("pause");
	
	return 0;
}



/***********************************************
* Name: Noah Russ
* Email: russno76@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates circumfrence of a circle
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{

	float radius, circ;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This will find the circumfrence of a circle" << endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input the radius of the circle";
	cin >> radius;
	
	//Compute area to PI*radius*radius
	circ = 2 * PI * radius;
	
	//Display the area 
	cout << " The circumfrence is " << circ << "\n\n";
	cout << "Program has ended"<<endl;

	system("pause");
	
	return 0;
}
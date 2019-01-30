


/***********************************************
* Name: Noah Russ
* Email: russno76@students.rowan.edu
***********************************************
* Purpose:
*  This program is mess
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
	

	system("pause");

	double km, m, cm,miles, mm;
	//display reason for program
	cout <<"\n\n This part of the program will display an inputed number of miles in km, m, cm, and mm" << endl;
	//request input
	cout <<"\n\n Please input the amount of miles to be converted";
	cin >> miles;
	//calculates the conversions
	km = miles * 1.6;
	m = miles * 1.6 * .01;
	cm = m * .01;
	mm = m * .001;

	//Displays all the conversions
	cout <<"\n\n the converted numbers are \n\n" <<km<< "km \n\n" << m<< "m \n\n" <<cm<< "cm \n\n" <<mm<< "mm \n\n";
	cout << "Program has ended" << endl;
	system("pause");
	return 0;
}

// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: e.g. LAB3_1
Project Name:
File Name: .cpp
Description: (provide a short synopsis of what is accomplished in this particular file)
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: (identify the source of any code obtained from another student or the internet)
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{

	// Local variable declarations placed here
	// users choice 
	int choice;

	// circle
	const double PI = 3.14159;
	double radius;
	double circleArea;

	// rectangle
	double length;
	double width;
	double rectangleArea;

	// triangle
	double base;
	double height;
	double triangleArea;

	// Inform user what program does
	cout << "This program will calculate the area of a circle, rectangle, and triangle "
		 << "depending on the users choice.\n" << endl;

	// select which object to calculate area for
	cout << "Please enter 1-4 to choose what area you want to calculate.\n";
	cout << "1. Calculate the area of a Circle?\n"
		 << "2. Calculate the area of a Rectangle?\n"
		 << "3. Calculate the area of a Triangle?\n"
		 << "4. Give up and quit the program?" << endl;
	cout << "Enter your choice: ";
	cin >> choice;

	// switch statement to control the menu after a user selects a choice
	switch (choice)
	{
	case 1: cout << "You have selected Circle. Please enter the radius.\n";
			cin >> radius;
			if (radius <= 0)
			{
				cout << "Please enter a number greater than 0.\n";
			}
			else
			{
				circleArea = PI * radius * radius;
				cout << "The area of the circle is " << circleArea << endl;
			}
			break;
	case 2: cout << "You have selected Rectangle. Please enter the length.\n";
			cin >> length;
			cout << "Please enter the width.\n";
			cin >> width;
			if (length <= 0 || width <= 0)
			{
				cout << "Please enter a number greater than 0.\n";
			}
			else
			{
				rectangleArea = length * width;
				cout << "The area of the rectangle is " << rectangleArea << endl;
			}
			break;
	case 3: cout << "You have selected Triangle. Please enter the base.\n";
			cin >> base;
			cout << "Please enter the height.\n";
			cin >> height;
			if (base <= 0 || height <= 0)
			{
				cout << "Please enter a number greater than 0.\n";
			}
			else
			{
				triangleArea = base * height * 0.5;
				cout << "The area of the triangle is " << triangleArea << endl;
			}
			break;
	case 4: cout << "You have chosen to exit my glorious program. Good riddance!\n";
			break;
	default: cout << "That is an invalid choice! Try again next time.\n";
	}

	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// Returns a value to the calling program
	return(0);

}


// PROOF
// Program output copied into the below comment section
/*
PROOF 1:
This program will calculate the area of a circle, rectangle, and triangle depending on the users choice.

Please enter 1-4 to choose what area you want to calculate.
1. Calculate the area of a Circle?
2. Calculate the area of a Rectangle?
3. Calculate the area of a Triangle?
4. Give up and quit the program?
Enter your choice: 1
You have selected Circle. Please enter the radius.
5
The area of the circle is 78.5397
Press any key to continue . . .

PROOF 2:
This program will calculate the area of a circle, rectangle, and triangle depending on the users choice.

Please enter 1-4 to choose what area you want to calculate.
1. Calculate the area of a Circle?
2. Calculate the area of a Rectangle?
3. Calculate the area of a Triangle?
4. Give up and quit the program?
Enter your choice: 2
You have selected Rectangle. Please enter the length.
5
Please enter the width.
5
The area of the rectangle is 25
Press any key to continue . . .

PROOF 3:
This program will calculate the area of a circle, rectangle, and triangle depending on the users choice.

Please enter 1-4 to choose what area you want to calculate.
1. Calculate the area of a Circle?
2. Calculate the area of a Rectangle?
3. Calculate the area of a Triangle?
4. Give up and quit the program?
Enter your choice: 3
You have selected Triangle. Please enter the base.
5
Please enter the height.
5
The area of the triangle is 12.5
Press any key to continue . . .

PROOF 4:
This program will calculate the area of a circle, rectangle, and triangle depending on the users choice.

Please enter 1-4 to choose what area you want to calculate.
1. Calculate the area of a Circle?
2. Calculate the area of a Rectangle?
3. Calculate the area of a Triangle?
4. Give up and quit the program?
Enter your choice: 4
You have chosen to exit my glorious program. Good riddance!
Press any key to continue . . .

PROOF 5:
This program will calculate the area of a circle, rectangle, and triangle depending on the users choice.

Please enter 1-4 to choose what area you want to calculate.
1. Calculate the area of a Circle?
2. Calculate the area of a Rectangle?
3. Calculate the area of a Triangle?
4. Give up and quit the program?
Enter your choice: 5
That is an invalid choice! Try again next time.
Press any key to continue . . .
*/
/*
Jazmin Even Dorra

circles.cpp

This program will ask user radius meassure and returns properties of the circle

Input: Radius
Processing: 1. Ask user for radius
			2. Exception handling
			3. Calculate properties of circle
Output: 1.Diameter
		2. Circumference
		3. Area
*/

// Header Files
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Class Definition
class Circle
{
	private:
		const double PI = 3.14159;		// pi
		double radius;					//radius of circle

	public:
		// Constructors
		Circle()
		{
			// Initialize data member
			radius = 0;
		}

		Circle(double r)	//si
		{
			radius = r;
		}

		//Mutator
		/*
			Updates the data member with the argument. If
			radius higher or equal to 0, store in radius. 
			Else: error message and exit
		*/
		void setRadius(double r) //si
		{
			if (r >= 0)
				radius = r;
			else
			{
				cout << "Error ... Invalid radius.\n";
				exit(EXIT_FAILURE);
			}
			return;
		}

		//Accessors
		double getRadius() 
		{
			return radius;
		}

		// create diameter variable and calculate diameter of circle
		// return type: double
		double getDiameter()
		{
			double diameter;
			diameter = 2 * radius;

			return diameter;
		}

		// create circumference variable and calculate circumference of circle
		// return type: double
		double getCircumference()
		{
			double circumference;
			circumference = 2 * PI * radius;

			return circumference;
		}

		// create area variable and calculate area of circle.
		// return type: double
		double getArea()
		{
			double area;
			area = PI * (radius * radius);

			return area;
		}

};

// Function prototype
double getUserRadius();

int main()
{
	// Variables
	char tryAgain = 'y';	// Loop control variable
	Circle myCircle;		//Circle object

	//Intro 
	cout << "\nGoing in Circles ...\n";

	while (true)
	{
		// Prompt user for radius
		// ask user for radius
		double radius = getUserRadius();

		// Exception handling
		myCircle.setRadius(radius);

		// Display results
		cout << "\nProperties ... \n";
		cout << fixed << showpoint << setprecision(2);
		cout << setw(20) << "\n     Diameter: " << myCircle.getDiameter(); ////////
		cout << setw(20) << "\nCircumference: " << myCircle.getCircumference();
		cout << setw(20) << "\n\t Area: " << myCircle.getArea();


		// Prompt user whether to try again
		cout << endl << "\nDo you have another circle(y/n)? ";
		cin >> tryAgain;
		if (tolower(tryAgain) != 'y')
			break;
	}
	return 0;
}

double getUserRadius()
{
	// Variables
	double radius;

	// ask user for radius
	cout << "\nEnter cricle radius: ";
	cin >> radius;

	return radius;
}
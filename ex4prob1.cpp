// program program using functions that will display the calculator menu. The program will prompt the user to choose the operation choice (from 1 to 5). Then it asks the user to input two integervales for the calculation. See the sample below.

// preprocessor to acces the library
#include <iostream>
#include <conio.h>
using namespace std;

int addition (int x, int y)
{
	int z;
	z = x + y;
	return z;
}

int subtraction (int x, int y)
{
	int z;
	z = x - y;
	return z;
}

int multiply (int x, int y)
{
	int z;
	z = x * y;
	return z;
}

int divide (int x, int y)
{
	int z;
	z = x / y;
	return z;
}

int mod (int x, int y)
{
	int z;
	z = x % y;
	return z;
}

// Main function
int main ()
{
	// Declaring variable
	int choice,z,x,y;
	char repeat;

	bool userquit = false;
	do
	{
	cout << "OPERATIONS: " << endl;
	
	
cout << "	1. Add\n\n	2. Subtract\n\n	3. Multiply\n\n	4. Divide\n\n	5. Modulus\n\n";
cout << "Enter your operator: "; cin >> choice;
cout << "Enter the first value: "; cin >> x;
cout << "Enter the second value: "; cin >> y;
// switch condiotinal statement
	switch (choice)
	{
	case 1: 
	
	
	
		z = addition (x,y);
		cout << "Result: " << z;
		break;
	
	
	case 2: 
	
		z = subtraction (x,y);
		cout << "Result: " << z;
		break;
	
	
	
	case 3: 
	
		z = multiply (x,y);
		cout << "Result: " << z;
	
	
		break;
	case 4: 
		
		
		z = divide (x,y);
		cout << "Result: " << z;
		
		
		break;
	case 5:
		
		z = mod (x,y);
	
	
		cout << "Result: " << z;
		break;
	default:
	
	
		cout << "INVALID INPUT. \n";
		break;
	}
	
	cout << "\n Do you want to proceed? Type y if yes and type n if no.";
	cin >> repeat;

	switch (repeat)
	{
case 'y':
case 'Y':
		continue;
case 'n': 
case 'N':
	
	
		userquit = true;
	}


	}while (!userquit);

// return values
	getch ();
	return 0;

}

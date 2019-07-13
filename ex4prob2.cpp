// program to asks the user to decide whether he/she wants to continue the operation. If he/she input y the program will prompt the user to choose the operation gain Otherwise the program will terminate

#include <iostream>
#include <conio.h>
using namespace std;


void sort (int bubble)
{

	int x, arr[100];
	cout << "Pick numbers: ";
	
	for (x=0; x < bubble; x++)
	{
		cin >> arr[x];
	}
	cout << endl << endl;

	//Declaring values to sort
	int i, q;
	
	
	for (i=0; i < bubble; i++)
	{
		for (q=0; q< bubble-i-1; q++)
		{
		if (arr[q] > arr [q+1])
		{
				int temp;
				temp = arr[q];
				arr[q] = arr[q+1];
				arr[q+1] = temp;
		}
		}
	}

	cout << "Sorted data:" << endl;
	int y;
	for (y=0; y < bubble; y++)
	{
		cout << arr[y] << " ";
		
	}

	cout << endl << endl;
}

	int main ()
{

	bool cont = true;
	do
	{

	int z;
		cout << "Enter array size: "; cin >> z;

		sort (z);

		char a;
		cout << "Do you want to proceed? Type Y if yes and Type N if no" << endl;
		cout << "Answer: "; cin >> a;
		cout << endl;

	switch (a)
	{
		case 'Y':
		case 'y':
		cont = true;
		break;
	
	
		case 'N':
		case 'n':
		cont = false;
		break;

		default:
		cout << "Not valid" << endl;
		cont = false;
		break;
	}
	
	}while(cont);


	cout << "exit" << endl;
// return values	
	getch ();
	return 0;
}

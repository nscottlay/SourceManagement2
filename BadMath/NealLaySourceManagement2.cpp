// Neal Lay
// CIS 1202 501
// April 11,2022

#include <iostream>
#include <iomanip>

using namespace std;

float average(int, int, int);

int main()
{
	int n1 = 0 , n2 = 0, n3 = 0;

	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3; // Changed n2 to n3

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}

// Moved function below main function
float average(int i1, int i2, int i3)
{
	// Put parenthesis around i variables for addition
	return (i1 + i2 + i3) / 3.0f;
}
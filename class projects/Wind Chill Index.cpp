#include <iostream>
#include <cmath>
using namespace std;


int main ()

{
	cout << "Enter the temperature in Fahrenheit: ";
	double fahrenheit;
	cin >> fahrenheit;

	if (fahrenheit < -58 || fahrenheit > 41)
	{
		cout << "Temperature must be between -58F and 41F." << endl;
		return 0;
	}

	cout << "Enter the wind speed miles/hour: ";
	double speed;
	cin >> speed;

	if (speed < 2)
	{
		cout << "Speed must be greater than or equal to 2.";
		return 0;
	}

	double windChillIndex = 35.74 + 0.6215 * fahrenheit - 35.75 * pow (speed, 0.16) + 0.4275 * pow (speed, 0.16);

	cout << "The wind chill index is " << windChillIndex << endl;


	system ("pause");

}

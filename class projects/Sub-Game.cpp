#include <iostream>
#include <cstdlib> // for rand and srand functions
#include <ctime>
using namespace std;

int main(){

	//1. Generate two random single digit integers
	srand(time(0));
	int number1 = rand() % 10;
	int number2 = rand() % 10;

	//2. If number1 < bynver2, swap number1 with number2

	if (number1 < number2)
	{
		int temp = number1;
		number1 = number2;
		number2 = temp;
	}


	//3. Prompt the student to answer "what is number1 - number2?"
	cout << "What is " << number1 << "-" << number2 << "?" << endl;
	int answer;
	cin >> answer;

	//4. Calculate and output the result
	if ((number1 - number2) == answer)
	{
		cout << "You are correct!" << endl;
	}

	else

	{

	cout << "You are wrong." << endl;
	cout << "The answer should be " << number1 - number2 << endl;

	}


	system ("pause");


}

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	cout << left;
	cout << setw(12) << "Kilograms" << setw(12) << "Pounds" << setw(6) << "|" << setw(12) << "Pounds" << setw(12) << "Kilograms" << endl;
	cout << "-----------------------------------------------------" << endl;

	int kilograms = 1; int pounds = 20; int count = 1;
	for (int count = 1; count <= 100; kilograms+=2, pounds+=5, count++)
	{
		cout << setprecision(3) << fixed;
		cout << setw(12) << kilograms << setw(12) << kilograms * 2.2 << setw(6) << "|" << setw(12) << pounds << setw(12) << pounds / 2.2 << endl;
		//kilograms += 2; pounds += 5; count++;
	}

	system("pause");
	return 0;

}

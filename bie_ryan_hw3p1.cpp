#include <iostream>
using namespace std;

int main()
{
	int number1, number2, sum; 

	cout << "enter the first integer\n";
	cin >> number1; 
	cout << "enter the second integer\n";
	cin >> number2;
	sum = number1 + number2;
	cout << "The sum of the values " << number1 << " and " << number2 << " is: " << sum << endl; 
	if (number1 < number2)
	{
		if (number1 % 2 == 0)
			cout << number1 << " is even.\n";
		else
			cout << number1 << " is odd.\n";
		if (number2 % 2 == 0)
			cout << number2 << " is even.\n";
		else
			cout << number2 << " is odd.\n";
	}
	else 
	{
		if (number2 % 2 == 0)
			cout << number2 << " is even.\n";
		else
			cout << number2 << " is odd.\n";
		if (number1 % 2 == 0)
			cout << number1 << " is even.\n";
		else
			cout << number1 << " is odd.\n";
	}
		cout << "the sum of the values ";
		if (sum % 2 == 0)
			cout << "(" << sum << ") is even\n";
		else
		cout << "(" << sum << ") is odd\n";
	return 0;
}
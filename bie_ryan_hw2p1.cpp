#include <iostream>
using namespace std;


int main()
{
	int num1;
	int num2;
	int num3;
	int min;

	do
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
		}
		cout << "enter the first integer" << endl;
		cin >> num1;
		if (cin.bad())
			cout << "enter the first integer" << endl;
	} while (cin.fail() || (num1 > 100));

	do
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
		}
		cout << "enter the second integer" << endl;
		cin >> num2;
		if (cin.bad())
			cout << "enter the second integer" << endl;
	} while (cin.fail() || (num2 > 100));

	do
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
		}
		cout << "enter the third integer" << endl;
		cin >> num3;
		if (cin.bad())
			cout << "enter the third integer" << endl;
	} while (cin.fail() || (num3 > 100));

	min = num1;
	if (num2 < min)
		min = num2;
	if (num3 < min)
		min = num3;

	cout << "The minimum integer is " << min << endl;

	return 0;
}
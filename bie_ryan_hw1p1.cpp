#include <iostream>
using namespace std;


int main()
{

	float goldmedal, silvermedal, bronzemedal, winnergap, lastgap, avgtime;

	cout << "enter the time for the gold medal winner: (s): " << endl;
	cin >> goldmedal;

	cout << "enter the time for the silver medal winner: (s): " << endl;
	cin >> silvermedal;

	cout << "enter the time for the bronze medal winner: (s): " << endl;
	cin >> bronzemedal; 

	//float winnergap, lastgap, avgtime;
	winnergap = silvermedal - goldmedal;
	lastgap = bronzemedal - silvermedal;
	avgtime = (goldmedal + silvermedal + bronzemedal) / 3;

	cout << "The gap between winner and runner up is " << winnergap;
	cout << "s" <<endl;
	
	cout << "The gap between second and third place is " << lastgap;
	cout << "s" << endl;

	cout << "The average time of the top three runners is " << avgtime;
	cout << "s" << endl;

	return 0; 
}
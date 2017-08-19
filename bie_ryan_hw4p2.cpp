#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void addRandNumber(int age);

int main(int argc, char** argv) {

	int age;

	cout << "Player 1: enter your age as an integer: ";
	cin >> age;

	addRandNumber(age);

	return 1;
}

void addRandNumber(int age) {

	int xRan;
	srand(time(0));

	xRan = rand() % (age/2 + 1);
	age = age + xRan;

	if (xRan < 10) {
		cout << "Player 1: your age will be...." << age << ". Great, isnt it?" << endl;
		cout << "Consider buying life insurance" << endl;

	}
	else {
		cout << "Player 1: your age will be...." << age << ". Great, isnt it?" << endl;
	}
}
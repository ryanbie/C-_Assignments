#include <iostream>
#include <cstdlib>
#include <string.h>
#include <string>

using namespace std;

class User
{
private:
	int id;
	string catchPhrase;

public:
	string name;

	User(int newid, string newUser, string newCatchPhrase)
	{
		id = newid;
		name = newUser;
		catchPhrase = newCatchPhrase;
	}

	int setUserID(int uid)
	{
		id = uid;
		return 0;
	}

	int getUserID(void) const
	{
		return id;
	}

	int getAnotherUsersID(string message, User &theOtherUser)
	{
		cout << theOtherUser.name << " received this message: " << message << endl;
		return 0;
	}
};


int main(int argc, char *argv[])
{
	int i = 0;

	User Bill = User(1, "Bill", "Carpe Diem");
	User Ted = User(2, "Ted", "Caveat Emptor");

	Bill.setUserID(1);
	Ted.setUserID(2);
	string message = "I message, therefore I am";

	cout << Bill.name << " is sending this message: " << message << endl;
	Bill.getAnotherUsersID(message, Ted);

	return 0;
}


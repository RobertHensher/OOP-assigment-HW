// customer.h

#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>

using namespace std;

class customer
{

public:
	customer();
	~customer();
	void getLogin();
	void getProfileInfo(string &fName, string &sName, string &address);
	void getPaymentInfo();

protected:
	string fName;
	string sName;
	string address;

};

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//constructor
customer :: customer()
{
	fName = "";
	sName = "";
	address = ""; // initialise variable 
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// destructor
customer :: ~customer()
{
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// customer logs in
void customer::getLogin()
{

	string username; // in the real system, a set of usernames/passwords would be saved in a database file
	string password; // in this prototype, any username/password lwill be accepted

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ LOG IN ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
	cout << "\n WELCOME TO THE BUCKS CENTRE FOR THE PERFORMING ARTS TICKET PURCHASING SYSTEM!" << endl;
	cout << "                                                      PLEASE LOG IN." << endl;
	cout << "ENTER USERNAME: ";

	getline(cin, username);

	while (username.length() > 10)
	{
		cout << "YOUR USERNAME SHOULD BE NO MORE THAN 10 CHARACTERS LONG." << endl;
		cout << "PLEASE RE-ENTER YOUR USERNAME: ";
		getline(cin, username);
	}

	cout << "ENTER PASSWORD";
	getline(cin, password);

	while (password.length() > 10)
	{
		cout << "YOUR PASSWORD SHOULD BE NO MORE THAN 10 CHARACTERS LONG." << endl;
		cout << "PLEASE RE-ENTER YOUR PASSWORD: ";
		getline(cin, password);
	}

}

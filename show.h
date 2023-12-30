// show.h

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class show
{

		public:
			show();
			~show();
			void selectShow(string &showName, string &showDate);
			string selectTime();
		protected:
			string showName;
			string showDate;
			string showTime;

};
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//constructor
show :: show()
{
	showName = "";
	showDate = "";
	showTime = "";
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//destructor
show :: ~show()
{
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// customer selects upcoming shows 
void show :: selectShow(string &showName, string &showDate)
{
	char ch;
	char terminator;

	system("CLS");

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~SELET AN UPCOMING SHOW~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	cout << "1. Star Wars: The Musical (20/05/2024)" << endl;
	cout << "2. Les Miserables (21/05/2024)" << endl;
	cout << "3. The Phantom Of The Opera (22/05/2024)" << endl;
	cout << "4. Nutcracker (23/05/2024)" << endl;
	cout << "5. Cindarella (24/05/2024)" << endl;
	//list of events 

	cin.clear();
	cin.ignore(100, '\n'); //ensure buffer is completly clear (if, say, the user has previously input a long string)

	cout << "Please select a show number: ";
	cin.get(ch);

	while (ch != '1' && ch != '2' && ch != '3' && ch != '4' && ch != '5' )

	{
		cin.clear();
		cin.ignore(100, '\n'); 

		cout << "Please select a valid show number: ";
		cin.get(ch);
	}

	switch (ch)
	{
	case '1': showName = "Star Wars : The Musical", showDate = "20/05/2024";
		break;
	case '2': showName = "Les Miserables", showDate = "21/05/2024";
		break;
	case '3': showName = "The Phantom Of The Opera", showDate = "22/05/2024";
		break;
	case '4': showName = "Nutcracker", showDate = "23/05/2024";
		break;
	case '5': showName = "Cindarella", showDate = "24/05/2024";
		break;
	}

	this -> showName = showName;
	this -> showDate = showDate; //enters refrence variable into class variable

	cin.get(terminator); //clears buffer 

}

#include "Movie.h"
#include "Person.h"
#include <iostream>
using namespace std;


bool Movie::isLongMovie(int runtime)
{
	cout << "Enter the runtime of the movie in minutes: " << endl;
	cin >> runtime;

	if (runtime > 135)
	{
		return true;
	}
	else
		return false;
}




ostream& operator << (ostream& strm, Person& person)
{
	strm << "Movie: " << endl << person.getFirstName() << endl <<
		person.getLastName() << endl << person.getDob() << endl;
}

#include "Movie.h"
#include "Person.h"
#include <iostream>
using namespace std;


bool Movie::isLongMovie(int min)
{
	cout << "Enter the runtime of the movie in minutes: " << endl;
	cin >> min;

	if (min > 135)
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

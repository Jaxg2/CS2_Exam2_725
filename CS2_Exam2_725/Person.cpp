#include "Person.h"
#include <iostream>
using namespace std;



Person::Person(string first_name, string last_name, int dob)
{

}

string Person::getFirstName()
{
	return first_name;
}

string Person::getLastName()
{
	return last_name;
}


void Person::setDob()
{
	dob = 0;
}
int Person::getDob()
{
	return dob;
}
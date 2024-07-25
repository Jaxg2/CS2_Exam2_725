#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person
{
private:
	string first_name;
	string last_name;
	int dob;
public:
	Person(string first_name, string last_name, int dob);
	string getFirstName();
	string getLastName();
	void setDob();
	int getDob();
};

#endif
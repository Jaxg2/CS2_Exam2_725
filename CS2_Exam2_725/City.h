#ifndef CITY_H
#define CITY_H
#include <iostream>
using namespace std;

class City
{
private:
	string name;
	double latitude;
	double longitude;
public:
	City(double latitude, double longitude);
	string getName();
	double getLatitude();
	double getLongitude();
};

#endif
#ifndef ITINERARY_H
#define ITINERARY_H
#include <vector>
#include <iostream>
#include <cmath>
#include "City.h"
using namespace std;

class Itinerary
{
private:
	vector <City> cities;
public:
	string getCities();
	string addCity();
	static double getDistance();
};

#endif
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
	double distance;
	City latitude;
	City longitude;
public:
	string getCities();
	string addCity();
	static double getDistance(double distance);
	int getDistance();
	int getLat();
	int getLong();
};

#endif
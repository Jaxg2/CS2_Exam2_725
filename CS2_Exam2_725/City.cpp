#include "City.h"

City::City(double latitude, double longitude)
{
	latitude = 0;
	longitude = 0;
}

string City::getName()
{
	return name;
}

double City::getLatitude()
{
	return latitude;
}

double City::getLongitude()
{
	return longitude;
}
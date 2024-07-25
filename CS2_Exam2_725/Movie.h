#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include <vector>
#include "Person.h"
using namespace std;


class Movie
{
private:
	Person director;
	vector <Person> cast;
	int runtime;
public:
	bool isLongMovie(int min);

};

#endif
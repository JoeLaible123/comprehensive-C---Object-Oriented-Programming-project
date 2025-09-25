//Joseph I Laible
// This is the header ".h" file  for class base class WW1_Major_Figure

#ifndef ALLEGIANCE_H
#define ALLEGIANCE_H

#include "WW1_Major_Figure.h"
#include <string>
using std::string;

#include <ostream>
using std::ostream;

class Allegiance :
	public 	WW1_Major_Figure
{
public: //declare public variables 

	// default constructor
	Allegiance();

	// initialization constructor
	Allegiance( string firstName, string lastName, int born, int died, string nationality, string allegiance);

	// destructor
	~Allegiance();


	string getnationality() { return nationality; }
	string getallegiance() { return allegiance; }


private:
	
	string nationality;
	string allegiance;
	
};

#endif


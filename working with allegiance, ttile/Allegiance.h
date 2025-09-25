//Joseph I Laible
// Professor Jonathan S. Weissman
// Cis 554 Object Oriented Programming in C++
// Syracuse University 
// text ref - C++ How to program 10th ed, Paul & Harvey Deitel 
//Final project
//3/14/2024
// This program can be used to help calculate account values based on fixed intrest rates 
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


//Joseph I Laible
// This is the header ".cpp" implemenation file  for class base class WW1_Major_Figure
#include "Allegiance.h"
#include <iostream>
using std::cout;
using std::endl;

// default constructor
// initialize our data to something usefule
Allegiance::Allegiance()
	:  nationality ("unkown"),  allegiance ("The Entente or The Central Powers")
{
	// no body needed. everthing was done in the initialization list
}


// initialization constructor
// initialize our data to what the user requires
Allegiance::Allegiance( string firstName, string lastName, int born, int died, string nationality, string allegiance)
	: WW1_Major_Figure( firstName, lastName, born, died),nationality(nationality),allegiance(allegiance)
{
	// no body needed. everthing was done in the initialization list
}


Allegiance::~Allegiance()
{
	// nothing to do at this time
}

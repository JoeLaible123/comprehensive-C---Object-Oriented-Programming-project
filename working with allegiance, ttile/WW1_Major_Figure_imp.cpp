//Joseph I Laible
// This is the header ".cpp" implemenation file  for class base class WW1_Major_Figure
#include "WW1_Major_Figure.h"
#include <iostream>
using std::cout;
using std::endl;

// default constructor
// initialize our data to something usefule
WW1_Major_Figure::WW1_Major_Figure()
	: firstName("Jane"), lastName("Doe"), born(0),died(0)
{
	// no body needed. everthing was done in the initialization list
}


// initialization constructor
// initialize our data to what the user requires
WW1_Major_Figure::WW1_Major_Figure( string firstName, string lastName, int born, int died)
	: firstName(firstName), lastName(lastName), born(born), died(died)
{
	// no body needed. everthing was done in the initialization list
}


WW1_Major_Figure::~WW1_Major_Figure()
{
	// nothing to do at this time
}

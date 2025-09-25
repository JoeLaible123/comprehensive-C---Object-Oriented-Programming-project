//Joseph I Laible
// Professor Jonathan S. Weissman
// Cis 554 Object Oriented Programming in C++
// Syracuse University 
// text ref - C++ How to program 10th ed, Paul & Harvey Deitel 
//Final project
//3/14/2024
// This program can be used to help calculate account values based on fixed intrest rates 
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

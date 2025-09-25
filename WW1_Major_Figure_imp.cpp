//Joseph I Laible
// Professor Jonathan S. Weissman
// Cis 554 Object Oriented Programming in C++
// Syracuse University 
// text ref - C++ How to program 10th ed, Paul & Harvey Deitel 
//Final project
//3/14/2024
// This is the  ".cpp" implemenation file  for class base class WW1_Major_Figure
#include "WW1_Major_Figure.h"
#include <iostream>
using std::cout;
using std::endl;

// default constructor
// initialize our data to something usefule
WW1_Major_Figure::WW1_Major_Figure()
	: firstName("Jane"), lastName("Doe"), born(0),died(0), Nationality("uknown")
{
	
	// no body needed. everthing was done in the initialization list
}


// initialization constructor
// initialize our data to what the user requires
WW1_Major_Figure::WW1_Major_Figure( string firstName, string lastName, int born, int died, string Nationality)
	: firstName(firstName), lastName(lastName), born(born), died(died), Nationality(Nationality)
{
	
	// no body needed. everthing was done in the initialization list
}


WW1_Major_Figure::~WW1_Major_Figure()
{
	
	// nothing to do at this time
}




void WW1_Major_Figure::additional_note() {
	ageInWarStart = 1914 - WW1_Major_Figure::getborn();
	cout <<"\n"<<WW1_Major_Figure::GetLastName() << " was " << ageInWarStart << " at the start of the war.\n";
}



//Joseph I Laible
// Professor Jonathan S. Weissman
// Cis 554 Object Oriented Programming in C++
// Syracuse University 
// text ref - C++ How to program 10th ed, Paul & Harvey Deitel 
//Final project
//3/14/2024
// This program can be used to help calculate account values based on fixed intrest rates 
// This is the header ".h" file  for class base class WW1_Major_Figure

#ifndef CENTRAL_H
#define CENTRAL_H

#include "WW1_Major_Figure.h"
#include <string>
using std::string;

#include <ostream>
using std::ostream;

class Central_Powers :
	public 	WW1_Major_Figure
{
public: //declare public variables 

	// default constructor
	Central_Powers();

	// initialization constructor
	Central_Powers( string firstName, string lastName, int born, int died, string Nationality, string CentralPowers);

	// destructor
	~Central_Powers();


	string getCentralPowers() const{ return CentralPowers; }

	//Vitrtual function additional_note to be used with every class and derivative 
	virtual void additional_note() override;
	//virtual void newly_Added_Objects() override;


private:
	
	string CentralPowers;
	
	
};

#endif


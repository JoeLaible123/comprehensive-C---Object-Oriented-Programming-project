//Joseph I Laible
// This program can be used to help calculate account values based on fixed intrest rates 
// This is the header ".h" file  for class base class WW1_Major_Figure

#ifndef DEFEAT_H
#define DEFEAT_H

#include "Central.h"
#include <string>
using std::string;

#include <ostream>
using std::ostream;

class Defeat_Additions :
	public 	Central_Powers
{
public: //declare public variables 

	// default constructor
	Defeat_Additions();

	// initialization constructor
	Defeat_Additions( string firstName, string lastName, int born, int died, string Nationality, string CentralPowers, string DefeatAdditions);

	// destructor
	~Defeat_Additions();


	string getDefeatConditions() { return DefeatAdditions; }

	//Vitrtual function additional_note to be used with every class and derivative 
	virtual void additional_note() override;
	//virtual void newly_Added_Objects() override;


private:
	
	string DefeatAdditions;
	
	
};

#endif


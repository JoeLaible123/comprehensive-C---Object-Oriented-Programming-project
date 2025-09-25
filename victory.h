//Joseph I Laible
// This is the header ".h" file  for class base class WW1_Major_Figure

#ifndef VICTORY_H
#define VICTORY_H

#include "Entente.h"
#include <string>
using std::string;

#include <ostream>
using std::ostream;

class Victory_Additions :
	public 	Entente
{
public: //declare public variables 

	// default constructor
	Victory_Additions();

	// initialization constructor
	Victory_Additions( string firstName, string lastName, int born, int died, string Nationality, string CentralPowers, string VictoryAdditions);

	// destructor
	~Victory_Additions();


	string getVictoryAdditions() { return VictoryAdditions; }

	//Vitrtual function additional_note to be used with every class and derivative 
	virtual void additional_note() override;
	//virtual void newly_Added_Objects() override;


private:
	
	string VictoryAdditions;
	
	
};

#endif


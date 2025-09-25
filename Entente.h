//Joseph I Laible
// Professor Jonathan S. Weissman
// Cis 554 Object Oriented Programming in C++
// Syracuse University 
// text ref - C++ How to program 10th ed, Paul & Harvey Deitel 
//Final project
//3/14/2024
// This program can be used to help calculate account values based on fixed intrest rates 
// This is the header ".h" file  for class inh class Title

#ifndef ENTENTE_H
#define ENTENTE_H


#include "WW1_Major_Figure.h"


#include <string>
using std::string;

#include <ostream>
using std::ostream;

class Entente :
	public 	    WW1_Major_Figure
{
public: //declare public variables 

	// default constructor
	Entente();

	// initialization constructor
	Entente(string firstName, string lastName, int born, int died, string Nationality, string entente);

	// destructor
	~Entente();


	string getEntente() { return entente; }
	

	//Vitrtual function additional_note to be used with every class and derivative 
	virtual void additional_note() override;

	//virtual void newly_Added_Objects() override;
private:
	
	string entente;
	
	
};

#endif


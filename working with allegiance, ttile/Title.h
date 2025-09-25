//Joseph I Laible
// Professor Jonathan S. Weissman
// Cis 554 Object Oriented Programming in C++
// Syracuse University 
// text ref - C++ How to program 10th ed, Paul & Harvey Deitel 
//Final project
//3/14/2024
// This program can be used to help calculate account values based on fixed intrest rates 
// This is the header ".h" file  for class inh class Title

#ifndef TITLE_H
#define TITLE_H

#include "Allegiance.h"


#include <string>
using std::string;

#include <ostream>
using std::ostream;

class Title :
	public 	    Allegiance
{
public: //declare public variables 

	// default constructor
	Title();

	// initialization constructor
	Title( string firstName, string lastName, int born, int died, string nationality, string allegiance,string title, string Organization);

	// destructor
	~Title();


	string gettitle() { return title; }
	string getOrganization() { return Organization; }


private:
	
	string title;
	string Organization;
	
};

#endif


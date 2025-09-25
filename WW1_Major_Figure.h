//Joseph I Laible
// Professor Jonathan S. Weissman
// Cis 554 Object Oriented Programming in C++
// Syracuse University 
// text ref - C++ How to program 10th ed, Paul & Harvey Deitel 
//Final project
//3/14/2024
// This is the header ".h" file  for class base class WW1_Major_Figure

#ifndef WW1_MAJOR_FIGURE_H
#define WW1_MAJOR_FIGURE_H

#include <string>
using std::string;

#include <ostream>
using std::ostream;

class WW1_Major_Figure
{
public: 
	//declare public variables 
	int ageInWarStart;
	// default constructor
	WW1_Major_Figure();

	// initialization constructor
	WW1_Major_Figure( string firstName, string lastName, int born, int died, string Nationality);


	// destructor
	~WW1_Major_Figure();

	//getter functions for class WW1_Major_Figure
	string GetFirstName() { return firstName; }
	string GetLastName() { return lastName; }
	string getNationality() { return Nationality; }
	int getborn() { return born; }
	int getdied() { return died; }

	//Vitrtual function additional_note to be used with every class and derivative 
	virtual void additional_note();

	//virtual void newly_Added_Objects();


private:
	
	string firstName;
	string lastName;
	string Nationality;
	int born;
	int died;
	
};

#endif


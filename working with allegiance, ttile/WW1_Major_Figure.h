//Joseph I Laible
// This is the header ".h" file  for class base class WW1_Major_Figure

#ifndef WW1_MAJOR_FIGURE_H
#define WW1_MAJOR_FIGURE_H

#include <string>
using std::string;

#include <ostream>
using std::ostream;

class WW1_Major_Figure
{
public: //declare public variables 

	// default constructor
	WW1_Major_Figure();

	// initialization constructor
	WW1_Major_Figure( string firstName, string lastName, int born, int died);

	// destructor
	~WW1_Major_Figure();


	string GetFirstName() { return firstName; }
	string GetLastName() { return lastName; }
	int getborn() { return born; }
	int getdied() { return died; }


private:
	
	string firstName;
	string lastName;
	int born;
	int died;
};

#endif


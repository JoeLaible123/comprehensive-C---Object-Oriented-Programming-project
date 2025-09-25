//Joseph I Laible
// Professor Jonathan S. Weissman
// Cis 554 Object Oriented Programming in C++
// Syracuse University 
// text ref - C++ How to program 10th ed, Paul & Harvey Deitel 
//Final project
//3/14/2024
// This program can be used to help calculate account values based on fixed intrest rates 
// This is the main .cpp file for the project (Final_Project). 

#include "WW1_Major_Figure.h"
#include "Allegiance.h"
#include "Title.h"

#include <iostream>
using std::cout;
using std::endl;

// Demonstrate CommunityMember class
void DemonstrateWW1_Major_Figure(WW1_Major_Figure &);
void DemonstrateAllegiance(Allegiance &);
void DemonstrateTitle(Title &);


int main()
{
	// demonstrate WW1_Major_Figure default constructor
	cout << "***** Demonstrating the default constructor, and member methods, for class WW1_Major_Figure" << endl;
	WW1_Major_Figure ww1Figure;
	DemonstrateWW1_Major_Figure(ww1Figure);
	cout << endl;

	// demonstrate WW1_Major_Figure initialization constructor
	cout << "***** Demonstrating the initialization constructor, and member methods, for class WW1_Major_Figure" << endl;
	WW1_Major_Figure ww1Figure_Pershing("John", "Pershing", 1860, 1948);
	DemonstrateWW1_Major_Figure(ww1Figure_Pershing);
	cout << endl;

	// demonstrate Allegiance default constructor
	cout << "***** Demonstrating the default constructor, and member methods, for class Allegiance" << endl;
	Allegiance ww1Allegiance;
	DemonstrateAllegiance(ww1Allegiance);
	cout << endl;

	// demonstrate Allegiance initialization constructor
	cout << "***** Demonstrating the initialization constructor, and member methods, for class Allegiance" << endl;
	Allegiance ww1Allegiance_Pershing("John", "Pershing", 1860, 1948, "USA","Entente");
	DemonstrateAllegiance (ww1Allegiance_Pershing);
	cout << endl;

	// demonstrate Title default constructor
	cout << "***** Demonstrating the default constructor, and member methods, for class Title" << endl;
	Title ww1Title;
	DemonstrateTitle(ww1Title);
	cout << endl;

	// demonstrate Title initialization constructor
	cout << "***** Demonstrating the initialization constructor, and member methods, for class Title" << endl;
	Title ww1Title_Pershing("John", "Pershing", 1860, 1948, "USA", "Entente","Major General ","US Army AEF");
	DemonstrateTitle(ww1Title_Pershing);
	cout << endl;



}

void DemonstrateWW1_Major_Figure(WW1_Major_Figure & a)
{
	cout << a.GetFirstName() << " "
		<< a.GetLastName()
		<< " was born in the year " << a.getborn() << " and died in year " << a.getdied() << endl;
}


void DemonstrateAllegiance(Allegiance & a)
{
	cout << a.GetFirstName() << " "
		<< a.GetLastName()
		<< "\nWas from the " << a.getnationality()
		<< "\nUnder the " << a.getallegiance() << " powers"<< endl;
}

void DemonstrateTitle(Title & a)
{
	cout << a.GetFirstName() << " "
		<< a.GetLastName()
		 << "\nServed as a " << a.gettitle()
		<< "\nFor the " << a.getOrganization() << endl;
}


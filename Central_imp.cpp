//Joseph I Laible
// Professor Jonathan S. Weissman
// Cis 554 Object Oriented Programming in C++
// Syracuse University 
// text ref - C++ How to program 10th ed, Paul & Harvey Deitel 
//Final project
//3/14/2024
// This is the  ".cpp" implemenation file  for derived  class Central_powers
#include "Central.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

// default constructor
// initialize our data to something usefule
Central_Powers::Central_Powers()
	: CentralPowers("unkown country ")
{
	// no body needed. everthing was done in the initialization list
}


// initialization constructor
// initialize our data to what the user requires
Central_Powers::Central_Powers(string firstName, string lastName, int born, int died,string Nationality, string CentralPowers)
	: WW1_Major_Figure(firstName, lastName, born, died, Nationality), CentralPowers(CentralPowers){
	// no body needed. everthing was done in the initialization list
}


Central_Powers::~Central_Powers()
{
	// nothing to do at this time
}

//Vitrtual function additional_note used to provide a better user output & organzation of WW1 figures 
void Central_Powers::additional_note()
{
	cout << "\n\n" << WW1_Major_Figure::GetLastName(); cout << " Held the title of "<< getCentralPowers(); cout << " serving the ";
	if (getNationality() == "Germany") {
		cout << "German Imperial Forces";
	}
	else if (getNationality() == "Turkey" || getNationality() == "Greece" || getNationality() == "Bulgaria" || getNationality() == "Romania" || getNationality() == "Palestine" || getNationality() == "Lebanon"
		|| getNationality() == "Syria" || getNationality() == "Iraq" || getNationality() == "Kuwait" || getNationality() == "Saudi Arabia" || getNationality() == "Jordan" || getNationality() == "Cyprus") {
		cout << "Ottoman Imperial Forces";
	}
	else if (getNationality() == "Austria" || getNationality() == "Hungary" || getNationality() == "Bohemia" || getNationality() == "Moravia" || getNationality() == "Bukovina" ||
		getNationality() == "Transylvania" || getNationality() == "Carniola" || getNationality() == "KustenLand" || getNationality() == "Dalmatia" || getNationality() == "Croatia" ||
		getNationality() == "Fiume" || getNationality() == "Galicia") {
		cout << "Austro-Hungarian Imperial Forces";
	}
	else { 
		cout << "a  member of the Central Powers"; }
}



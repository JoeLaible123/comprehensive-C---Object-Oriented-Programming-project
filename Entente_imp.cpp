//Joseph I Laible
// This is the  ".cpp" implemenation file  for derived  class Entente
#include "Entente.h"

#include <iostream>
using std::cout;
using std::endl;

// default constructor
// initialize our data to something usefule
Entente::Entente()
	: entente("member of Entente powers")
{
	// no body needed. everthing was done in the initialization list
}


// initialization constructor
// initialize our data to what the user requires
Entente::Entente(string firstName, string lastName, int born, int died, string Nationality, string entente)
	:WW1_Major_Figure(firstName, lastName, born, died, Nationality), entente(entente){

	// no body needed. everthing was done in the initialization list
}


Entente::~Entente()
{
	// nothing to do at this time
}

//Vitrtual function additional_note used to provide a better user output & organzation of WW1 figures 
void Entente::additional_note()
{
	cout << "\n\n" << WW1_Major_Figure::GetLastName(); cout << " Held the title of " << getEntente() << " serving the ";
	if (getNationality() == "USA" || getNationality() == "Puerto Rico"|| getNationality() == "Phillipines") {
		cout << "AEF (American Expeditary Forces)";
	}
	else if (getNationality() == "England" || getNationality() == "Scottland" || getNationality() == "Whales" || getNationality() == "Ireland" || getNationality() == "Canada" || getNationality() == "India" ||
		getNationality() == "Burma" || getNationality()=="Egypt") {
		cout << "British Imperial Forces";
	}
	else if (getNationality() == "Finland" || getNationality() == "Poland" || getNationality() == "Russia" || getNationality() == "Ukraine" || getNationality() == "Latvia" || getNationality() == "Lithuania" || getNationality() == "Estonia"
		|| getNationality() == "Belarus" || getNationality() == "Georgia" || getNationality() == "Armenia" || getNationality() == "Azerbaijan" || getNationality() == "Caucasus Region" || getNationality() == "Asian Steppe Region") {

		cout << "Russian Imperial Forces";
	}
	else if (getNationality() == "France" || getNationality() == "French Indo-China" || getNationality() == "Algeria" || getNationality() == "French North Africa") {
		cout << "French Republican Forces";
	}

	else if (getNationality() == "Italy") {
		cout << "Royal Italian Forces";
	}


	else {
		cout << "a  member of the Entente Powers";
	}
}




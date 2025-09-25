//Joseph I Laible
// This is the  ".cpp" implemenation file  for 2nd derived class Defeat_Additions
#include "Central.h"
#include "WW1_Major_Figure.h"

#include <iostream>
#include "Defeat.h"
using std::cout;
using std::endl;

// default constructor

Defeat_Additions::Defeat_Additions()
{
}

Defeat_Additions::Defeat_Additions(string firstName, string lastName, int born, int died, string Nationality, string CentralPowers, string DefeatAdditions)
	: Central_Powers(firstName, lastName, born, died, Nationality, CentralPowers), DefeatAdditions(DefeatAdditions)
	
{
	// no body needed. everthing was done in the initialization list
}







Defeat_Additions::~Defeat_Additions()
{
	// nothing to do at this time
}

//Vitrtual function additional_note used to provide a better user output & organzation of military v goverment figures 
void Defeat_Additions::additional_note()
{
	cout << "\n\n" << WW1_Major_Figure::GetLastName(); cout << " contributed to defeat in multiple ways, most notabley. " << getDefeatConditions();
	cout << "\n Overall the ";
	if (getNationality() == "Germany") {
		cout << "German Imperial Forces had many tatical, and operational victories. But the strategic demands of a multi front war, combined with political instability of domestic v military powers lead the German empire to yield to peace.";
	}
	else if (getNationality() == "Turkey" || getNationality() == "Greece" || getNationality() == "Bulgaria" || getNationality() == "Romania" || getNationality() == "Palestine" || getNationality() == "Lebanon"
		|| getNationality() == "Syria" || getNationality() == "Iraq" || getNationality() == "Kuwait" || getNationality() == "Saudi Arabia" || getNationality() == "Jordan" || getNationality() == "Cyprus") {
		cout << "Ottoman Imperial Forces defened the Turkish homeland against many major assaults but failed on the periphery due to Allied incursions assisting local rebels. Additionally, Turkish natationalism would contribue to weakening the Ottoman Imperial state, reducing the Empries ability to continue the war effort";
	}
	else if (getNationality() == "Austria" || getNationality() == "Hungary" || getNationality() == "Bohemia" || getNationality() == "Moravia" || getNationality() == "Bukovina" ||
		getNationality() == "Transylvania" || getNationality() == "Carniola" || getNationality() == "KustenLand" || getNationality() == "Dalmatia" || getNationality() == "Croatia" ||
		getNationality() == "Fiume" || getNationality() == "Galicia") {
		cout << "Austro-Hungarian Imperial Forces faced a multifront war with major decisive losses, already compounding a vast network of multicultural peoples that lead the Empire to shatter under it's own political pressures";
	}
	else {
		cout << "a  member of the Central Powers";
	}
}




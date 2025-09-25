//Joseph I Laible
// This is   ".cpp" implemenation file  for 2nd derived class Defeat_Additions
#include "Entente.h"
#include "victory.h"
#include "WW1_Major_Figure.h"

#include <iostream>

using std::cout;
using std::endl;

// default constructor

Victory_Additions::Victory_Additions()
{
}

Victory_Additions::Victory_Additions(string firstName, string lastName, int born, int died, string Nationality, string CentralPowers, string VictoryAdditions)
	: Entente(firstName, lastName, born, died, Nationality, CentralPowers), VictoryAdditions(VictoryAdditions)
	
{
	// no body needed. everthing was done in the initialization list
}







Victory_Additions::~Victory_Additions()
{
	// nothing to do at this time
}

//Vitrtual function additional_note used to provide a better user output & organzation of military v goverment figures 
void Victory_Additions::additional_note()
{
	cout << "\n\n" << WW1_Major_Figure::GetLastName(); cout << " contributed to victory in multiple ways, most notabley. " << getVictoryAdditions();
	cout << "\n Overall the ";
	if (getNationality() == "USA" || getNationality() == "Puerto Rico"|| getNationality() == "Phillipines") {
		cout << "AEF Forces were instrumental in the final years of the war, with overwheling manpower and material, contributing to the 100 days offensive on the Western Front that lead to final victory.";
	}
	else if (getNationality() == "England" || getNationality() == "Scottland" || getNationality() == "Whales" || getNationality() == "Ireland" || getNationality() == "Canada" || getNationality() == "India" ||
		getNationality() == "Burma" || getNationality()=="Egypt") {
		cout << "The Imperial Navy was usefull in keeping the Germany Navy in port, assisting in wars of the perifery, and manpower reserves from colonial possesions allowed this nation to bolster French Resistance.";
	}
	else if (getNationality() == "Finland" || getNationality() == "Russia" || getNationality() == "Poland" || getNationality() == "Ukraine" || getNationality() == "Latvia" || getNationality() == "Lithuania" || getNationality() == "Estonia"
		|| getNationality() == "Belarus" || getNationality() == "Georgia" || getNationality() == "Armenia" || getNationality() == "Azerbaijan" || getNationality() == "Caucasus Region" || getNationality() == "Asian Steppe Region") {

		cout << "Russian Imperial Forces were instrumental in drawing German Manpower to the Eastern Front, as well as key to breaking the Austro Hungarian army in the Carpathians";
	}
	else if (getNationality() == "France" || getNationality() == "French Indo-China" || getNationality() == "Algeria" || getNationality() == "French North Africa") {
		cout << "French Republican Forces held a stalwart defense of thier homeland, were instrumental in adopting combined Arms tatics and attributing to overall victory with strategic innovation.";
	}

	else if (getNationality() == "Italy") {
		cout << "Royal Italian Forces had few major victories but provided key strategic pressure and caused massive manpower demands on central powers with thier multiple assaults into the Austrian Alps.";
	}


	else {
		cout << "Although not a major player, multiple nations provided the Allies with overwhelming Manpower and Material advtanages.";
	}
}




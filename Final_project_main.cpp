//Joseph I Laible
// This program can be used to help calculate account values based on fixed intrest rates 
// This is the main .cpp file for the project (Final_Project). 

#include "WW1_Major_Figure.h"
#include "Entente.h"
#include "Central.h"
#include "victory.h"
#include "Defeat.h"
#include <vector> // allow use of Vectors 
#include <memory>

#include <iostream>
#include <print>
using std::cout;
using std::cin;
using std::endl;


// Demonstrate CommunityMember class
void DemonstrateWW1_Major_Figure(WW1_Major_Figure &);
void userAddWW1FiguretoBaseClass();
//void DemonstrateCentral_Powers(Central_Powers &);
//void DemonstrateEntente(Entente &);

//variables for user inputs
int seeAllBaseClass;
int seeDerivedClass;
int see2ndDerivedClass;
int loopstart;
int buildStart;
int derivedBuildStart;
int derivedBuildStart2;
int exitloop;
string firstName;
string lastName;
string Nationality;
string victory;
string defeat;
int born;
int died;
string objNameBase;
string objNameDerivedE ="E_"+ objNameBase;
string objNameDerivedC = "C_" + objNameBase;
string objName2DerivedV = "V_E_" + objNameBase;
string objName2DerivedD = "D_C_" + objNameBase;
string ptrName = "Ptr" + objNameBase;
string title;


//functions to display example of the  class DemonstrateWW1_Major_Figure
void DemonstrateWW1_Major_Figure(WW1_Major_Figure& a)
{
	cout << a.GetFirstName() << " "
		<< a.GetLastName()
		<< "\nWas born in the year " << a.getborn() << " and died in year " << a.getdied() << "."
		<< "\nWas From " << a.getNationality() << ".";
	a.additional_note();
}

void DemonstrateEntente(Entente& a)
{
	cout << a.GetFirstName() << " "
		<< a.GetLastName()
		<< "\nadded to derived Class Entente with Title"<< a.getEntente();
	a.additional_note();
}

void DemonstrateCentral_Powers(Central_Powers& a)
{
	cout << a.GetFirstName() << " "
		<< a.GetLastName()
		<< "\nadded to derived Class Entente with Title"<< a.getCentralPowers();
	a.additional_note();
}

//create vector for WW1 figures to display pointers with applied overidden function for Entente(E) and Central_Powers(C) add_note
std::vector< WW1_Major_Figure*> ww1VectorE;
std::vector< WW1_Major_Figure*> ww1VectorC;

//create vector for WW1 figures to display pointers with applied overidden function for VicotryAdditions(V) and DefeatAdditions(D) add_note
std::vector< WW1_Major_Figure*> ww1VectorE_VA;
std::vector< WW1_Major_Figure*> ww1VectorC_DA;

//function for user to add base class object,derived class obj and pointers
void userAddWW1FiguretoBaseClass() {
	cout << "\nEnter first name of figure: ";
	cin >> firstName;
	cout << "\n Enter Last name of figure: ";
	cin >> lastName;
	cout << "\n Enter Nation of birth (Austria,Germany,USA,England. Please capatalize first letter): ";
	cin >> Nationality;
	cout << "\n Enter year of birth ";
	cin >> born;
	cout << "\n Enter year of death ";
	cin >> died;
	cout << "\n Please enter Name for the object ";
	cin >> objNameBase;

	//create baseobj
	WW1_Major_Figure objNameBase(firstName, lastName, born, died, Nationality);

	cout << "\nYou have created a new object: \n";
	//demonstrate base obj
	DemonstrateWW1_Major_Figure(objNameBase);

	cout << "\n\n Would you like to create a derived class object for this? (1 for Entente, 2 for Central_Powers, 3 for no) ";
	cin >> derivedBuildStart;
	if (derivedBuildStart == 1) {
		cout << "please enter this figure's Title or rank ";
		cin >> title;

		//create obj for derived class Entente
		Entente objNameDerivedE(firstName, lastName, born, died, Nationality, title);
		//display new object via Demonstrate*function
		DemonstrateEntente(objNameDerivedE);
		//create entry in vector ww1VectorE as a pointer
		ww1VectorE.push_back(new Entente(firstName, lastName, born, died, Nationality, title));//pg 467 need to use new to get around memory alloction error

		//request user inputs for 2nd derived class objs (VictoryAdditions/defeatadditions) 
		cout << "\n\nGreat! would you like to add this figure to the 2nd derived class Victory conditions? (1 for yes)";
		cin >> derivedBuildStart2;
		if (derivedBuildStart2 == 1) {
			cout << "\n Please enter something they did to add to total victory for the Entente ";
			cin >> victory;
			//create new obj for class victoryaddition
			Victory_Additions objName2DerivedV(firstName, lastName, born, died, Nationality, title, victory);
			//create entry in vector ww1VectorE as a pointer
			ww1VectorE_VA.push_back(new Victory_Additions(firstName, lastName, born, died, Nationality, title, victory));
		}
		else "";
	}

	if (derivedBuildStart == 2) {
		cout << "please enter this figure's Title or rank ";
		cin >> title;

		//create obj for derived class CentralPowers
		Central_Powers objNameDerivedC(firstName, lastName, born, died, Nationality, title);
		//display new object via Demonstrate*function
		DemonstrateCentral_Powers(objNameDerivedC);

		//addpointers to vector
		ww1VectorC.push_back(new Central_Powers(firstName, lastName, born, died, Nationality, title));
		cout << "\n\nGreat! would you like to add this figure to the 2nd derived class Defeat conditions? (1 for yes)";
		cin >> derivedBuildStart2;
		if (derivedBuildStart2 == 1) {
			cout << "\n Please enter something they did to add to total defeat for the Central Powers ";
			cin >> defeat;
			//create new obj for class defeataddtion
			Defeat_Additions objName2DerivedD(firstName, lastName, born, died, Nationality, title, defeat);
			//create entry in vector ww1VectorE as a pointer
			ww1VectorC_DA.push_back(new Defeat_Additions(firstName, lastName, born, died, Nationality, title, defeat));
		}
		else "";
	}

}
	










int main()
{	
	//create base class WW1_Major_Figure objects
	//Enetne
	WW1_Major_Figure ww1Figure_Pershing("John", "Pershing", 1860, 1948, "USA"); 
	WW1_Major_Figure ww1Figure_Wilson("Woodrow", "Wilson", 1856, 1924, "USA");
	WW1_Major_Figure ww1Figure_King_G("George", "Windsor", 1865, 1936, "England");
	WW1_Major_Figure ww1Figure_lloyd_g("David-Lloyd", "George V", 1863, 1945, "England");
	WW1_Major_Figure ww1Figure_Raymond_P("Raymond", "Poincare", 1860, 1934, "France");
	WW1_Major_Figure ww1Figure_Papa_J("Joseph 'Papa'", "Joffre", 1852, 1931, "France");
	WW1_Major_Figure ww1Figure_Victor("Victor", "Emmanuel III", 1869, 1947, "Italy");
	WW1_Major_Figure ww1Figure_Antonio("Antonio", "Salandra", 1853, 1931, "Italy");
	WW1_Major_Figure ww1Figure_Robert_b("Robert", "Borden", 1854, 1937, "Canada");
	WW1_Major_Figure ww1Figure_Nicholas("Nicholas", "Nicholas II", 1868, 1918, "Russia");
	WW1_Major_Figure ww1Figure_Alesei("Aleksei", "Brusiov", 1853, 1926, "Russia");
	///
	//Central Powers
	WW1_Major_Figure _Kaiser("Friedrich ", "Wilhelm II", 1859, 1941, "Germany");
	WW1_Major_Figure ww1Figure_ludendorf("Erich ", "Von-Ludendorff", 1865, 1937, "Germany");
	WW1_Major_Figure ww1Figure_Hind("Paul ", "Von-Hindenbvurg", 1847, 1934, "Germany");
	WW1_Major_Figure ww1Figure_Franz_F("Franz", "Ferdinand", 1863, 1914, "Austria");
	WW1_Major_Figure ww1Figure_Franz_J("Franz", "Joseph", 1830, 1916, "Austria");
	WW1_Major_Figure ww1Figure_Mehmed("Resad", "Mehmed II", 1844, 1918, "Turkey");
	WW1_Major_Figure ww1Figure_Mustafa("Mustafa", "Kemal- Atatürk", 1881, 1938, "Greece");

	//create derived class Entente Objects
	Entente E_ww1Figure_Pershing("John", "Pershing", 1860, 1948, "USA", "General");
	Entente E_ww1Figure_Wilson("Woodrow", "Wilson", 1856, 1924, "USA", "President");
	Entente E_ww1Figure_King_G("George", "Windsor", 1865, 1936, "England", "King");
	Entente E_ww1Figure_lloyd_g("David-Lloyd", "George V", 1863, 1945, "England", "Lord-Admiral");
	Entente E_ww1Figure_Raymond_P("Raymond", "Poincare", 1860, 1934, "France", "President-PM");
	Entente E_ww1Figure_Papa_J("Joseph 'Papa'", "Joffre", 1852, 1931, "France", "War Minister");
	Entente E_ww1Figure_Victor("Victor", "Emmanuel III", 1869, 1947, "Italy", "King");
	Entente E_ww1Figure_Antonio("Antonio", "Salandra", 1853, 1931, "Italy", "PM");
	Entente E_ww1Figure_Robert_b("Robert", "Borden", 1854, 1937, "Canada", "PM");
	Entente E_ww1Figure_Nicholas("Nicholas", "Nicholas II", 1868, 1918, "Russia", "Tzar");
	Entente E_ww1Figure_Alesei("Aleksei", "Brusiov", 1853, 1926, "Russia", "General");


	//create derived class Central_Powers Objects
	Central_Powers CP_Kaiser("Friedrich ", "Wilhelm II", 1859, 1941, "Germany","Kaiser");
	Central_Powers CP_ww1Figure_ludendorf("Erich ", "Von-Ludendorff", 1865, 1937, "Germany", "General");
	Central_Powers CP_ww1Figure_Hind("Paul ", "Von-Hindenbvurg", 1847, 1934, "Germany", "General");
	Central_Powers CP_ww1Figure_Franz_F("Franz", "Ferdinand", 1863, 1914, "Austria", "Arch-Duke");
	Central_Powers CP_ww1Figure_Franz_J("Franz", "Joseph", 1830, 1916, "Austria", "Emperor");
	Central_Powers CP_ww1Figure_Mehmed("Resad", "Mehmed II", 1844, 1918, "Turkey", "Caliph-Sultan");
	Central_Powers CP_ww1Figure_Mustafa("Mustafa", "Kemal-Atatürk", 1881, 1938, "Greece", "Field Officer");

	//create 2nd level derived class obj VictoryAdditions from deriveed class Enetente
	Victory_Additions V_E_ww1Figure_Pershing("John", "Pershing", 1860, 1948, "USA", "General", "As the primary commander of the AEF.");
	Victory_Additions V_E_ww1Figure_Wilson("Woodrow", "Wilson", 1856, 1924, "USA", "President", "Delegating Nuetratlity throughout the start of the war, joining after the Zimmerman Telegram");
	Victory_Additions V_E_ww1Figure_King_G("George", "Windsor", 1865, 1936, "England", "King", "Promoting Volenteering and delegating a Franco-Enlgish defense");
	Victory_Additions V_E_ww1Figure_lloyd_g("David-Lloyd", "George V", 1863, 1945, "England", "SeaLord-Admiral", "Leading Navel efforts to keep British supply lines open, as well as maintaining the Fleet at Being");
	Victory_Additions V_E_ww1Figure_Raymond_P("Raymond", "Poincare", 1860, 1934, "France", "President-PM", "Let recruitment efforts and rallied moral to continue on the war after the near defeat of Paris");
	Victory_Additions V_E_ww1Figure_Papa_J("Joseph 'Papa'", "Joffre", 1852, 1931, "France", "War Minister", "Led a revolution on officer training, combined arms doctrine, and Anglo-Russo-French strategy");
	Victory_Additions V_E_ww1Figure_Victor("Victor", "Emmanuel III", 1869, 1947, "Italy", "King", "Lead a stalwart offensive campagin throughout the start of the war");
	Victory_Additions V_E_ww1Figure_Antonio("Antonio", "Salandra", 1853, 1931, "Italy", "PM", "Negoated a new treaty allowing Italy to join the Entente instead of the Centarl Powers due to a treaty violation");
	Victory_Additions V_E_ww1Figure_Robert_b("Robert", "Borden", 1854, 1937, "Canada", "PM", "Let volenteering efforts for Canadian Citizens to aid the Empire");
	Victory_Additions V_E_ww1Figure_Nicholas("Nicholas", "Nicholas II", 1868, 1918, "Russia", "Tzar", "Took formal Control of the Army and continued the war even though the populace wanted to bid for peace-Did DIE");
	Victory_Additions V_E_ww1Figure_Alesei("Aleksei", "Brusiov", 1853, 1926, "Russia", "General", "Formed new Russian tatics and strategy, 'broke the back' of the Austro Hungarians with his offensive across the carpahtians");

	//create 2nd level derived class obj DefeatAdditions from deriveed class Central_Powers
	Defeat_Additions D_CP_Kaiser("Friedrich ", "Wilhelm II", 1859, 1941, "Germany", "Kaiser","Promoted prussian militarism across the nation, fueling a 'blank check' strategy to esclate the war");
	Defeat_Additions D_CP_ww1Figure_ludendorf("Erich ", "Von-Ludendorff", 1865, 1937, "Germany", "General", "Mastermind of many early war eastern front sucesses and logisitcal changes, but devotion to decisive victories led to massive manpower/logistical losses");
	Defeat_Additions D_CP_ww1Figure_Hind("Paul ", "Von-Hindenbvurg", 1847, 1934, "Germany", "General", "constant political tension with the Kaiser lead to an exhaustion of Germany manpower/material in aiding allies, and offensive actions depleting national reservers");
	Defeat_Additions D_CP_ww1Figure_Franz_F("Franz", "Ferdinand", 1863, 1914, "Austria", "Arch-Duke", "Died-Started the entire thing");
	Defeat_Additions D_CP_ww1Figure_Franz_J("Franz", "Joseph", 1830, 1916, "Austria", "Emperor", "Refused to yield control of the multinational empire, although impossible to sustain a conntinual war, he continued the fight eventually disolving the empire");
	Defeat_Additions D_CP_ww1Figure_Mehmed("Resad", "Mehmed II", 1844, 1918, "Turkey", "Caliph-Sultan", "Commitment to a Jihad across the empire, streching resources across all lands within the large ottoman state, depleting resources in the balkans and middle east, limiting offensive cabailites to assist allies");
	Defeat_Additions D_CP_ww1Figure_Mustafa("Mustafa", "Kemal-Atatürk", 1881, 1938, "Greece", "Field Officer", "let officer sentinment to turn prioirties to the Turkish state instaed of imperail possesions");

	//create base class pointers to derived class objcs
	// 
	//entente derived objs pointers
	WW1_Major_Figure* ptrPershing = &E_ww1Figure_Pershing;
	WW1_Major_Figure* ptrWilson = &E_ww1Figure_Wilson;
	WW1_Major_Figure* ptrKingG = &E_ww1Figure_King_G;
	WW1_Major_Figure* ptrLloyd = &E_ww1Figure_lloyd_g;
	WW1_Major_Figure* ptrRaymond = &E_ww1Figure_Raymond_P;
	WW1_Major_Figure* ptrPapa = &E_ww1Figure_Papa_J;
	WW1_Major_Figure* ptrVic = &E_ww1Figure_Victor;
	WW1_Major_Figure* ptrAnt = &E_ww1Figure_Antonio;
	WW1_Major_Figure* ptrRob = &E_ww1Figure_Robert_b;
	WW1_Major_Figure* ptrNich = &E_ww1Figure_Nicholas;
	WW1_Major_Figure* ptrAles = &E_ww1Figure_Alesei;
	//Central_Powers derived objects pointers
	WW1_Major_Figure* ptrKaiser = &CP_Kaiser;
	WW1_Major_Figure* ptrLud = &CP_ww1Figure_ludendorf;
	WW1_Major_Figure* ptrHind = &CP_ww1Figure_Hind;
	WW1_Major_Figure* ptrFranzF = &CP_ww1Figure_Franz_F;
	WW1_Major_Figure* ptrFranzJ = &CP_ww1Figure_Franz_J;
	WW1_Major_Figure* ptrMeh = &CP_ww1Figure_Mehmed;
	WW1_Major_Figure* ptrMust = &CP_ww1Figure_Mustafa;


	//create base class pointers to 2nd derived class objs Victory and defeat additoins 
	//VictoryAdditions derived objs pointers
	WW1_Major_Figure* ptrPershing_VA = &V_E_ww1Figure_Pershing;
	WW1_Major_Figure* ptrWilson_VA = &V_E_ww1Figure_Wilson;
	WW1_Major_Figure* ptrKingG_VA = &V_E_ww1Figure_King_G;
	WW1_Major_Figure* ptrLloyd_VA = &V_E_ww1Figure_lloyd_g;
	WW1_Major_Figure* ptrRaymond_VA = &V_E_ww1Figure_Raymond_P;
	WW1_Major_Figure* ptrPapa_VA = &V_E_ww1Figure_Papa_J;
	WW1_Major_Figure* ptrVic_VA = &V_E_ww1Figure_Victor;
	WW1_Major_Figure* ptrAnt_VA = &V_E_ww1Figure_Antonio;
	WW1_Major_Figure* ptrRob_VA = &V_E_ww1Figure_Robert_b;
	WW1_Major_Figure* ptrNich_VA = &V_E_ww1Figure_Nicholas;
	WW1_Major_Figure* ptrAles_VA = &V_E_ww1Figure_Alesei;
	//DefeatAdditions derived class obj pointers

	WW1_Major_Figure* ptrKaiser_DA = &D_CP_Kaiser;
	WW1_Major_Figure* ptrLud_DA = &D_CP_ww1Figure_ludendorf;
	WW1_Major_Figure* ptrHind_DA = &D_CP_ww1Figure_Hind;
	WW1_Major_Figure* ptrFranzF_DA = &D_CP_ww1Figure_Franz_F;
	WW1_Major_Figure* ptrFranzJ_DA = &D_CP_ww1Figure_Franz_J;
	WW1_Major_Figure* ptrMeh_DA = &D_CP_ww1Figure_Mehmed;
	WW1_Major_Figure* ptrMust_DA = &D_CP_ww1Figure_Mustafa;


	//ww1Vector(e Entente, C Central Powers.push_back(pointer->2nd level derived class objects (Entente and Central_Powers) add these pointers to the vector, ref pushback 668-671

	ww1VectorE.push_back(ptrPershing);
	ww1VectorE.push_back(ptrWilson);
	ww1VectorE.push_back(ptrKingG);
	ww1VectorE.push_back(ptrLloyd);
	ww1VectorE.push_back(ptrRaymond);
	ww1VectorE.push_back(ptrPapa);
	ww1VectorE.push_back(ptrVic);
	ww1VectorE.push_back(ptrAnt);
	ww1VectorE.push_back(ptrRob);
	ww1VectorE.push_back(ptrNich);
	ww1VectorC.push_back(ptrKaiser);
	ww1VectorE.push_back(ptrAles);
	ww1VectorC.push_back(ptrLud);
	ww1VectorC.push_back(ptrHind);
	ww1VectorC.push_back(ptrFranzF);
	ww1VectorC.push_back(ptrFranzJ);
	ww1VectorC.push_back(ptrMeh);
	ww1VectorC.push_back(ptrMust);


	//ww1Vector(E_VA Victory Additions, C_DA Defeat Additions).push_back(pointer->2nd level derived class objects (Entente and Central_Powers) add these pointers to the vector,
	ww1VectorE_VA.push_back(ptrPershing_VA);
	ww1VectorE_VA.push_back(ptrWilson_VA);
	ww1VectorE_VA.push_back(ptrKingG_VA);
	ww1VectorE_VA.push_back(ptrLloyd_VA);
	ww1VectorE_VA.push_back(ptrRaymond_VA);
	ww1VectorE_VA.push_back(ptrPapa_VA);
	ww1VectorE_VA.push_back(ptrVic_VA);
	ww1VectorE_VA.push_back(ptrAnt_VA);
	ww1VectorE_VA.push_back(ptrRob_VA);
	ww1VectorE_VA.push_back(ptrNich_VA);
	ww1VectorE_VA.push_back(ptrAles_VA);
	ww1VectorC_DA.push_back(ptrKaiser_DA);
	ww1VectorC_DA.push_back(ptrLud_DA);
	ww1VectorC_DA.push_back(ptrHind_DA);
	ww1VectorC_DA.push_back(ptrFranzF_DA);
	ww1VectorC_DA.push_back(ptrFranzJ_DA);
	ww1VectorC_DA.push_back(ptrMeh_DA);
	ww1VectorC_DA.push_back(ptrMust_DA);


	//intro of program Show user what it does
	cout << "**********************************************************************************************************"
		<< "\n			Welcome to Joe's WW1 Note Book\n"
		<< "		This program will help you take notes about historic figures from World War1\n"
		<< "**********************************************************************************************************";
	cout << "\n\n\n\n First let us see an overview all figures we have stored in the notebook.\n These are the notable figures from the war. You can see thier names, dates of brith/death, and country of origin";



	cout << "\n\n\n";

	//DemonstrateWW1_Major_Figure WW1_Major_Figures for user
	cout << "***** First let's look at the Base class members, containing a figure's Name, age, and country of origin...such as " << endl;

	DemonstrateWW1_Major_Figure(ww1Figure_Pershing);
	cout << "\n\n";
	DemonstrateWW1_Major_Figure(_Kaiser);
	cout << endl;
	cout << "\n\n";
	//demonstrate all base class objects
		cout << "\n To see a list of all figures within this class (baseclass WW1_Major_Figures) please enter 1:\n";
		cin >> seeAllBaseClass;
		if (seeAllBaseClass == 1) {
			DemonstrateWW1_Major_Figure(ww1Figure_Pershing);
			cout << "\n\n";

			DemonstrateWW1_Major_Figure(ww1Figure_Wilson);
			cout << "\n\n";

			DemonstrateWW1_Major_Figure(ww1Figure_King_G);
			cout << "\n\n";

			DemonstrateWW1_Major_Figure(ww1Figure_Raymond_P);
			cout << "\n\n";

			DemonstrateWW1_Major_Figure(ww1Figure_Papa_J);
			cout << "\n\n";

			DemonstrateWW1_Major_Figure(ww1Figure_Victor);
			cout << "\n\n";
			DemonstrateWW1_Major_Figure(ww1Figure_Antonio);
			cout << "\n\n";
			DemonstrateWW1_Major_Figure(ww1Figure_Robert_b);
			cout << "\n\n";
			DemonstrateWW1_Major_Figure(ww1Figure_Nicholas);
			cout << "\n\n";
			DemonstrateWW1_Major_Figure(ww1Figure_Alesei);
			cout << "\n\n";
			DemonstrateWW1_Major_Figure(_Kaiser);
			cout << "\n\n";
			DemonstrateWW1_Major_Figure(ww1Figure_ludendorf);
			cout << "\n\n";
			DemonstrateWW1_Major_Figure(ww1Figure_Hind);
			cout << "\n\n";
			DemonstrateWW1_Major_Figure(ww1Figure_Franz_F);
			cout << "\n\n";

			DemonstrateWW1_Major_Figure(ww1Figure_Franz_J);
			cout << "\n\n";

			DemonstrateWW1_Major_Figure(ww1Figure_Mehmed);
			cout << "\n\n";

			DemonstrateWW1_Major_Figure(ww1Figure_Mustafa);
			cout << "\n\n";
		}
		else cout << "\n\nok! Then let us continue";

		cout << "\n\n ***** Now that you have seen the base class, let us look at the two derived classes of Entente and Central Powers displaying what specific faction they served with. \nThese two classes are derived from main and allaign these figures to thier respective alliance\n";

		cout << "\n\nTo see these two please type 1 for Entente or 2 for Central Powers";
		cin >> seeDerivedClass;


	//loop derived classes Entente/Central_Powers based on user selection
	if (seeDerivedClass == 1) {
		//for loop to display vector WW1VectorE, applying function additional_note(overridden for dervided classes) on each object from derived class via all pointers in vector ww1VectorE(objects in derived class Entente)
		for (auto& ww1Ptr : ww1VectorE) {
			ww1Ptr->additional_note();
		}

		


		
	}
	else if(seeDerivedClass == 2) {
		for (auto& ww1Ptr : ww1VectorC) {//same for loop for for ww1VectorC (objects of derived class Central_Powers)
			ww1Ptr->additional_note();
		}
	}

	cout << "\n\n Great! Now let us looka the 2nd tier derived classes of VictoryAddtions(Of the Entente) and DefeatAdditions(Derived from Centeral_Powers).\n Please enter 1 for Vicotry Addtions, or 2 for DefeatAdditions";
	cin >> see2ndDerivedClass;


	if (see2ndDerivedClass == 1) {
		//for loop to display vector WW1VectorE, applying function additional_note(overridden for dervided classes) on each object from derived class via all pointers in vector ww1VectorE(objects in derived class Entente)
		for (auto& ww1Ptr : ww1VectorE_VA) {
			ww1Ptr->additional_note();
		}
	}
	else if (see2ndDerivedClass == 2) {
		for (auto& ww1Ptr : ww1VectorC_DA) {//same for loop for for ww1VectorC (objects of derived class Central_Powers)
			ww1Ptr->additional_note();
		}
	}

	//Enter user inputs to allow user to create thier own baseclass and derived objects 
	cout << "\n\n Now that you see all the built in objects, you can create one of your own! (enter 1 to start)";
	cin >> loopstart;
	while (loopstart != -10) {

		if (loopstart == 1) {
			userAddWW1FiguretoBaseClass(); 

			cout << " Would you like to continue? (1 for yes, -10 for no):\n ";
			cin >> loopstart;
			if (loopstart == -10)break;
		}
		else "";
		
		
		
	}

	
	
	//allow user to display classes within the notebook via baseclasspointer->derived class obj, loop through vector 
	cout << "\nAwesome! Now that you have added all those figures please select what you would like to see: (enter -1 to quit) " <<
		"\n 1. All Entente Figures" <<
		"\n 2. All Central_Powers Figures" <<
		"\n 3. All Victory Additions" <<
		"\n 4. All Defeat additions";
	
	cin >> buildStart;
	
	//while loop to allow user to see each vector 
	while (buildStart != -1) {

		if (buildStart == 1) {
			for (auto& ww1Ptr : ww1VectorE) {
				ww1Ptr->additional_note();
			}
			cout << "\nwould you like to see another? (or press -1 to quit)";
			cout << "\n 1. All Entente Figures" <<
				"\n 2. All Central_Powers Figures" <<
				"\n 3. All Victory Additions" <<
				"\n 4. All Defeat additions";
			cin >> buildStart;
			cin >> buildStart;
		}
		if (buildStart == 2) {
			for (auto& ww1Ptr : ww1VectorC) {
				ww1Ptr->additional_note();
			}
			cout << "\nwould you like to see another? (or press -1 to quit)";
			cout<<"\n 1. All Entente Figures" <<
				"\n 2. All Central_Powers Figures" <<
				"\n 3. All Victory Additions" <<
				"\n 4. All Defeat additions";
			cin >> buildStart;
		}

		else if (buildStart == 3) {
			for (auto& ww1Ptr : ww1VectorE_VA) {
				ww1Ptr->additional_note();
			}
			cout << "\nwould you like to see another? (or press -1 to quit)";
			cout << "\n 1. All Entente Figures" <<
				"\n 2. All Central_Powers Figures" <<
				"\n 3. All Victory Additions" <<
				"\n 4. All Defeat additions";
			cin >> buildStart;
			cin >> buildStart;
		}

		else if (buildStart == 4) {
			for (auto& ww1Ptr : ww1VectorC_DA) {
				ww1Ptr->additional_note();
			}
			cout << "\nwould you like to see another? (or press -1 to quit)";
			cout << "\n 1. All Entente Figures" <<
				"\n 2. All Central_Powers Figures" <<
				"\n 3. All Victory Additions" <<
				"\n 4. All Defeat additions";
			cin >> buildStart;
			cin >> buildStart;
		}

	if (buildStart == -1)break;
	}




	
	//endofprogram
	cout << "**********************************************************************************************************"
		<< "\n			Thank you for using Joe's WW1 Note Book\n"
		<< "				This program will now exit\n"
		<< "				Dont forget to view your notes\n"
		<< "**********************************************************************************************************";

	cout << "\nThank you! press enter to quit";
		cin >> buildStart;


		


	
}


	





//Joseph I Laible
// Professor Jonathan S. Weissman
// Cis 554 Object Oriented Programming in C++
// Syracuse University 
// text ref - C++ How to program 10th ed, Paul & Harvey Deitel 
//Final project
//3/14/2024
// This program can be used to help calculate account values based on fixed intrest rates 
// This is the header ".cpp" implemenation file  for class base class WW1_Major_Figure
#include "Title.h"

#include <iostream>
using std::cout;
using std::endl;

// default constructor
// initialize our data to something usefule
Title::Title()
	: title("Military rank, Political postions..etc"),  Organization ("Military,Party/nation,company...etc")
{
	// no body needed. everthing was done in the initialization list
}


// initialization constructor
// initialize our data to what the user requires
Title::Title( string firstName, string lastName, int born, int died, string nationality, string allegiance, string title, string Organization)
	: Allegiance(firstName, lastName, born, died,nationality, allegiance), title(title), Organization(Organization)
{
	// no body needed. everthing was done in the initialization list
}


Title::~Title()
{
	// nothing to do at this time
}


Victory_Additions V_E_ww1Figure_Pershing("John", "Pershing", 1860, 1948, "USA", "Entente", "VictoryAdditions");
Victory_Additions V_E_ww1Figure_Wilson("Woodrow", "Wilson", 1856, 1924, "USA", "Entente", "VictoryAdditions");
Victory_Additions V_E_ww1Figure_King_G("George", "Windsor", 1865, 1936, "England", "Entente", "VictoryAdditions");
Victory_Additions V_E_ww1Figure_lloyd_g("David-Lloyd", "George V", 1863, 1945, "England", "Entente", "VictoryAdditions");
Victory_Additions V_E_ww1Figure_Raymond_P("Raymond", "Poincare", 1860, 1934, "France", "Entente", "VictoryAdditions");
Victory_Additions V_E_ww1Figure_Papa_J("Joseph 'Papa'", "Joffre", 1852, 1931, "France", "Entente", "VictoryAdditions");
Victory_Additions V_E_ww1Figure_Victor("Victor", "Emmanuel III", 1869, 1947, "Italy", "Entente", "VictoryAdditions");
Victory_Additions V_E_ww1Figure_Antonio("Antonio", "Salandra", 1853, 1931, "Italy", "Entente", "VictoryAdditions");
Victory_Additions V_E_ww1Figure_Robert_b("Robert", "Borden", 1854, 1937, "Canada", "Entente", "VictoryAdditions");
Victory_Additions V_E_ww1Figure_Nicholas("Nicholas", "Alexander II", 1868, 1918, "Russia", "Entente", "VictoryAdditions");
Victory_Additions V_E_ww1Figure_Alesei("Aleksei", "Brusiov", 1853, 1926, "Russia", "Entente", "VictoryAdditions");
// Brant Wagner 
// CSC 275 - C++ Programming II
/*
Project Description:

Create a base class of a character.You need 2 attributes, methods to access and update these attributes, 2 constructors,
and a printInfo() method that prints the attributes.For the update of the attributes, one must have verification
(for example, health cannot be a negative number).

Next, create 2 classes that inherit from the character class.  (for example, zombie and goblin).
Each class must have 2 additional attributes, methods to access and update these attributes, 2 constructors, and a
printInfo() method that prints the attributes.The print method should use the character base method.One of the constructors
should use the base class constructor to set these values as well.

Next, you need to have an additional print method using polymorphism.The second print method would only print a subset
of the attributes.Use a boolean value as the parameter that determines which printInfo() method is called.

Finally, write a Main() program that creates instances of all 3 classes and calls both print methods.*/



#include "stdafx.h"
#include "iostream"
#include "string"
#include "Characters.h"

using namespace std;

void main()
{
	string pause;
	

	Character basePlayer; // Constructs a Character
	basePlayer.printInfo(); // Default Print Info that displays all attributes
	cout << endl;
	Character basePlayerWithAttributes = Character("Base", 1000); // Constructs an object and sets its attributes 
	basePlayerWithAttributes.printInfo(); // Default print info that 

	cout << endl;
	Priest baseKnight; // Constructs a Knight using Character as Parent
	baseKnight.printInfo(); // Print Info from Knight
	cout << endl;
	Priest baseKnightWithAttributes = Priest("Brant the Priest", 1150, 1500, "Heal"); // Constructs an object and sets its attributes to the passed in values.
	baseKnightWithAttributes.printInfo(); // Default print info 

	cout << endl;
	Knight baseKnigh; // Constructs a Knigh using Character as Parent
	baseKnigh.printInfo(); // Default Print Info from Knight
	cout << endl;
	Knight baseKnighWithAttributes = Knight("Clara Anne the Knight", 1250, 750, "Battle Axe"); // Constructs an object and sets its attributes to the passed in values.
	baseKnighWithAttributes.printInfo(); // Default Print Info 
	cout << endl;

	Priest staticPolyPriest = Priest("Brant the Priest", 1100, 1500, "Revive"); // Constructs an object sets its attributes to the passed in values.
	staticPolyPriest.printInfo(false); // New Print Info function that accepts a boolean value
	cout << endl;
	Knight staticPolyKnight = Knight("Clara Anne the Knight", 1500, 500, "Great Sword"); // Constructs an object and sets its attributes to the passed in values.
	staticPolyKnight.printInfo(true); // New Print Info function that accepts a boolean value 
	cout << endl;

	cin >> pause; // This will pause the system, so I/you can view the output.
}


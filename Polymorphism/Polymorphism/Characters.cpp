// Brant Wagner 
// CSC 275 - C++ Programming II
// This file contains all function bodies for characters.h
#include "stdafx.h"
#include "iostream"
#include "Characters.h"
#include "string"


using namespace std;


Character::Character() // default constructor body
{
}
Character::Character(string baseName, int baseHealth) //constructor body
{
	name = baseName; // set name 
	health = baseHealth; // set health 
}
string Character::getName() //function body
{
	return name; 
}
int Character::getHealth() //function body
{
	return health; 
}
void Character::setName(string baseName) //function body, accepts a string
{
	name = baseName; // set name to the value passed in
}
void Character::setHealth(int baseHealth) // setHealth function body, accepts an int
{
	if (baseHealth <= 0) // if baseHealth is less than or equal to 0
	{
		cout << "Invalid Health Value Setting Health to 1 \n"; // tell user the value is not acceptable
		health = 1; // sets the health attribute value to 1
	}
	else // if baseHealth is not less than or equal to 0
	{
		health = baseHealth; // set health to the value passed in
	}
}
void Character::printInfo() // printInfo function 
{
	cout << "Name: " << name << endl; // print attribute of name
	cout << "Health: " << health << endl; // print attribute of health
}



Priest::Priest() // default constructor for Priest
{
}
Priest::Priest(string PriestName, int PriestHealth, int PriestMana, string priestSpell) // constructor for Priest that takes in 4 arguments
{
	name = PriestName; // set parent constructor value 
	health = PriestHealth; // set parent constructor value 
	mana = PriestMana; // set attribute for mana to value passed in 
	spell = priestSpell; // set attribute spell to value passed in 
}
int Priest::getMana() // function body 
{
	return mana; // returns the value stored 
}
string Priest::getSpell() // function body 
{
	return spell; // returns the value stored 
}
void Priest::setMana(int PriestMana) // function body 
{
	mana = PriestMana; // set mana attribute to the value passed in 
}
void Priest::setSpell(string PriestSpell) // function body 
{
	spell = PriestSpell; // set spell attribute to the value passed in 
}
void Priest::printInfo() // function body 
{
	cout << "Name: " << name << endl; // display the attribute stored in name
	cout << "Health: " << health << endl; // display the attribute stored in health
	cout << "Mana: " << mana << endl; // display the attribute stored in mana
	cout << "Spell: " << spell << endl; // display the attribute stored in spell
}
void Priest::printInfo(bool print) // printInfo function body
{
	Character::printInfo(); // access the printInfo function from the parent class
	if (print) // if the passed in boolean is true
	{
		cout << "Mana: " << mana << endl; // display the attribute stored in mana
		cout << "Spell: " << spell << endl; // display the attribute stored in spell
	}
}



Knight::Knight() // default constructor for Knight
{
}
Knight::Knight(string KnightName, int KnightHealth, int KnightStamina, string KnightWeapon) // constructor for Knight that takes in 4 arguments
{
	name = KnightName; // set parent constructor value
	health = KnightHealth; // set parent constructor value 
	stamina = KnightStamina; // set attribute for mana to value passed in 
	weapon = KnightWeapon; // set attribute spell to value passed in 
}
int Knight::getStamina() // function body 
{
	return stamina; // returns the value stored 
}
string Knight::getWeapon() // function body 
{
	return weapon; // returns the value stored 
}
void Knight::setStamina(int KnightStamina) // function body 
{
	stamina = KnightStamina; // set stamina attribute to the value passed in 
}
void Knight::setWeapon(string KnightWeapon) // function body
{
	weapon = KnightWeapon; // set weapon attribute to the value passed in 
}
void Knight::printInfo()
{
	cout << "Name: " << name << endl; // display the attribute stored in name
	cout << "Health: " << health << endl; // display the attribute stored in health
	cout << "Stamina: " << stamina << endl; // display the attribute stored in mana
	cout << "Weapon: " << weapon << endl; // display the attribute stored in spell
}
void Knight::printInfo(bool print) // printInfo function body
{
	Character::printInfo(); // access the printInfo function from the parent class
	if (print) // if the passed in boolean is true
	{
		cout << "Stamina: " << stamina << endl; // display the attribute stored in mana
		cout << "Weapon: " << weapon << endl; // display the attribute stored in spell
	}
}
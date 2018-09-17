// Brant Wagner 
// CSC 275 - C++ Programming II
#ifndef CHARACTERS_H
#define CHARACTERS_H

#include "string"

using namespace std;

class Character
{
public:
	Character(); // default constructor
	Character(string baseName, int baseHealth); // constructor
	string getName(); // declare a function that returns a string
	int getHealth(); // declare a function called that returns an int
	void setName(string baseName); // declare a function that returns nothing and takes a string as the parameter
	void setHealth(int baseHealth); // declare a function called returns nothing and takes an int as the parameter
	void printInfo(); // declare a function called printInfo that returns nothing
protected:
	string name = "No Name"; // attribute of class Character called name, set default to "No Name"
	int health = 1; // attribute of class Character called health, set default to "1"
};


class Priest : public Character //new class called Priest that uses Character as its parent
{
public:
	Priest(); // default constructor for child class called Priest
	Priest(string PriestName, int PriestHealth, int PriestMana, string PriestSpell); //constructor for child class Priest
	int getMana(); // declare a function that returns an int
	string getSpell(); // declare a function that returns an string
	void setMana(int PriestMana); //returns nothing and accepts an int as the parameter
	void setSpell(string PriestSpell); //returns nothing and accepts a string as the parameter
	void printInfo(); // delcare a function called printInfo that returns nothing
	void printInfo(bool print); //returns nothing and accepts a boolean as the parameter
private:
	int mana = 0; // attribute of class Priest called mana, set default to 0
	string spell = "No Spell"; // attribute of class Priest, set default to "No Spell"
};

class Knight : public Character // Create a new class called Knight that uses Character as its parent
{
public:
	Knight(); // default constructor for child class called Knight
	Knight(string KnightName, int KnightHealth, int KnightStamina, string KnightWeapon); //constructor for child class Knight
	int getStamina(); // declare a function that returns an int
	string getWeapon(); // declare a function that returns a string
	void setStamina(int KnightWeapon); // declare a function that returns nothing and accepts an int as the parameter
	void setWeapon(string KnightWeapon); // declare a function that returns nothing and accepts a string as the parameter
	void printInfo(); // declare a function that returns nothing
	void printInfo(bool print); // declare a function that returns nothing and accepts a boolean as the parameter
private:
	int stamina = 0; // attribute of class Knight, set default to 0
	string weapon = "No Weapon"; // attribute of class Knight, set default to "No Weapon"
};

#endif

#include "Pig.h"
using namespace std;

//DEFAULT CONSTRUCTOR
Pig::Pig(){
	cout << "Invoking Pig Constructor\n";
	setWeight(0);
}

//CLIENT CONSTRUCTOR
Pig::Pig(int w) : Mammal(w){
	cout << "Invoking Client Pig Constructor\n";
	Pig::setWeight(w);
}

//DESTRUCTOR
Pig::~Pig(){
}

//SPEAK METHOD THAT OVERRIDES THE MAMMAL SPEAK METHOD
void Pig::speak(){
	Mammal::speak();
	cout << "\"Oink!\"\n";
}

//GET AND SET METHODS THAT ACCESS ANIMAL NAME
string Pig::getName(){
	return pigName;
}

void Pig::setName(string name){
	pigName = name;
}


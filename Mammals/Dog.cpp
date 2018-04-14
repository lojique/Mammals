#include "Dog.h"
using namespace std;

//DEFAULT CONSTRUCTOR
Dog::Dog(){
	cout << "Invoking Dog Constructor\n";
	setWeight(0);
}

//CLIENT CONSTRUCTOR
Dog::Dog(int w) :Mammal(w){
	cout << "Invoking Client Dog Constructor\n";
	Dog::setWeight(w);
}

//DESTRUCTOR
Dog::~Dog(){}

//SPEAK METHOD THAT OVERRIDES THE MAMMAL SPEAK METHOD
void Dog::speak(){
	Mammal::speak();
	cout << "\"Woof!\"\n";
}

//GET AND SET METHODS THAT ACCESS ANIMAL NAME
string Dog::getName(){
	return dogName;
}

void Dog::setName(string name){
	dogName = name;
}
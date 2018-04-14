#include "Cat.h"
using namespace std;

//DEFAULT CONSTRUCTOR
Cat::Cat(){
	cout << "Invoking Cat Constructor\n";
	setWeight(0);
}

//CLIENT CONSTRUCTOR
Cat::Cat(int w) : Mammal(w){
	cout << "Invoking Client Cat Constructor\n";
	Cat::setWeight(w);
}

//DESTRUCTOR
Cat::~Cat(){}

//SPEAK METHOD THAT OVERRIDES THE MAMMAL SPEAK METHOD
void Cat::speak(){
	Mammal::speak();
	cout << "\"Meow!\"\n";
}

//GET AND SET METHODS THAT ACCESS ANIMAL NAME
string Cat::getName(){
	//Mammal::getName();
	return catName;
}

void Cat::setName(string name){
	Mammal::setName(name);
	catName = name;
}


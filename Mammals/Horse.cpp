#include "Horse.h"
using namespace std;

//DEFAULT CONSTRUCTOR
Horse::Horse(){
	cout << "Invoking Horse Constructor\n";
	setWeight(0);
}

//CLIENT CONSTRUCTOR
Horse::Horse(int w):Mammal(w){
	cout << "Invoking Client Horse Constructor\n";
	Horse::setWeight(w);
}

//DESTRUCTOR
Horse::~Horse(){}

//SPEAK METHOD THAT OVERRIDES THE MAMMAL SPEAK METHOD
void Horse::speak(){
	Mammal::speak();
	cout << "\"I'm Mr. Ed!\"\n";
}

//GET AND SET METHODS THAT ACCESS ANIMAL NAME
string Horse::getName(){
	Mammal::getName(); //overriden method
	return horseName;
}

void Horse::setName(string name){
	horseName = name;
}
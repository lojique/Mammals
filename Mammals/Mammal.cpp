#include "Mammal.h"
using namespace std;

//DEFAULT CONSTRUCTOR
Mammal::Mammal(){
	cout << "\nInvoking Mammal Default Constructor\n";
	setWeight(0); //default weight
}
		
//CLIENT CONSTRUCTOR
Mammal::Mammal(int w){
	cout << "Invoking Mammal Client Constructor\n";
	setWeight(w); //sets random weight
}

//DESTRUCTOR
Mammal::~Mammal(){}

//METHOD SPEAK THAT OUTPUTS A MESSAGE WHEN CALLED
void Mammal::speak(){
	cout << "\nMammal is speaking\n";
}

//GET AND SET METHODS ALLOW WEIGHT TO BE ACCESSED
int Mammal::getWeight(){
	return mammalWeight;
}

void Mammal::setWeight(int n){
	mammalWeight = n;
}

//GET AND SET METHODS ALLOW NAME TO BE ACCESSED
string Mammal::getName(){
	return mammalName;
}

void Mammal::setName(string name){
	mammalName = name;
}
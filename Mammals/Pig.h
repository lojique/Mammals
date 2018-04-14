#pragma once
#include "Mammal.h"
#include <iostream>
#include <string>

class Pig : public Mammal{

public:
	Pig(); //default constructor
	Pig(int); //constructor that takes random weight
	~Pig(); //destructor
	void speak() override; //method speak overrides the Mammal Speak method
	std::string getName() override;	//accesses name of the animal
	void setName(std::string); //sets the name of the animal

private:
	std::string pigName; //data member to hold the animal's name
};
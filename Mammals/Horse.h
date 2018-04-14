#pragma once
#include "Mammal.h"
#include <iostream>
#include <string>

class Horse : public Mammal{

public:
	Horse(); //default constructor
	Horse(int); //constructor that takes random weight
	~Horse(); //destructor
	void speak() override; //method speak overrides the Mammal Speak method
	std::string getName() override;	//accesses name of the animal
	void setName(std::string); //sets the name of the animal

private:
	std::string horseName; 	//data member to hold the animal's name
};
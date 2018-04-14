#pragma once
#include "Mammal.h"
#include <iostream>
#include <string>

class Dog : public Mammal{

public:
	Dog(); //default constructor
	Dog(int); //constructor that takes random weight
	~Dog(); //destructor
	void speak() override; //method speak overrides the Mammal Speak method
	std::string getName() override;	//accesses name of the animal
	void setName(std::string); //sets the name of the animal

private:
	std::string dogName; //data member to hold the animal's name
};
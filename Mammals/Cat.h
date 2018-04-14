#pragma once
#include "Mammal.h"
#include <iostream>
#include <string>

class Cat : public Mammal{

public:
	Cat(); //default constructor
	Cat(int); //constructor that takes random weight
	~Cat(); //destructor
	void speak() override; //method speak overrides the Mammal Speak method
	std::string getName() override;	//accesses name of the animal
	void setName(std::string); //sets the name of the animal

private:
	std::string catName; //data member to hold the animal's name
};
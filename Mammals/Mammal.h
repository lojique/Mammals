#pragma once
#include <iostream>
#include <string>

class Mammal{

public:
	Mammal(); //default constructor
	Mammal(int); //contructor that gets random weight
	~Mammal(); //destructor
	virtual void speak(); //default speak method that will be overriden
	int getWeight(); //accesses animal weight
	void setWeight(int); //sets weight of the animal
	virtual std::string getName(); //acesses name of the animal
	void setName(std::string); //sets name of the animal

private:
	int mammalWeight;
	std::string  mammalName;
};
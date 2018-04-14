//<Mammals> -- This lab’s goal is to give some practice using inheritance, virtual functions, pointers, dynamic memory allocation, and random numbers. 
//CSIS 112-<002>
//<Sources if necessary>

//Include statements
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <array>
#include "Mammal.h"
#include "Dog.h"
#include "Cat.h"
#include "Horse.h"
#include "Pig.h"

using namespace std;

//Global declarations: Constants and type definitions only -- no variables

//Function prototypes

int main()
{
	//In cout statement below substitute your name and lab number
	cout << "Adam Kalu -- Lab 7" << endl << endl;

	//Variable declarations
	int weight;
	string animalName;
	int x{ 0 };
	int choice{ 0 };
		
	//Program logic
	array <Mammal *, 5> mammal; //array named mammal that takes 5 pointer objects 
	do{
		//MENU
		cout << "\nMake a selection\n\n";
		cout << "1 - Dog\n";
		cout << "2 - Cat\n";
		cout << "3 - Horse\n";
		cout << "4 - Pig\n";
		cout << "Selection: > ";

		cin >> choice;
		
		switch (choice)
		{
		case 1:{
			srand(static_cast<unsigned int>(time(NULL))); //INITIALIZES RANDOM SEED
			weight = 1 + rand() % 150; 	//GENERATE NUMBER BETWEEN 0 & 150
			Dog *d = new Dog(weight); //DYNAMICALLY CREATES DOG OBJECT

			cout << "Enter name for your animal: ";
			cin >> animalName; //retrieves name
			d->setName(animalName); //object d points to the setName function in Dog and places animalName in it
			mammal[x] = d; //object stored in mammal array
			x++; //increases counter x for while loop
		}break;

		case 2:{
			srand(static_cast<unsigned int>(time(NULL))); //INITIALIZES RANDOM SEED
			weight = 1 + rand() % 150; //GENERATE NUMBER BETWEEN 0 & 150
			Cat *c = new Cat(weight); //DYNAMICALLY CREATES CAT OBJECT

			cout << "Enter name for your animal: ";
			cin >> animalName;
			c->setName(animalName);//object c points to the setName function in Cat and places animalName in it
			mammal[x] = c;//object stored in mammal array
			x++;//increases counter x for while loop
		}break;

		case 3:{
			srand(static_cast<unsigned int>(time(NULL))); //INITIALIZES RANDOM SEED
			weight = 1 + rand() % 150; //GENERATE NUMBER BETWEEN 0 & 150
			Horse *h = new Horse(weight); //DYNAMICALLY CREATES HORSE OBJECT
		
			cout << "Enter name for your animal: ";
			cin >> animalName;
			h->setName(animalName); //object h points to the setName function in Horse and places animalName in it
			mammal[x] = h;//object stored in mammal array
			x++;//increases counter x for while loop
		}break;

		case 4:{
			srand(static_cast<unsigned int>(time(NULL))); //INITIALIZES RANDOM SEED
			weight = 1 + rand() % 150; 	//GENERATE NUMBER BETWEEN 0 & 150
			Pig *p = new Pig(weight); //DYNAMICALLY CREATES PIG OBJECT

			cout << "Enter name for your animal: ";
			cin >> animalName; //retrieves name
			p->setName(animalName); //object p points to the setName function in Pig and places animalName in it 
			mammal[x] = p;//object stored in mammal array
			x++;//increases counter x for while loop
		}break;

		default:
			cout << "\nInvalid choice: try again.\n\n";
			break;
		}
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while(x < 5); //ENDS SWITCH CASE
	
	//prints the 5 animals(name, weight, speak) in order.
	for (int i = 0; i < 5; i++){
		cout << "\nName: " << mammal[i]->getName();
		cout << "\nWeight: " << mammal[i]->getWeight() << "lbs";
		mammal[i]->speak();
	}//ENDS FOR LOOP

//Closing program statements
	system("pause");
	return 0;

}//ENDS MAIN
//Function definitions


#pragma once
#include "Animal.h"
#include<iostream>
using namespace std;
class Elephant : public Animal
{
public:

	void makeSound() override
	{
		cout << "\n\nElephant's sound: Snorting....";
	}

};


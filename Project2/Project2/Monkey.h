#pragma once
#include "Animal.h"
#include<iostream>
using namespace std;
class Monkey : public Animal
{

public:

	void makeSound() override
	{
		cout << "\n\nMonkey's Sound: oo ah ah";
	}

};


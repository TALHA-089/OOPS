#pragma once
#include "Animal.h"
#include<iostream>
using namespace std;
class Bird : public Animal
{
public:

	void makeSound() override
	{
		cout << "\n\nBird's sound: Chirp Chirp!!!";
	}
};


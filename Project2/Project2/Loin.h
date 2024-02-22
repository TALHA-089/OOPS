#pragma once
#include "Animal.h"
#include<iostream>
using namespace std;
class Loin :public Animal
{
public:

	void makeSound() override
	{
		cout << "\n\nLoin's Sound: Rawr Rawr";
	}


};


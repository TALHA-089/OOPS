#include "Animal.h"
#include "Loin.h"
#include "Elephant.h"
#include "Monkey.h"
#include "Bird.h"
#include<iostream>
using namespace std;

void HearSound(Animal& animal)
{
	animal.makeSound();
}


int main()
{
	int Choice = 0;
	Loin loin;
	Elephant elephant;
	Monkey monkey;
	Bird bird;

	loin.makeSound();
	elephant.makeSound();
	monkey.makeSound();
	bird.makeSound();

	cout << "\n\n--------Hear Sound Menu---------\n\n";
	cout << "1.Loin";
	cout << "\n\n2.Elephant";
	cout << "\n\n3.Monkey";
	cout << "\n\n4.Bird";
	cout << "\n\nEnter your choice: ";
	cin >> Choice;

	if (Choice == 1)
	{
		Animal& myAnimal = loin;
		HearSound(myAnimal);
	}
	else if (Choice == 2)
	{
		Animal& myAnimal = elephant;
		HearSound(myAnimal);
	}
	else if (Choice == 3)
	{
		Animal& myAnimal = monkey;
		HearSound(myAnimal);
	}
	else if (Choice == 4)
	{
		Animal& myAnimal = bird;
		HearSound(myAnimal);
	}

	cout << endl << endl;
	system("pause>0");
	return 0;
}
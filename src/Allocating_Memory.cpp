//============================================================================
// Name        : Allocating_Memory.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Animals.h"

using namespace std;

int main()
    {

    Animals *pAnimal = new Animals; //creat 1 animal
    delete pAnimal;	// delete 1 animal

    Animals *pAnimals = new Animals[10]; // 10 animals created

    pAnimals[5].setName("Poop"); //call 6th Animal, set name
    pAnimals[5].setColor("Brown"); //call 6th Animal, set color
    pAnimals[5].speak(); //call 6th Animal, speak

    delete[] pAnimals;	// 10 animals deleted


    char letters = 'a';	//create char 'a'
    letters++;//char is like ints and you can do math with them. so now 'letters' = b
    string callOut(5, letters);	//create a sting w/ 5 characters in it, and that character is 'letters'
    cout << callOut << endl;	//so 'bbbbb' is what is outputed


    char *pMem = new char[50];

    delete pMem;

    return 0;
    }

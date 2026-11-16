#include "Survivor.h"
#include <iostream>
//#include <random>

using namespace std;



Survivor::Survivor(){

        this->stats = rand() % 100 + 1;;
        this->maxHealth = 10;
        this->name = name;
        this->id = id;

}

Survivor::~Survivor(){

    
}

int Survivor::getStats(){
    cout << stats;
    return stats;
}

string Survivor::getName(){
    return name;
}
    
void Survivor::testing(){
cout << "\nSurvivor name: " << name;
cout << "\nSurvivor skill: " << stats;
}



//Survivor(string id = "*", string name = "empty space");


string getWeapon();

string getId();


void Survivor::setName(){
    cout << "input your survivors new name: ";
    cin >> name;

}


bool hasWeapon();
bool isAlive(); //will check current health, if its below zero returns false and deletes the survivor

void setId();


void setStats();
void setHealth();
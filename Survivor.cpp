#include "Survivor.h"
#include <iostream>
//#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;



Survivor::Survivor(){

        this->stats = rand() % 100 + 1;
        this->maxHealth = rand() % 10 + 10;
        this->name = name;
        this->id = id;
        this->currentHealth = this->maxHealth;

}

Survivor::~Survivor(){

    
}


int Survivor::getStats(){
    cout << "Survivor max Health: " << maxHealth << "\n";
    cout << "Survivor current Health: " << currentHealth << "\n";

    cout << "Survivor skill: ";

    return stats;
}

string Survivor::getName(){
    cout << "Survivor name: ";
    return name;
}
    
void Survivor::testing(){
cout << "\nSurvivor name: " << name;
cout << "\nSurvivor skill: " << stats;
cout << "\nSurvivor max Health: " << maxHealth;
}
void Survivor::setName(){
    cout << "input your survivors new name: ";
    cin >> name;

}

void Survivor::healHealth(){
    if(currentHealth < maxHealth){
    currentHealth = currentHealth + 1; 
    cout << currentHealth << "\n";
    } else { 

        cout << "health is already full!\n";
    }

}
void Survivor::removeHealth(){
    if(currentHealth > 0){
    currentHealth = currentHealth - 1; 
    cout << currentHealth << "\n";
    } else { 
        cout << "HE DEAD!!!";

    }

}

bool Survivor::isAlive(){
    if (currentHealth > 0){
        return true;
    }else{
        cout << "Dude is dead";

        return false;
    }

}//will check current health, if its below zero returns false and deletes the survivor


//Survivor(string id = "*", string name = "empty space");


string getWeapon();

string getId();





bool hasWeapon();

void setId();


void setStats();
void setHealth();
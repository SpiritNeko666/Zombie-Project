
#include "Camp.h"
//#include "Survivor.h"
#include <iostream>
using namespace std;

Camp::Camp(){
   this->arraySize = 4;
    this->numberOfSurvivors = 0;
    this->survivors = new Survivor*[4];




}
Camp::~Camp(){

}


bool Camp::addSurvivor(Survivor *survivor){
    if(this -> numberOfSurvivors >= this ->arraySize) {
        return false;
        
    }
    
        
    for (int i = 0; i < numberOfSurvivors; i++){
        if(survivors[i]->getName() == survivor->getName()){
            cout << "That survivor is already in the camp\n";
            return false;
        }
    }
    this->numberOfSurvivors += 1;
    cout << "added survivor\n";
   // cout << "\n" << numberOfSurvivors;
    survivors[numberOfSurvivors - 1] = survivor;


    return true;
}


void Camp::removeSurvivor(string id){
    this->numberOfSurvivors -= 1;


}
bool Camp::hasSurvivor(string id){
    return false;
}

void Camp::getSurvivor(string id){

    cout << "What survivor will you use?: ";
    cin >> id;
    for (int i = 0; i < numberOfSurvivors; i++){
        if(survivors[i]->getName() == id){
            cout << "Found survivor: " << survivors[i]->getName() << "\n";
            survivors[i]->getStats();
            return;
        }
    }
    cout << "Survivor not found\n"; //vibe coded it just gave me this automaticly and i dont know how to turn it off




};

void Camp::printSurvivors(){
    cout << "Survivors in camp: \n";
    for (int i = 0; i < numberOfSurvivors; i++){
        cout << survivors[i]->getName() << "\n";
        cout << survivors[i]->getStats() << "\n";

        cout << "\n";
    }
    cout << "Total survivors in camp: " << numberOfSurvivors << "\n";
}
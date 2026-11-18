
#include "Camp.h"
//#include "Survivor.h"
#include <iostream>
using namespace std;

Camp::Camp(){
   this->arraySize = 4;
    this->numberOfSurvivors = 0;
    this->survivors = new Survivor[4];




}
Camp::~Camp(){

}


bool Camp::addSurvivor(Survivor survivor){
    if(this -> numberOfSurvivors >= this ->arraySize) {
        return false;
        
    }
    //this->survivors(this->numberOfSurvivors) = survivor;
    this->numberOfSurvivors += 1;
    cout << "added survivor";
    cout << "\n" << numberOfSurvivors;
    return true;
}


void Camp::removeSurvivor(string id){
    this->numberOfSurvivors -= 1;


}
bool Camp::hasSurvivor(string id){
    return false;
}

void Camp::printSurvivors(){
    cout << "Survivors in camp: \n";
    cout << survivors[0].getName();
    for (int i = 0; i < arraySize; i++){
        cout << survivors[i].getName();
        cout << "loop";
    }
}
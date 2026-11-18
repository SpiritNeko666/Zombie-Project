//holds the amount of supplies, survivors and weapons. stores each individual survivors info to be pulled out later for the player
//if there is time might create defenses and simulate a zombie hoard attacking
//will simulate if there is enough supplies for the survivors
#include "Survivor.h"
#include <iostream>
using namespace std;
#ifndef CAMP_H
#define CAMP_H

class Camp{

    private:
        Survivor*survivors;
        int arraySize;
        int numberOfSurvivors;
   //     int survivors;

    public:
        bool addSurvivor(Survivor survivor);
        void removeSurvivor(string id);
        bool hasSurvivor(string id);
        void printSurvivors();
        Camp();
        ~Camp();



};
#endif
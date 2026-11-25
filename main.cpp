//#include "Survivor.h"
#include "Camp.h"

#include <cstdlib>
#include <ctime>

#include <iostream>

using namespace std;



int main(){
    srand(static_cast<unsigned int>(time(0)));

    Survivor testSurvivor;
    Survivor testSurvivor2;

    Camp survivorCamp;
    
    testSurvivor.setName();
    survivorCamp.addSurvivor(&testSurvivor);

   // testSurvivor.getStats();
   // testSurvivor.getName();

    testSurvivor2.setName();
   survivorCamp.addSurvivor(&testSurvivor2);

   // testSurvivor2.getStats();
   // testSurvivor2.getName();

   survivorCamp.printSurvivors();

    testSurvivor.removeHealth();



    testSurvivor.healHealth();
    testSurvivor.isAlive();


   


    survivorCamp.getSurvivor("");

    return 0;
}
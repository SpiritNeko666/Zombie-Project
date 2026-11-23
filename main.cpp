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
   // testSurvivor.getStats();
   // testSurvivor.getName();

    testSurvivor2.setName();
   // testSurvivor2.getStats();
   // testSurvivor2.getName();
    testSurvivor.removeHealth();
    testSurvivor.healHealth();
    testSurvivor.isAlive();
    
   survivorCamp.addSurvivor(testSurvivor);
   survivorCamp.addSurvivor(testSurvivor2);

   survivorCamp.printSurvivors();
    return 0;
}
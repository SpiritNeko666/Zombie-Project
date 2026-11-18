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
    testSurvivor.getStats();

    testSurvivor2.setName();
    testSurvivor2.getStats();

    testSurvivor.testing();
    testSurvivor2.testing();
    
    survivorCamp.addSurvivor(testSurvivor2);
    survivorCamp.printSurvivors();
    return 0;
}
#include "Survivor.h"
#include <cstdlib>
#include <ctime>

#include <iostream>

using namespace std;



int main(){
   
    Survivor testSurvivor;
    Survivor testSurvivor2;

    testSurvivor.setName();
    testSurvivor.getStats();

    testSurvivor2.setName();
    testSurvivor2.getStats();

    testSurvivor.testing();
    testSurvivor2.testing();

    return 0;
}
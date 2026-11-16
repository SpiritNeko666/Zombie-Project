//Creates a survivor, there stats such as hp skill and speed and if there is time the name of their weapon they use if weapon.h is properly implemenet
#ifndef SURVIVOR_H
#define SUVIVOR_H
#include <iostream>
using namespace std;

class Survivor{

    private:
        int stats;
        int maxHealth;
        string name;
        string id;

    public:
        Survivor();
        ~Survivor();

       //Survivor(string id = "*", string name = "empty space");


        string getWeapon();
        int getStats();

        string getId();
        string getName();
        void testing();

        bool hasWeapon();
        bool isAlive();


        void setId();
        void setName();
        void setStats();
        
        void setHealth();
        void setCurrentHealth();

};
#endif
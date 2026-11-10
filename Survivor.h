//Creates a survivor, there stats such as hp skill and speed and if there is time the name of their weapon they use if weapon.h is properly implemenet
#ifndef SURVIVOR_H
#define SUVIVOR_H


class Survivor{

    private:
        int stats;
        int maxHealth;
        string name;
        string id;

    public:
        Survivor();
        ~Survivor();

        Survivor(string id = "*", string name = "empty space");


        string getWeapon();
        void getStats();

        string getId();
        string getName();

        bool hasWeapon();
        bool isAlive();

        void setId();
        void setName();
        void setStats();
        void setHealth();


};
#endif
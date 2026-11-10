//all the types of weapons a survivor can use and the different things each of them does, example a base ball bat is a meele weapon and a gun shoots from a distance. 
#ifndef WEAPON_H
#define WEAPON_H
using namespace std;
class Weapon{

    private:
        string name;
        int id;

    public:
        int getID();
        string getName();
        
}



#endif
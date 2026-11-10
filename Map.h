//creates and draws the map for player. will all spawn in zombies and supplies to loot
#include <iostream>
#include "Player.h"


#ifndef MAP_H
#define MAP_H

class Player;
class Map{
    private:

    Player * player;

    int width;
    int height;
    char ** map;

    public:

        Map(int x, int y,Player*player);
        ~Map();
        void draw();
        bool canMove(int x, int y);    
};
#endif
//player file for moving around map and collecting supplies. 
//will take the stats of a picked survivor as the stats for the player so must be connected to camp to check what survivors are avaible and survivor to check the survivors info
#ifndef PLAYER_H
#define PLAYER_H


class Map;
class Player{
    private:
        int x;
        int y;
        Map*map;

    public:

        Player();
        ~Player();
        int getx();
        int gety();
        bool move(char direction, Map*map);
    
};

#endif
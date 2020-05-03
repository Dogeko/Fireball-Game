#ifndef GAME_H
#define GAME_H


#include "Player.h"
#include "PlayerFactory.h"
#include "Results.h"

#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

class Game
{
private:
//    Human human;
//    Bot* bot;
    Results score;
    Player* player1;
    Player* player2;
    Player* winner;
public:
    void play();
    Player* logic(Player* player1, Player* player2); //lawrence's sick ass placeholder game mechanicssssss
};

#endif

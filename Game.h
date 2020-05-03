#ifndef GAME_H
#define GAME_H

#include "Human.h"
#include "Bot.h"
#include "Player.h"
#include "PlayerFactory.h"
#include "Results.h"

#include <iostream>
using namespace std;

class Game
{
private:
//    Human human;
//    Bot* bot;
    Results* score;
    Player* player1;
    Player* player2;
    Player* winner;
public:
    void play();
    void endGame();
    bool logic(int player1,int player2); //lawrence's sick ass placeholder game mechanicssssss
};

#endif

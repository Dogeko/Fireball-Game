#ifndef GAME_H
#define GAME_H

#include "Human.h"
#include "Bot.h"
#include <iostream>
using namespace std;

class Game
{
private:
    Human human;
    Bot* bot;
public:
    void play();
    void endGame();
    bool logic(); //lawrence's sick ass placeholder game mechanicssssss
};

#endif

#include "Game.h"
#include "Human.h"
#include "PlayerFactory.h"
void Game::play()
{
    // cout << "Press 1 if you want to play against a bot"
    Human p1;
//    Human p2;
    player2 = PlayerFactory::pickPlayer(1);
    bool check = false;
    while (!check)
    {
        p1.Pick();
        cout<< "player 1 choose" << p1.getChoice() << endl;
//        p2.Pick();
        player2->pick();
//        cout<< "player 2 choose" << p2.getChoice() << endl;
        cout<< "player 2 choose" << player2->getChoice() << endl;
//        check = logic(p1.getChoice(), p2.getChoice());
        check = logic(p1.getChoice(), player2->getChoice());
    }
}

bool Game::logic(int p1Choice, int p2Choice)
{
    if (p1Choice == 3 && p2Choice == 1)
    {
        cout << "Player one fried Player 2" << endl;
        return true;
    }
    else if (p1Choice == 1 && p2Choice == 3)
    {
        cout << "Player two fried Player one" << endl;
        return true;
    }
    else if (p1Choice == 4 && p2Choice != 4)
    {
        cout << "Player one is Bruce Lee" << endl;
        return true;
    }
    else if (p1Choice != 4 && p2Choice == 4)
    {
        cout << "Player two is Bruce Lee" << endl;
        return true;
    }
    else{

        if(p1Choice == 4 && p2Choice ==4)
        {
                cout << "start RPS!!!" << endl;
        }
        else if (p1Choice == p2Choice)
        {
            cout << "noting happends" << endl;
        }
        else if ((p1Choice == 1|2) && (p1Choice == 1|2))
        {
            cout << "noting happends" << endl;
        }
        else if (p1Choice == 2 && p2Choice == 3)
        {
            cout << "p1 blocked p2's fireball" << endl;
        }
        else if (p1Choice == 3 && p2Choice == 2)
        {
            cout << "p2 blocked p1's fireball" << endl;
        }
        return false;
    }
}

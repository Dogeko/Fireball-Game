#include "Game.h"

void Game::play()
{
    // cout << "Press 1 if you want to play against a bot"
    cout << "Welcome to Fireball" << endl;
    cout << "Press 1 if you want to play against a human" << endl;
    cout << "Press 2 if you want to play against a bot." << endl;
    int opponent;
    cin >> opponent;

    player1 = PlayerFactory::pickPlayer(1);
    player2 = PlayerFactory::pickPlayer(opponent);
    winner = NULL;

    while (winner == NULL)
    {
        player1->pick();
        player2->pick();

        cout << "Player 1 chose " << player1->getChoice() << " vs " << "Player 2 chose " << player2->getChoice() << endl;

        winner = logic(player1, player2);
    }

    if(winner == player1)
    {
      score.incrementP1();
    }
    else
    {
      score.incrementP2();
    }
    char answer;
    cout << "Do you want to play again? Press Y to play again. ANY OTHER KEY WILL END THE GAME LMAO" << endl;
    cin >> answer;
    if(tolower(answer) == 'y')
    {
      play();
    }
    else
    {
      cout << "GAME OVER LOSER" << endl;
      score.displayResults();
    }

    
}

Player* Game::logic(Player* p1, Player* p2)
{
    if (p1->getChoice() == 3 && p2->getChoice() == 1)
    {
        cout << "Player one fried Player 2" << endl;
        return p1;
    }
    else if (p1->getChoice() == 1 && p2->getChoice() == 3)
    {
        cout << "Player two fried Player one" << endl;
        return p2;
    }
    else if (p1->getChoice() == 4 && p2->getChoice() != 4)
    {
        cout << "Player one is Bruce Lee" << endl;
        return p1;
    }
    else if (p1->getChoice() != 4 && p2->getChoice() == 4)
    {
        cout << "Player two is Bruce Lee" << endl;
        return p2;
    }
    else
    {

        if(p1->getChoice() == 4 && p2->getChoice() == 4)
        {
                cout << "start RPS!!!" << endl;
        }
        else if (p1->getChoice() == p2->getChoice())
        {
            cout << "nothing happends" << endl;
        }
        else if ((p1->getChoice() == 1|2) && (p2->getChoice() == 1|2))
        {
            cout << "nothing happends" << endl;
        }
        else if (p1->getChoice() == 2 && p2->getChoice() == 3)
        {
            cout << "p1 blocked p2's fireball" << endl;
        }
        else if (p1->getChoice() == 3 && p2->getChoice() == 2)
        {
            cout << "p2 blocked p1's fireball" << endl;
        }
        else if(p1->getChoice() == 3 && p2->getChoice() == 3)
        {
            cout << "Your fireballs made a fireball. Nothing happened" << endl;
        }
        return NULL;
    }
}

#include "Game.h"

void Game::play()
{
    // cout << "Press 1 if you want to play against a bot"
    cout << "Welcome to Fireball" << endl;
    cout << endl << "Kill your opponent with fireball or karate chop." << endl;
    cout << "Fireball can be blocked. Karate chop beats all." << endl;
    cout << "Fireball = 1 charge    Karate chop = 3 charges" << endl << endl;
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
    cout << "Do you want to play again? Press Y to play again. ANY OTHER KEY WILL END THE GAME" << endl;
    cin >> answer;
    if(tolower(answer) == 'y')
    {
      play();
    }
    else
    {
      cout << "GAME OVER" << endl;
      score.displayResults();
    }

    
}

Player* Game::logic(Player* p1, Player* p2)
{
    if (p1->getChoice() == 3 && p2->getChoice() == 1)
    {
        cout << "Player 1 burns Player 2" << endl;
        return p1;
    }
    else if (p1->getChoice() == 1 && p2->getChoice() == 3)
    {
        cout << "Player 2 burns Player 1" << endl;
        return p2;
    }
    else if (p1->getChoice() == 4 && p2->getChoice() != 4)
    {
        cout << "Player 1 slices Player 2 in half" << endl;
        return p1;
    }
    else if (p1->getChoice() != 4 && p2->getChoice() == 4)
    {
        cout << "Player 2 slices Player 1 in half" << endl;
        return p2;
    }
    else
    {
        if(p1->getChoice() == 4 && p2->getChoice() == 4)
        {
            cout << "Both karate chops collide and bounce off each other. Nothing happens." << endl;
        }
        else if (p1->getChoice() == p2->getChoice())
        {
            cout << "Nothing happens" << endl;
        }
        else if ((p1->getChoice() == 1|2) && (p2->getChoice() == 1|2))
        {
            cout << "Nothing happens" << endl;
        }
        else if (p1->getChoice() == 2 && p2->getChoice() == 3)
        {
            cout << "Player 1 blocks Player 2's fireball" << endl;
        }
        else if (p1->getChoice() == 3 && p2->getChoice() == 2)
        {
            cout << "Player 2 blocks Player 1's fireball" << endl;
        }
        else if(p1->getChoice() == 3 && p2->getChoice() == 3)
        {
            cout << "Both fireballs collide and dissipates. Nothing happens" << endl;
        }
        return NULL;
    }
}

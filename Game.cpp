#include "Game.h"
#include "Human.h"
#include "PlayerFactory.h"
void Game::play()
{
    // cout << "Press 1 if you want to play against a bot"
//    Human p1;
//    Human p2;
    player1 = PlayerFactory::pickPlayer(1);
    player2 = PlayerFactory::pickPlayer(2);
    winner = null;
    while (winner == null)
    {
        player1->pick();
        cout << "Player 1 choose" << player1->getChoice() << endl;
//        cout<< "player 1 choose" << p1.getChoice() << endl;
//        p2.Pick();
        player2->pick();
//        cout<< "player 2 choose" << p2.getChoice() << endl;
        cout << "Player 2 choose" << player2->getChoice() << endl;
//        check = logic(p1.getChoice(), p2.getChoice());
        winner = logic(player1, player2);
    }
    if(winner == player1){
      score.incrementP1();
    }
    else{
      score.incrementP2();
    }
    char answer;
    cout << "Do you want to play again? Press Y to play again. ANY OTHER KEY WILL END THE GAME LMAO" << endl;
    cin >> answer;
    if(answer.toLower() = 'y') //this is java
    {
      delete player1;
      delete player2;
      play();
    }
    else{
      cout << "GAME OVER LOSER" << endl;
      score.displayResults();
    }

    
}

player Game::logic(Player p1, Player p2)
{
    if (p1.getChoice() == 3 && p2.getChoice() == 1)
    {
        cout << "Player one fried Player 2" << endl;
        return p1;
    }
    else if (p1.getChoice() == 1 && p2.getChoice() == 3)
    {
        cout << "Player two fried Player one" << endl;
        return p2;
    }
    else if (p1.getChoice() == 4 && p2.getChoice() != 4)
    {
        cout << "Player one is Bruce Lee" << endl;
        return p1;
    }
    else if (p1.getChoice() != 4 && p2.getChoice() == 4)
    {
        cout << "Player two is Bruce Lee" << endl;
        return p2;
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
        return null;
    }
}

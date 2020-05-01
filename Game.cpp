#include "Game.h"
#include "Human.h"

void Game::play()
{
	// cout << "Press 1 if you want to play against a bot"
  Human p1 = new Human();
  Human p2 = new Human();
  bool endGame = false;
  while(endGame){
    p1.Pick();
    p2.Pick();
    endGame = logic(p1.getChoice(),p2.getChoice());
  }
}

bool Game::logic(int p1Choice, int p2Choice)
{
  if(p1Choice == 3 && p2Choice == 1){
    cout << "Player one fried Player 2";
    return true;
  }
  else if(p1Choice == 1 && p2Choice == 3){
    cout << "Player two fried Player one" <<endl;
    return true;
  }
  else if(p1Choice == 4 && p2Choice != 4){
    cout << "Player one is Bruce Lee" << endl;
    return true;
  }
  else if(p1Choice != 4 && p2Choice == 4){
    cout << "Player two is Bruce Lee" << endl;
    return true;
  }
  else{
    if(p1Choice == 4 && p2Choice ==4){
      //start RPS
    }
    return false;
  }
}

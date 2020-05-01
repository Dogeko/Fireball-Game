#include "Bot.h"

int Bot::getCharges()
{
	return charges;
}

int Bot::getChoice()
{
	return choice;
}

void Bot::setChoice(int c)
{
  this.choice = c;
}

void Bot::pick()
{
  choice = (rand() % 4) +1;
  switch (choice)
  {
  case 1:
    cout << "your opponent charged." << endl;
    setChoice(1);
    this.charges++; //idk if this works in cpp haha
    break;
  case 2:
    cout << "your opponent shielded." << endl;
    setChoice(2);
    //somethingsomething
  case 3:
    if(this.charges > 1){
      pick();
    }
    else{
      cout << "your opponent wanted to light you on fire" << endl;
      this.charges--;
      //make other play go boom
    }
    break;
  case 4:
    if(this.charges > 3)
      Pick();
    else
      this.charges = this.charges - 3;
      //make other player go big boom.
    break;

}

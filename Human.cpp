#include "Human.h"

int Human::getCharges()
{
	return charges;
}

int Human::getChoice()
{
	return choice;
}

void Human::setChoice(int choice)
{
  this.charges = choice;
}

void Human::Pick()
{
  // we can change this later depending on states.
  cout << "Choose a move  \n1 = Charge, 2 = Shield, 
    3 = Fireball, 4 = CHOP CHOP MF"
  cin >> choice;
  switch (choice)
  {
  case 1:
    setChoice(1);
    this.charges++; //idk if this works in cpp haha
    break;
  case 2:
    setChoice(2);
    //somethingsomething
  case 3:
    if(this.charges > 1){
      cout << "haha you stupid you need charges";
      Pick();
    }
    else{
      setChoice(3);
      this.charges--;
    }
      //make other play go boom
    break;
  case 4:
    if(this.charges > 3){
      cout << "you even stupider omg";
      Pick();
    }
    else{
      cout << "haha enemy go brrrr";
      setChoice(4);
      this.charges = this.charges - 3;
    }
      //make other player go big boom.
    break;
  default:
    Pick();
    break;
  }
}

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
  choice = c;
}

void Bot::pick() {
    choice = (rand() % 4) + 1;
    switch (choice) {
        case 1:
            cout << "your opponent charged." << endl;
            setChoice(1);
            charges++; //idk if this works in cpp haha
            cout<<"charge is "<<charges<<endl;
            break;
        case 2:
            cout << "your opponent shielded." << endl;
            setChoice(2);
            cout<<"charge is "<<charges<<endl;
            break;
            //somethingsomething
        case 3:
            if (charges > 1) {
                pick();
            } else {
                cout << "your opponent wanted to light you on fire" << endl;
                charges--;
                cout<<"charge is "<<charges<<endl;
                //make other play go boom
            }
            break;
        case 4:
            if (charges < 3)
                pick();
            else
                charges = charges - 3;
            //make other player go big boom.
            break;
    }
}

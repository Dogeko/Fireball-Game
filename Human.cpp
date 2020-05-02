#include "Human.h"

int Human::getCharges()
{
	return charges;
}

int Human::getChoice()
{
	return choices;
}

void Human::setChoice(int choice)
{
  choices = choice;
}

void Human::Pick()
{
    // we can change this later depending on states.
    cout << "Choose a move  \n1 = Charge, 2 = Shield, 3 = Fireball, 4 = CHOP CHOP MF" << endl;
    cin >> choices;
    switch (choices)
    {
    case 1:
        setChoice(1);
        charges++; //idk if this works in cpp haha
        cout<< "charge is "<< charges << endl;
        break;
     case 2:
        setChoice(2);
        cout<< "shielding" << endl;
        cout<< "charge is "<< charges << endl;
        break;
        //somethingsomething
    case 3:
        if (charges < 1)
        {
            cout << "haha you stupid you need charges" << endl;
            Pick();
        }
        else
        {
            setChoice(3);
            charges--;
            cout<< "charge is "<< charges << endl;
        }
        //make other play go boom
        break;
    case 4:
        if (charges < 3)
        {
            cout << "you even stupider omg" << endl;
            Pick();
        }
        else
        {
            cout << "haha enemy go brrrr";
            setChoice(4);
            charges = charges - 3;
        }
        //make other player go big boom.
        break;
    default:
        Pick();
        break;
    }
}

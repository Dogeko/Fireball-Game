#include "Game.h"
#include <bits/stdc++.h>

//enum menuChoices{
//	play = "play",
//	rules = "rules",
//	exit = "exit"
//};

void Game::play()
{
    // cout << "Press 1 if you want to play against a bot"
//    cout << "Welcome to Fireball" << endl;
//    cout << endl << "Kill your opponent with fireball or karate chop." << endl;
//    cout << "Fireball can be blocked. Karate chop beats all." << endl;
//    cout << "Fireball = 1 charge    Karate chop = 3 charges" << endl << endl;
	cout<<"Game Starting..."<<endl;
	cout<<"select your opponent:"<<endl;
    cout << "Press 1 if you want to play against a human" << endl;
    cout << "Press 2 if you want to play against a bot" << endl;
    int opponent;
    cin >> opponent;

    player1 = PlayerFactory::pickPlayer(1);
    player2 = PlayerFactory::pickPlayer(opponent);
    winner = NULL;

    cout<<"Game has Begun!"<<endl;
    while (winner == NULL)
    {
    	cout<<"Player 1's Charges:"<<player1->getCharges()<<"  "<<"Player 2's Charges:"<<player2->getCharges()<<endl;

    	cout<<"Player 1 Make your move"<<endl;
        player1->pick();
        cout<<"Player 2 Make your move"<<endl;
        player2->pick();

        winner = logic(player1, player2);
    }

    if(winner == player1)
    {
      score.incrementP1();
      cout<<"Player 1 Wins!"<<endl;
    }
    else
    {
      score.incrementP2();
      cout<<"Player 2 Wins!"<<endl;
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
    	cout<<endl;
    	cout << "GAME OVER" << endl;
    	score.displayResults();
    	cout<<endl;

    }

    
}

Player* Game::logic(Player* p1, Player* p2)
{
	string player1Choice, player2Choice;

	if(player1->getChoice() == 1){
		player1Choice = "Charge";
	}
	else if(player1->getChoice() == 2){
		player1Choice = "Shield";
	}
	else if(player1->getChoice() == 3){
		player1Choice = "Fireball";

	}
	else if(player1->getChoice() == 4){
		player1Choice = "Karate Chop";

	}

	if(player2->getChoice() == 1){
		player2Choice = "Charge";
	}
	else if(player2->getChoice() == 2){
		player2Choice = "Shield";
	}
	else if(player2->getChoice() == 3){
		player2Choice = "Fireball";

	}
	else if(player2->getChoice() == 4){
		player2Choice = "Karate Chop";

	}

	cout << "Player 1 used " << player1Choice << " vs " << "Player 2 used " << player2Choice << endl;

    if (p1->getChoice() == 3 && p2->getChoice() == 1)
    {
        cout << "Player 1 burns Player 2" << endl;
        cout<<endl;

        return p1;
    }
    else if (p1->getChoice() == 1 && p2->getChoice() == 3)
    {
        cout << "Player 2 burns Player 1" << endl;
        cout<<endl;

        return p2;
    }
    else if (p1->getChoice() == 4 && p2->getChoice() != 4)
    {
        cout << "Player 1 slices Player 2 in half" << endl;
        cout<<endl;

        return p1;
    }
    else if (p1->getChoice() != 4 && p2->getChoice() == 4)
    {
        cout << "Player 2 slices Player 1 in half" << endl;
        cout<<endl;

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
            cout << "nothing happened" << endl;
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

        cout<<endl;

        return NULL;
    }

}

void Game::menu(){
	string menuSelection;
	bool exitFireball = false;

	cout<<"Welcome to Fireball!"<<endl;

	while(!exitFireball){
		cout<<"*****************MENU*************************"<<endl;
		cout<<"Type 'play' to play Fireball!"<<endl;
		cout<<"Type 'rules' to read rules of Fireball"<<endl;
		cout<<"Type 'exit' to exit Fireball"<<endl;
		cin>>menuSelection;

		transform(menuSelection.begin(), menuSelection.end(), menuSelection.begin(),::tolower);

		if(menuSelection == "play" || menuSelection == "rules" || menuSelection == "exit"){


			if(menuSelection == "play"){
					play();
			}
			else if(menuSelection == "rules"){

				cout<<"*******************FIREBALL RULES************************"<<endl;
				cout << endl << "Kill your opponent with fireball or karate chop." << endl;
			    cout << "Fireball can be blocked. Karate chop beats all." << endl;
			    cout << "Fireball = 1 charge    Karate chop = 3 charges" << endl << endl;

			}
			else if(menuSelection == "exit"){
				cout<<"Exiting Fireball goodbye"<<endl;
				exitFireball = true;
			}

		}
		else{
			cout<<"INVALID OPTION PLEASE SELECTION VALID MENU OPTION"<<endl;
		}
	}

}

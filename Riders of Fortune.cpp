// Riders of Fortune.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void Start_Messege ();
int  Battle(int, int);
int  Weapon(int);
int  Empty(int);
 
int main()
{
	//position of player starts at 1
	int Position = 1;
	int Exploration = 0;
	int Player_Attack = 1;
	int Player_XP = 0;
	int Action = 0;
	

	Start_Messege();

	system("cls");

	

	do
	{
		//displays where the player goes
		cout << "P * * * * * * * * * * * * * * * * * * * * * * * * * * D" << endl;
		
		//Dice roll to determine how far the player goes
		srand((unsigned)time(0));
		
		//new player position
		Position = (rand() % 6) + Position;

		//explore or leave area
			cout << "Will you explore this newly arrived area or leave for another destination?\n" <<
					"Enter in '1' if you wish to stay or '2' if you wish to go to a new area.\n\n";
			cout << "Attack : " << Player_Attack << endl;
			cout << "XP :"      << Player_XP << endl;
			cin >> Exploration;
			
			if (Exploration == 1)
			{
				Action = (rand() % 3);
				if (Action == 1)
				{
					Battle(Player_Attack, Player_XP);
				}
				else(Action == 2)
				{
					Weapon(Player_Attack);
				}
				else if (Action == 3)
				{ 
					Empty(Player_XP);
				}
			else if (Exploration == 2)
			{
				cout << "You depart for the next area.\n\n";
			}
		
		system("pause");

		system("cls");

	} while (Position < 28); // Counter till the fight with the dragon

	return 0;
}

void Start_Messege ()
{
	//Start screen
	cout << "You as play Yarra, a young horseman in search of the of the illustrious Chalice of Knowledge,\n" <<
		"an artifact that will bring you everlasting wisdom.The Chalice can only be found in dragon's dungeon \n" <<
		"after defeating the dragon. Are you strong or brave enough for the journey ahead?\n\n\n";

	// how to play then start

	cout << "Yarra will have will have Experience Points(XP) that start at 0. He starts with a knife, \n" <<
		"but can be upgrad his weapon. He can also arrack monsters and if he beats them, they will \n" <<
		"drop xp.\n\n";
	
	system("pause");
}

int Battle(int Player_Attack, int Player_XP)
{

	cout << "You fought";
	
	return (Player_Attack, Player_XP);
}

int Weapon(int Player_Attack)
{
	int Attack_Increase = 1;

	Player_Attack = Attack_Increase + Player_Attack;
	cout << "Your new attack is " << Player_Attack;

	return (Player_Attack);
}

int Empty(int Player_XP)
{
	Player_XP = Player_XP + 1;
	cout << "Player XP" << Player_XP << ".";

	return (Player_XP);
}
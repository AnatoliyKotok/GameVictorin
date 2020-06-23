#include<iostream>
#include"Game.h"
#include"Qestion.h"
using namespace std;
int main()
{

	srand(time(NULL));
	Game game;
	game.run();
	system("pause");
	return 0;

}
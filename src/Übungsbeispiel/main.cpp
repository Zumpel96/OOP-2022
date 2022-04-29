#include <iostream>
#include "Game.h"

int main()
{
	try {
		Game* game = new Game();
		game->Start();
		delete game;
	}
	catch (const std::runtime_error& ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (...) {
		std::cout << "ERROR!" << std::endl;
	}
}
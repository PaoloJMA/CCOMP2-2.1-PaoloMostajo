#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

class Game{
public: 
	Game();
	virtual ~Game();

	void mainMenu();

	bool getPlay() const {
		return playing;
	}

private:

	int choice;
	bool playing;

};


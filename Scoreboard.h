#pragma once
#include <string>
#include <SFML/Audio.hpp>
#include "const.h"
#include "Menu.h"

enum GameMode {
	NORMAL,
	SURVIVAL,
	DEATH_TRAP,
	SURVIVE_HELL
};

struct Player {
	std::string _name;
	float _score = 0;
};

class Scoreboard {
public:

	Scoreboard();
	~Scoreboard();
	void loadData();


	bool checkScore(float score, GameMode mode) const; //returns true if score is at least in top 10
	void addScore(float score, std::string name, GameMode mode); //adds the score to the scoreboards

	void showMenu(); //show the menu when selected in main menu
	void showScore(GameMode mode); //shows the selected mode


private:
	Player readPlayer(std::fstream& file);
	void writeToFile(float score);
	//float _scoreboardScore[4][NUMBER_OF_SCORES];
	//std::string _scoreboardNames[4][NUMBER_OF_SCORES];
	Player _scoreboardData[4][NUMBER_OF_SCORES];
};


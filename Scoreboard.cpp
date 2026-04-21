#include <fstream>
#include <iostream>
#include "Scoreboard.h"

void openFile(std::fstream& file,std::string filepath) {
	file.open(filepath, std::ios::in | std::ios::out);
	if (!file.is_open()) {
		std::cout << "Failed to open file : " << filepath;
		std::cin.get();
		exit(1);
	}
}

Scoreboard::Scoreboard()
{
	loadData();
}

Scoreboard::~Scoreboard()
{

}

void Scoreboard::loadData()
{
	std::fstream file;
	std::string tempName;

	openFile(file, "res/scoreboard/NORMAL_SCOREBOARD");

	for (int i = 0; i < NUMBER_OF_SCORES; i++)
	{
		_scoreboardData[0][i] = readPlayer(file);
	}
	openFile(file, "res/scoreboard/SURVIVAL_SCOREBOARD");

	for (int i = 0; i < NUMBER_OF_SCORES; i++)
	{
		_scoreboardData[1][i] = readPlayer(file);
	}
	openFile(file, "res/scoreboard/DEATH_TRAP_SCOREBOARD");

	for (int i = 0; i < NUMBER_OF_SCORES; i++)
	{
		_scoreboardData[2][i] = readPlayer(file);
	}
	openFile(file, "res/scoreboard/SURVIVE_HELL_SCOREBOARD");

	for (int i = 0; i < NUMBER_OF_SCORES; i++)
	{
		_scoreboardData[3][i] = readPlayer(file);
	}
}

bool Scoreboard::checkScore(float score, GameMode mode) const
{
	if (score > _scoreboardData[mode][0]._score)
		return true;
	return false;
}

void Scoreboard::addScore(float score, std::string name, GameMode mode)
{
	_scoreboardData[mode][0]._score = score;
}

void Scoreboard::showMenu()
{

}

void Scoreboard::showScore(GameMode mode)
{
}

Player Scoreboard::readPlayer(std::fstream& file) {
	std::string buffer;
	getline(file, buffer);
	Player tempPlayer;
	tempPlayer._name = buffer;
	file >> buffer;
	tempPlayer._score = stof(buffer);

	return tempPlayer;
}

void Scoreboard::writeToFile(float score)
{
}
